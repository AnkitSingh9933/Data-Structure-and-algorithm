bool isPossible(vector<int> &stalls,int n,int k,int mid){
  int cowCount=1;
  int lastpos=stalls[0];
  for(int i=0;i<n;i++){
    if(stalls[i]-lastpos>=mid){
      cowCount++;
      lastpos=stalls[i];
      if(cowCount==k){
        return true;
      }
    }
  }
  return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
   sort(stalls.begin(),stalls.end());
    int s=0;
    int n=stalls.size();
    int e=stalls[n-1];
    int ans=-1;
    
    while(s<=e){
      int mid=s+(e-s)/2;
      if(isPossible(stalls,n,k,mid)){
        ans=mid;
        s=mid+1;
      }
      else{
        e=mid-1;
      }
    }
    return ans;
}

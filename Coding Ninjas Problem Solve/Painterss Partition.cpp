bool isPossible(vector<int> &boards,int n, int k,int mid){
    int painters=1;
    int painted=0;
    for(int i=0;i<n;i++){
        if(painted+boards[i]<=mid){
            painted+=boards[i];
        }
        else{
            painters++;
            if(painters>k || boards[i]>mid){
                return false;
            }
            painted=boards[i];
    }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=0;
    int n=boards.size();
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int e=sum;
    int ans=-1;
    
    while(s<=e){
    int mid=s+(e-s)/2;
    if(isPossible(boards,n,k,mid)){
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return ans;
}

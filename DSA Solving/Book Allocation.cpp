bool isPossible(vector<int>& arr, int n, int m,int mid){
    int countstudent=1;
    int countpage=0;
    for(int i=0;i<n;i++){
        if(countpage+arr[i]<=mid){
            countpage+=arr[i];
            
        }
        else{
            countstudent++;
            if(countstudent>m || arr[i]>mid){
                return false;
            }
           countpage=arr[i]; 
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
  
    int s=0;
    int sum=0;
    if(m>n){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
            }
            else{
                s=mid+1;
            }
    
}
return ans;
}

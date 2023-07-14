#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int target=K-arr[i];
        int s=i+1;
        int e=n-1;
        while(s<e){
            int sum=arr[s]+arr[e];
            if(sum>target){
                e--;
            }
            else if(sum<target){
                s++;
            }
            else{
                ans.push_back({arr[i],arr[s],arr[e]});
                int x=arr[s];
                int y=arr[e];
                while(s<e && arr[s]==x){
                    s++;
                }
                while(s<e && arr[e]==y){
                    e--;
                }
                
            }
        }
        while(i+1<n && arr[i]==arr[i+1]){
            i++;
        }
        
    }
    return ans;
}

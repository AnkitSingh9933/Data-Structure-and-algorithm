#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    for(int i=1; i<n; i++){
        
        int StoreValue = arr[i];
        int j = i-1;
        
        while(j >= 0 && arr[j] > StoreValue){ //Both The Condition To Be True;
            
            arr[j+1] = arr[j];
            
            j--;
            
        }
        
        arr[j+1] = StoreValue; //loop break k baad value put kr do;
    }
}

#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n; i++){

        int MinIndex = i;
        
        for(int j=i+1; j<n; j++){

            if(arr[MinIndex] > arr[j]){
                
                MinIndex = j;
                
            }
        }
        if(i!=MinIndex){
       swap(arr[MinIndex],arr[i]); 
        }
    }
    
}

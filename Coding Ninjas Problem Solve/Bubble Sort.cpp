#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
     bool swaped=0; //startin mein swap false hain;
   
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n-i-1; j++){
            
            if(arr[j] > arr[j+1]){
                
                swap(arr[j+1],arr[j]);
                
                swaped = 1; //swap hone per true it means 1;
            }
        }
        if(swaped == 0){ //agar ek v swap nhi hua then 2nd loop ko no use
            break; //then we break and the T.C is 0(n);
        }
       
   
    }
 
}

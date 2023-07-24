#include <bits/stdc++.h> 

void selectionSort(vector<int>& arr, int n)

{   

    for(int i=0; i<(n-1); i++){//for fixeing the value of arr[i];

        

        int MinIndex = i;

 

       

 

        for(int j=i+1; j<n; j++){   // →for triverse i+1 which is equal to j;

 

            if(arr[MinIndex] > arr[j]){

                

                MinIndex = j;

                

            }

        }

        

        swap(arr[MinIndex], arr[i]);      //→swap kro minindex ka value ko fixed arr[i] k sath and return to loop 1;

    }

}

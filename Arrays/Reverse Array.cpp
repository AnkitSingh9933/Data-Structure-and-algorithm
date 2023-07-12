#include<iostream>
using namespace std;
void reverse(int arr[],int n){
   int s=0;
   int e=n-1;
   while(s<=e){
    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    s++;
    e--;
   }
   
   


}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[100];
   
    int n;
    cout<<"Enter The Size : ";
    cin>>n;
    cout<<"Enter The Array For Reverse : "<<" ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    printarray(arr,n);
}

#include<iostream>
using namespace std;

int arrsum(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count=count+arr[i];
    }
    return count;
}

int main(){

int arr[100];
int size;
cout<<"Enter The Size : ";
cin>>size;

cout<<"Enter The Value : ";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
int ans=arrsum(arr,size);
cout<<ans;
}

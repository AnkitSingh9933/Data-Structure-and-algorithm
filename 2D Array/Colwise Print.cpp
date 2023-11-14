#include<iostream>
using namespace std;

int main(){
    //Takin input rowwise
    int i,j;
    cout<<"Enter The Value Of  Row and Col ";
    cin>>i>>j;
    int arr[i][j];
    cout<<"Enter The Number For Print : ";
    for(int col=0; col<j; col++){
        for(int row=0; row<i; row++){
            cin>>arr[row][col];
        }
    }

     for(int row=0; row<i; row++){
        for(int col=0; col<j; col++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }
}

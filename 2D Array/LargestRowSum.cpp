#include <iostream>
using namespace std;

void printraw(int arr[][4], int raw, int col)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j= 0; j < 4; j++)
        {
              
            sum += arr[i][j];
            
        }
        cout << sum<<" ";
       
    }
}

int Largestsum(int arr[][4], int raw, int col){
    int maxi = -1;
    int rawindex = -1;
  

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
          sum = sum + arr[i][j];    
            }
            if(sum > maxi){
                maxi = sum;
                rawindex = i;
            }

    }

    cout<<"The Number is : "<<maxi;
    return rawindex;
}


// Taking Raw Wise Input
int main()
{

    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "ans is ";
    printraw(arr, 3, 4);
    cout<<endl;
    int ans = Largestsum(arr,3,4);
    cout<<"index is : "<<ans;

}

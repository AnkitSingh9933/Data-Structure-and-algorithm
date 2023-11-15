#include <iostream>
using namespace std;

void printraw(int arr[][4], int raw, int col)
{
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        
        for (int raw = 0; raw < 3; raw++)
        {
              
            sum += arr[raw][col];
            
        }
        cout << sum<<" ";
       
    }
}

// Taking Raw Wise Input
int main()
{

    int arr[3][4];

    cout<<"Enter The Num For Rowwisesum : ";

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
    cout << " Rowwise Sum Is ";
    printraw(arr, 3, 4);
}

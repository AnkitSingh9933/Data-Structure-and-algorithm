#include <iostream>
using namespace std;

int findmaxi(int arr[], int n)
{

    int maxi = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int findmini(int arr[], int n)
{

    int mini = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int main()
{

    int arr[100];
    int size;
    cout << "Enter The Size Of An Array : ";
    cin >> size;

    cout << "Enter The Value Of An Array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans1 = findmaxi(arr, size);
    int ans2 = findmini(arr,size);

    cout << "Maximum Value -> " << ans1<<endl;
     cout << "Minimum Value -> " << ans2<<endl;
}

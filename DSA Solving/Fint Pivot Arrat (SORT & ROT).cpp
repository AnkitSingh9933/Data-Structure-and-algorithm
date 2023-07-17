#include <iostream>
using namespace std;

int piviot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

int main()
{

    int arr[5] = {7, 9, 1, 2, 3};
    int n = 5;
    int ans = piviot(arr, n);
    cout << "Pivot iis  : " << ans;
}

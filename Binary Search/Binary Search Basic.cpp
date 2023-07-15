#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int key = 5;

    int ans = binarysearch(arr, n, key);
    cout << "Inedx is : " << ans;
}

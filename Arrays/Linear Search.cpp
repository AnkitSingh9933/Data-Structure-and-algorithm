#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the Key : ";
    cin >> key;
    bool found = search(arr, n, key);
    if (found)
    {
        cout << "Avilabe";
    }
    else
    {
        cout << "Not Avilable";
    }
}

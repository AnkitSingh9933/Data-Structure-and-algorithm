// Reverse Of An Array Using User Input;
#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {

        if (i + 1 < size)
        {
            int a = i;
            int b = i + 1;
            // swap(arr[i], arr[i + 1]);
            int temp = arr[b];
            arr[b] = arr[a];
            arr[a] = temp;
        }
    }
}
int main()
{

    int n;
    cout << "Enter The Size Of An Array : ";
    cin >> n;

    int arr[100];
    cout << "Enter The Value Of An Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Orignal Arry is : "
         << " ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    reverse(arr, n);
    cout << "After Reversing : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

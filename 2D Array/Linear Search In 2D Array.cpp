#include <iostream>
using namespace std;

bool ispresent(int arr[][4], int a, int b, int key)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // Takin input rowwise

    int arr[3][4];
    cout << "Enter The Number For Print : ";
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter The Key : ";
    cin >> key;

    if (ispresent(arr, 3, 4, key))
    {
        cout << "Hain Bhai Hain Bach Gya Tu ";
    }
    else
    {
        cout << "Tera Luck Khrb Hain Vau ";
    }
}

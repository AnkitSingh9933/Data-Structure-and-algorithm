#include <bits/stdc++.h> 

int leftocc(vector<int>& arr, int n, int k)

{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int rightocc(vector<int>& arr, int n, int k)

{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=leftocc(arr,n,k);
    p.second=rightocc(arr,n,k);
    return p;
}

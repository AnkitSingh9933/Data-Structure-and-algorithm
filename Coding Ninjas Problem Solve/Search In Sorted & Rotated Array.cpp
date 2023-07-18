int getPivot(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[0])
        {
           s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}

int BinarySearch(vector<int>& arr, int s, int e, int k) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] > k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k) {
    int pivotIndex = getPivot(arr, n);
    if (arr[pivotIndex] <= k && k <= arr[n - 1]) {
        return BinarySearch(arr, pivotIndex, n - 1, k);
    } else {
        return BinarySearch(arr, 0, pivotIndex - 1, k);
    }
}

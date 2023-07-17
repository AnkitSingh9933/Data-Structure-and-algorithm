long long int binary(int n)
{
    int s = 0;
    int e = n - 1;
    long long int ans = -1;
    while (s < e)
    {
        long long int mid = s + (e - s) / 2;
        long long int sqr = mid * mid;
        if (sqr > n)
        {
            e = mid - 1;
        }
        else if (sqr < n)
        {

            ans = mid;
            s = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return ans;
}
int floorSqrt(int n)
{
    return binary(n);
}

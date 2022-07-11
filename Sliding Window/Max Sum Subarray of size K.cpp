// Max Sum Subarray of size K

long maximumSumSubarray(int K, vector<int> &arr, int N)
{
    // code here
    long sum = 0;
    long mx = INT_MIN;
    int i = 0, j = 0;
    while (j < N)
    {
        sum = sum + arr[j];
        if (j - i + 1 < K)
            j++;
        else if (j - i + 1 == K)
        {
            mx = max(mx, sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    return mx;
}
#include <bits/stdc++.h>
using namespace std;
int Min(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    if (n == 1)
        ans = arr[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }
        if (arr[low] <= arr[mid])
        {
            ans = min(arr[low], ans);
            low = mid + 1;
        }
        else
        {
            ans = min(arr[mid], ans);
            high = mid - 1;
        }
    }
    return ans;
}
int Position(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
int y = Min(arr);
    while (low <= high)
    {

    }
}
int main()
{
    int n;
    cout << ("Enter n :");
    cin >> n;
    vector<int> arr(n);
    cout << ("Enter a Rotated Sorted Array :");
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int y = Min(arr);
    cout << y;
    return 0;
}
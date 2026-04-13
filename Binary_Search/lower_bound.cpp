#include <bits/stdc++.h>
using namespace std;
int LowerBound(vector<int> &arr, int x)
{
    int n = arr.size();
    int ans = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}
int main()
{
    int n;
    cout << ("enter n :");
    cin >> n;
  vector<int> arr(n);
    cout << ("Enter Array :");
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    int x;
    cout << ("Enter x:");
    cin >> x;
    int result = LowerBound(arr, x);
    cout << result << "\n";
    return 0;
}
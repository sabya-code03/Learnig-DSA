// first and last occurancen of an element in a given array
// best
// without using upper and lower bound
#include <bits/stdc++.h>
using namespace std;
int first(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int f = -1;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            f = mid;
            high = mid - 1;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
}
int last(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int l = -1;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            l = mid;
            low = mid + 1;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
}
int main()
{
    int n;
    cout << ("Enter n :");
    cin >> n;
    vector<int> arr(n);
    cout << ("Enter Array:");
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << ("Enter x :");
    cin >> x;
    int y = first(arr, x);
    int z = last(arr, x);
    cout << "First occurrence: " << y << "\n";
    cout << "Last occurrence: " << z << "\n";
    return 0;
}
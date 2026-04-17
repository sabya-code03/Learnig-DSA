// search an element in roated sorted array

#include <bits/stdc++.h>
using namespace std;
int Search(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
  //left sorted
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= x && x <= arr[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
 //right sorted
        else
        {
            if (arr[mid] <= x && x <= arr[high])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n ;
    cout<<("Enter n :");
    cin>>n;
    vector<int> arr(n);
    cout<<("Enter a Rotated Sorted Array :");
    for(int i = 0 ; i<=n ; i++)
    {
        cin>> arr[i];
    }
    int x ;
    cout<<("Enter x :");
    cin>>x;
    int y = Search(arr,x);
    cout<<y;
    return 0;
}
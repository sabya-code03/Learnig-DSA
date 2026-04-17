// Search a single element sorted array
// Brutt
#include <bits/stdc++.h>
using namespace std;
int Search(vector<int>& arr)
{
    int n = arr.size();
    if (n == 1)
       return arr[0];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {

            if (arr[i] != arr[i + 1])
                return arr[i];
        }
        else if (i == n - 1)
        {
            if (arr[i] != arr[i - 1])
                return arr[i];
        }
        else
        {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
    }
    return -1;
}
int main()
{
    int n ;
    cout<<("Enter n (should be odd):");
    cin>>n;
    vector<int> arr(n);
    cout<<("Enter a Sorted Array with one single member :");
    for(int i = 0 ; i<n ; i++)
    {
        cin>> arr[i];
    }
    int y = Search(arr);
    cout<<"Single elemet is :" <<y;
    return 0;
}
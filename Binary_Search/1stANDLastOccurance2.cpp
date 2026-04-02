// first and last occurancen of an element in a given array
// bettder
//using upper and lower bound
#include<bits/stdc++.h>
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
int Upperbound(vector<int> &arr, int x)
{
    int n = arr.size();
    int ans = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}
pair<int,int> fandl(vector<int>& arr, int x)
{
int first = LowerBound(arr,x);
int last = Upperbound(arr,x)-1;
return {first,last};
}
int main()
{
    int n ;
    cout<<("Enter n :");
    cin>>n;
    vector<int> arr(n);
    cout<< ("Enter Array:");
    for(int i = 0 ; i<n ; i++)
    {
        cin>> arr[i];
    }
    int x ;
    cout<<("Enter x :");
    cin>>x;
    pair<int,int> y =fandl(arr,x);
cout << "First occurrence: " << y.first << "\n";
    cout << "Last occurrence: " << y.second << "\n";
    return 0;
}
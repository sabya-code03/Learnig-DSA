// Search a single element sorted array
// optimied
#include<bits/stdc++.h>
using namespace std;
int Search(vector<int>& arr )
{
    int n = arr.size();
    int low = 0; int high =n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
          if(arr[mid] != arr[mid-1] && arr[mid] !=arr[mid+1]) return arr[mid];
          else if((mid%2 == 0 && arr[mid] == arr[mid+1]) ||(mid%2 == 1 && arr[mid] == arr[mid-1]) )
          {
            low = mid+1;
          }
          else{
            high = mid-1;
          }
    }
    
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
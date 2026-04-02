// first and last occurancen of an element in a given array
// brutt
#include<bits/stdc++.h>
using namespace std;
pair<int,int> FirstandLast(vector<int>& arr , int x){
    int n = arr.size();
    int f =-1; 
    int l =-1;
    for(int i = 0 ; i<n ; i++)
    {
if(x ==arr[i]) {
    if(f ==-1) f=i;
    l =i;
}
    }
    return {f,l};
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
    pair<int,int> y =FirstandLast(arr,x);
cout << "First occurrence: " << y.first << "\n";
    cout << "Last occurrence: " << y.second << "\n";
    return 0;
}
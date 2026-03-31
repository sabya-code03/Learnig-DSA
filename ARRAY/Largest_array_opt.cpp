#include <bits/stdc++.h>

using namespace std;
int largest_Array(vector < int > & a, int n)
{
    int largest = a[0];
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]> largest) {
            largest = max(a[i], largest);
        }
    }
    return largest;
}
int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
  cout<<  largest_Array(a, n);

}
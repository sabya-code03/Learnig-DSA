#include <bits/stdc++.h>

using namespace std;
int S_largest_Array(vector < int > & a, int n)
{
    int largest = a[0];
    int SecondLargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest) {
            SecondLargest = largest;
            largest = a[i];

        }
        else if (a[i] != largest && a[i] > SecondLargest)
        {
            SecondLargest = a[i];
        }
    }
    return SecondLargest;
}
int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << S_largest_Array(a, n);
}
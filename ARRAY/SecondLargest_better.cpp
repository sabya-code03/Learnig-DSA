#include <bits/stdc++.h>

using namespace std;
int S_largest_Array(vector < int > & a, int n)
{
    int largest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest) {
            largest = max(a[i], largest);
        }
    }
    int SecondLarge = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > SecondLarge && a[i] < largest)
            SecondLarge = a[i];
    }
    return SecondLarge;
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
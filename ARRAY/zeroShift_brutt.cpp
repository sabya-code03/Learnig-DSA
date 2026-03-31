#include <bits/stdc++.h>

using namespace std;
void ZeroShift(vector < int > & a, int n)
{
    vector < int > nonzero;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0) nonzero.push_back(a[i]);
    }
    for (int i = 0; i < nonzero.size(); i++)
    {
        a[i] = nonzero[i];
    }
    for (int i = nonzero.size(); i < n; i++)
    {
        a[i] = 0;
    }
}
int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ZeroShift(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
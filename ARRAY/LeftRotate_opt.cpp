#include <bits/stdc++.h>

using namespace std;
void LeftRotate_Dplace(vector<int> &a, int d)
{
    int n = a.size();
    d = d % n;
    reverse(a.begin(), a.begin() + d);
    reverse(a.begin() + d, a.end());
    reverse(a.begin(), a.end());
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int d;
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    LeftRotate_Dplace(a, d);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
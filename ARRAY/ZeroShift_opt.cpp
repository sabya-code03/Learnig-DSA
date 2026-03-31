#include <bits/stdc++.h>

using namespace std;
void ZeroShift(vector<int> &a, int n)
{

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
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
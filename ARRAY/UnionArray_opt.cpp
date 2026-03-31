#include <bits/stdc++.h>
using namespace std;
vector<int> UnionArray(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    vector<int> uniarr;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] == b[j])
        {
            if (uniarr.empty() || uniarr.back() != a[i])
                uniarr.push_back(a[i]);
            i++;
            j++;
        }
        if (a[i] <b[j])
        {
            if (uniarr.size() == 0 || uniarr.back() != a[i])
            {
                uniarr.push_back(a[i]);
                i++;
            }
        }
        else
        {
            if (uniarr.size() == 0 || uniarr.back() != b[j])
            {
                uniarr.push_back(b[j]);
                j++;
            }
        }
    }
    while (i < n1)
    {
        if (uniarr.size() == 0 || uniarr.back() != a[i])
        {
            uniarr.push_back(a[i]);
            i++;
        }
    }
    while (j < n2)
    {
        if (uniarr.size() == 0 || uniarr.back() != b[j])
        {
            uniarr.push_back(b[j]);
            j++;
        }
    }
    return uniarr;
}
int main() {
    int n1;
    cin >> n1;
    vector < int > a(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    int n2;
    cin >> n2;
    vector < int > b(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    vector < int > uni = UnionArray(a, b);

    cout << "Union of arrays: ";
    for (int x: uni)
        cout << x << " ";
    cout << endl;
}
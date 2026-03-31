#include <bits/stdc++.h>

using namespace std;
void LeftRotate_Dplace(vector<int> &a, int d)
{ int n = a.size();
    d = d % n; 
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(a[i]);
    }
    for (int i = d; i < n; i++)
    {
        a[i - d] = a[i];
    }

    // brutt

    // int j = 0 ;
    // for(int i = n-d ; i< n ; i++)
    // {
    //     a[i] = temp[j];
    //     j++;
    // }

    // Better
    for (int i = (n - d); i < n; i++)
    {
        a[n - d] = a[i - (n - d)];
    }
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
#include <bits/stdc++.h>
using namespace std;
vector<int> Intersection_array(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    sort(a.begin(), a.end());
sort(b.begin(), b.end());

    vector<int> ans;
  vector<int> vis(n2, 0);    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j]>a[i]) break;
        }
    }
    return ans;
}
int main()
{
    int n1;
    cin >> n1;
    vector<int> a(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    int n2;
    cin >> n2;
    vector<int> b(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
     vector<int>  x = Intersection_array(a, b);

     for(int i = 0; i< x.size(); i++)
     {
        cout<<x[i] << " ";
     }
}
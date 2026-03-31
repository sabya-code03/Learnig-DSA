#include <bits/stdc++.h>
using namespace std;
vector<int> Intersection_array(vector<int> &a, vector<int> &b)
{
   
    int n1 = a.size();
    int n2 = b.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {if (a[i] < b[j])
            i++;
       
        else if (a[i] > b[j])
            j++;
        else
        {if (ans.empty() || ans.back() != a[i]){
 ans.push_back(a[i]);
        }
           
            i++;
            j++;
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
    vector<int> x = Intersection_array(a, b);

    for (int val : x)
        cout << val << " ";

}

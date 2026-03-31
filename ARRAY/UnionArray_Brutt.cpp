#include <bits/stdc++.h>
using namespace std;
vector < int > UnionArray(vector < int > & a, vector < int > & b)
{
    int n1 = a.size();
    int n2 = b.size();
    set < int > st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }
    vector < int > uni;
    for (auto it: st)
    {
        uni.push_back(it);
    }
    return uni;
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
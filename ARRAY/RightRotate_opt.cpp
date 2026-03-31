#include <bits/stdc++.h>
using namespace std;
void RightRotate_Dplace(vector < int > & a, int d)
{

    int n = a.size();
    d = d % n; 
    reverse(a.end() - d, a.end());
    reverse(a.begin() , a.end()-d);
    reverse(a.begin(), a.end());

}
int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    int d;
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    RightRotate_Dplace(a, d);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
#include <bits/stdc++.h>

using namespace std;
void LeftShift(vector < int > &arr, int d)
{
    int n = arr.size();
     vector<int> temp(d);
    for (int i = 0; i < d; i++)
    {
      temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }

}
int main() {
    int n;

    cin >> n;
    int d;
    cin >> d;
    vector < int > arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
      LeftShift(arr, d);
       for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
}
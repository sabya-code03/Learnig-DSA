#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)   // outer loop
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)   // start from i+1
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        // swap arr[i] and arr[mini]
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];  // use a fixed size large enough (instead of VLA)

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;
void kth_max_min(int arr[], int n, int k)
{
    sort(arr, arr + n);

    cout << "Kth smallest element: " << arr[k - 1] << endl;
    cout << "Kth largest element: " << arr[n - k] << endl;
}
int main()
{
    int arr[] = {4, 2, 7, 1, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    kth_max_min(arr, n, k);

    return 0;
}
//O(nlogn)

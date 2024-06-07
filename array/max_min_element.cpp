#include <iostream>
using namespace std;
void max(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if(arr[i] < min){
            min=arr[i];
        }    
    }
    cout << "maximum element is : " << max << endl;
    cout << "minimum element is : " << min << endl;
}
int main()
{
    int arr[10] = {1, 2, 7, 4, 5, 6, 17, 8, 19, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    max(arr, n);
}
//time comlexity is O(n)
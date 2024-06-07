
#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {

    for (int i = 1; i <= n; i++) { 
        int flag = 0;
       
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) 
        return i;
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 4, 5};
    int ans = missingNumber(arr, n);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

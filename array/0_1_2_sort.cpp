
// #include <iostream>
// using namespace std;

// void sort_0_1_2(int arr[], int n) {
//  int count0 = 0, count1 = 0, count2 = 0;
//  for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) count0++;
//         else if (arr[i] == 1) count1++;
//         else count2++;
//     }
//     for (int i = 0; i < count0; i++) 
//     arr[i] = 0; 

//     for (int i = count0; i < count0 + count1; i++) 
//     arr[i] = 1;

//     for (int i = count0 + count1; i < n; i++) 
//     arr[i] = 2; 

// }
// void print_array(int arr[],int n){
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n = 6;
//     int arr[] = {1,0,2,1,0,1};
//     sort_0_1_2(arr, n);
//     print_array(arr,n);
//     return 0;
// }
// // O(n)+O(n) first for counting of the 0,1 and 2 and second for replacing the array value

#include <iostream>
using namespace std;

void sortArray(int  arr[], int n) {

    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
 void print_array(int arr[],int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 6;
   int arr[] = {1,0,2,1,0,1};
    sortArray(arr, n);
    print_array(arr,n);
    return 0;
}


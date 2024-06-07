// #include <iostream>
// using namespace std;
// void twosum(int n, int arr[], int target)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 arr[0] = i;
//                 arr[1] = j;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {2, 6, 5, 8, 11};
//     int n = 5;
//     twosum(n, arr, 14);
//     cout << "This is the answer for variant 2: [" << arr[0] << ", "
//          << arr[1] << "]" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
string twosum(int n, int arr[], int target)
{
    int left=0;
    int  right=n-1;
    while(left<right){
        int sum =arr[left]+arr[right];
       if(sum==target){
        return "yes";
       }
       else if(sum<target){
        left++;
       }
       else{
        right--;
       }
    }
    return "no";
}
int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int n = 5;
     string ans= twosum(n, arr, 14);
    cout << "This is the answer for variant 1  "<<ans<<endl;
        
    return 0;
}
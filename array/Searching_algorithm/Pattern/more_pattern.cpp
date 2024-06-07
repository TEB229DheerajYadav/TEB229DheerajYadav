#include <iostream>
using namespace std;

// int main() {
//   for(int i=0;i<3;i++){
//     for(int j=1;j<5;j++){
//     cout<<"*";
//   }
//     cout<<endl;
//   }
// }
// print the star on the screen
// int main(){
//   int n;
//   cout<<"enter the number of rows"<<endl;
//   cin>>n;
//   int m;
//   cout<<"enter the number of the columns"<<endl;
//   cin>>m;
//   for(int i=0;i<n;i++){
//     for(int i=0;i<m;i++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }

// }

// print the number 1234  as its in row and coolumn
// int main(){
//   int n;
//     cout<<"enter the number of rows"<<endl;
//     cin>>n;
//     int m;
//    cout<<"enter the number of the columns"<<endl;
//    cin>>m;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//       cout<<j;
//   }
//     cout<<endl;
//   }
// }

// print the number abcd  as its in row and coolumn

// int main(){
// int n;
//   cout<<"enter the number of rows"<<endl;
//    cin>>n;
//     int m;
//    cout<<"enter the number of the columns"<<endl;
//    cin>>m;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//       cout<<char(j+64);  // 65=>means A in ascii value and 90 for z
//       // 97=>means a in ascii value and 122 for z
//     }
//     cout<<endl;
// }
// }

// print the number AAAA  as its in row and coolumn
// int main(){
//   int n;
//    cout<<"enter the number of rows"<<endl;
//     cin>>n;
//      int m;
//     cout<<"enter the number of the columns"<<endl;
//     cin>>m;
//   for(int i=1;i<=n;i++){
//     for(int i=1;i<=m;i++){
//       cout<<char(i+64);
//     }
//     cout<<endl;
//   }
// }

// print the aplphabet abcd as its in rows and columns
// int main(){
// int n;
//  cout<<"enter the number of rows"<<endl;
//   cin>>n;
//    int m;
//   cout<<"enter the number of the columns"<<endl;
//   cin>>m;
//   for(int i=1;i<=n;i++){
//     for(int i=1;i<=m;i++){
//       cout<<(char(j+96));
//     }
//     cout<<endl;
//   }

// }

// print the tringle
// *
// **
// ***
// ****
// the logic behind is jitna i ka vlaue hai utna hi * print karo
// int main(){
//   int n;
//    cout<<"enter the number of rows"<<endl;
//     cin>>n;

//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   }

// print the tringle
// a
// ab
// abc
// abcd

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       cout<<char(j+64);
//     }
//     cout<<endl;
//   }
// }

// print the tringle
// 1
// 1
// 123
// 1234

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       cout<<j;

//     }
//     cout<<endl;
//   }
// }

// print the tringle
// 1
// 22
// 333
// 4444

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       cout<<i;

//     }
//     cout<<endl;
//   }
// }

// print the tringle
// 1
// ab
// 123
// abcd
// 12345
// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       if(i%2==0){
//         cout<<char(j+64);
//       }
//         else{
//         cout<<j;
//       }
//     }
//     cout<<endl;

//         }
// }

// print the pattern
// ****
// ***
// **
// *

// j+i=n+1
// j=n-i+1

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// print the tringle
// ABCD
// ABC
// AB
// A
// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//       cout<<char(j+64);
//     }
//     cout<<endl;
//   }
// }

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//       cout<<j;
//     }
//     cout<<endl;
//   }
// }

// print the tringle

// 1
// 13
// 135
// 1357

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<n;i++){
//     for(int j=1;j<=i;j++){
//       if(j%2==0){
//       }
//         else if(j==1){
//           cout<<j;
//         }

//       else{
//         cout<<j;
//       }
//       }
//     cout<<endl;
//     }
//   }

// int main() {
//   int n;
//   cout << "enter the number";
//   cin >> n;
//   for (int i = 1; i < n; i++) {
//     for (int j = 1; j <= i; j++) {

//       cout << 2 * j - 1; // for print any odd number we use 2n-1
//     }
//   }
// }

// print the pattern floyd tringle
// 1
// 23
// 456
// 78910

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     int a =1;

//     for(int j=1;j<=i;j++){
//       cout<<a++;
//     }
//     cout<<endl;

//   }

// }

// print the  allphabet tringle reverse
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// when (i+j)%2==0 => 1 and else 0

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       if((i+j)%2==0){
//         cout<<1;
//       }
//       else{
//         cout<<0;
//       }

//     }
//   cout<<endl;

// }
// }

// print the tringle

//      *
//      *
//      *
// *  * * * *
//      *
//      *
//      *

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   int mid=n/2+1;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       if(i==mid ||  j==mid){
//         cout<<"* ";
//       }
//       else{
//         cout<<"  ";
//       }
//     }
//     cout<<endl;
//   }

// }

// print the tringle hollo
// ******
// *    *
// *    *
// ******

// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   int m;
//   cout<<"enter the number";
//   cin>>m;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//       if(i==1 || i==n || j==1 || j==m){
//         cout<<"* ";
//       }
//       else{
//         cout<<"  ";
//       }
//     }
//     cout<<endl;
//   }

// }

// print the tringle
// *               *
//     *       *
//        *
//    *       *
// *              *

// star cross
// int main(){
//            int n;
//            cout<<"enter the number";
//            cin>>n;
//            for(int i=1;i<=n;i++){
//              for(int j=1;j<=n;j++){
//                if((i==j || i+j==n+1)){
//                  cout<<"*";
//                }
//                else{
//                  cout<<" ";
//                }
//              }
//              cout<<endl;
//            }
// }

// print the tringle

//     *
//    **
//   ***
//  ****

// int main() {
//   int n;
//   cout << "enter the number";
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n-i; j++) {
//       cout<<" ";
//     }
//     for (int j = 1; j <= i; j++) {
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// int main() {
//   int n;
//   cout << "enter the number";
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n-i; j++) {
//       cout<<" ";
//     }
//     for (int j = 1; j <= i; j++) {
//       cout<<j;
//     }
//     cout<<endl;
//   }
// }


// int main(){
//   int n;
//   cout<<"enter the number";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//        cout<<" ";
//     }
//     for(int j=1;j<=n;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
  
// }

// print the pyramid

//     *
//    ***
//   *****
//  *******
// *********

// int main(){
//   int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n-i;j++){
//          cout<<" ";
//       }
//       for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//       }
//       cout<<endl;
//     }
// }

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

// int main(){
//   int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n-i;j++){
//          cout<<" ";
//       }
//       for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//       }
     
//       cout<<endl;
//     }
// }
int main(){
  int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=n;i>=1;--i){
      for(int j=0;j<=n-i;j++){
         cout<<" ";
      }
      for(int j=n;j<=2*i-1;--j){
        cout<<"*";
      }

      cout<<endl;
    }
}
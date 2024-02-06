#include<iostream>
using namespace std;
// int main(){
//     int n,count=0;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     while(n!=0){
//         n%10;
//        n=n/10;
//         count++;
//     }
//     cout<<"the number of the digit is "<<count<<endl;
// }
int main(){
    int n,r;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        r=n%10;
       n=n/10;
        cout<<r;
    }
}

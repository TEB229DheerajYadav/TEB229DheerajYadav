#include<iostream>
using namespace std;
int main(){
    int n1,n2,h,k,GCD;
    cout<<"enter the first number"<<endl;
    cin>>n1;
     cout<<"enter the second number"<<endl;
    cin>>n2;
    for(int i=1;i<=n1/2 && i<=n2/2;i++){
        if(n1%i==0 && n2%i==0){
          GCD=i;
        }
    }
    cout<<"the gcd of the given number is "<<GCD<<endl;
}
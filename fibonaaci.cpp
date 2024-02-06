#include<iostream>
using namespace std;
int main(){
    int a=0, b=1 , n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
}
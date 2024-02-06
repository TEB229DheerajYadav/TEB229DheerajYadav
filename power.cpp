#include<iostream>
using namespace std;
int main(){
    int a,n;
    double result=1.0;
    cout<<"enter the base number"<<endl;
    cin>>a;
    cout<<"enter the power of the base  number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        result=result*a;
    }
    cout<<"answer is "<<result;
}
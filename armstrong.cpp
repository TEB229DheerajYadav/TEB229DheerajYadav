#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int n, digit ,count=0;
    int total=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    int number=n;
    while(number!=0){
        number=number/10;
        count++;
    }
    number=n;
    while(number!=0){
        digit =number%10;
     total+=(pow(digit,count));
       number=number/10;
 }
 cout<<total<<endl;
 if(total==n){
    cout<<n<<"  is a armstrong number"<<endl;
 }
 else{
    cout<<n<<"  is not a armstrong number "<<endl;
 }
// cout<<total;
}


#include<iostream>
using namespace std;
int power(int digit){
  int   result=1;
    for(int i=1;i<=digit;i++){
        result=result*i;
    }
    return result;
}
int main(){
    int n, digit;
    int total;
    cout<<"enter the number"<<endl;
    cin>>n;
    int number=n;
    while(n!=0){
        digit =n%10;
     total+=power(digit);
       n=n/10;
 }
 if(total==number){
    cout<<"the given number is a strong number"<<endl;
 }
 else{
    cout<<"the given number is not a strong number "<<endl;
 }
// cout<<total;
}


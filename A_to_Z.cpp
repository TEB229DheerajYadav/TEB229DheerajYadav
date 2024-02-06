#include<iostream>
using namespace std;
int main(){
//    for(int i=65;i<=90;i++){
//     cout<<char(i)<<" ";
//    }
for(int i=65;i<=90;i++){
    for(int j=i; j<=i+4; j++){
        cout<<char(j)<<" ";
    }
    cout<<endl;
  i=i+4;
  if(i==91){
        break;
    }
}
}
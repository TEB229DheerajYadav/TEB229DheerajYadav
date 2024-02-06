#include<iostream>
using namespace std;
int main(){
 int year;
 cout<<"enter the year"<<endl;
 cin>>year;
 if(year%400==0){
    cout<<"the input year is a leap year"<<endl;
 }
 else if(year%100==0){
    cout<<"the inout year is not a leap year"<<endl;
 }
 else if(year%4==0){
    cout<<"the input year is a leap year"<<endl;
 }
 else{
    cout<<"the input year is not a leap year"<<endl;
 }
}
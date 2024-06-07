#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int find){
 for(int i=0;i<n;i++){
    if(arr[i]==find){
        return i;
    }
 }
 return -1;
}
int main(){
 int arr[6]={1,2,3,5,4,6};
 int n=sizeof(arr)/sizeof(arr[0]);
 int find=4;
 cout<<"the element is present at the index of "<<linear_search(arr,n,find);

}
#include <iostream>
using namespace std;
void reverse_array(int start,int end,int arr[]){
    int temp;
    while(start<=end){
       temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={3,4,2,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse_array(0,n-1,arr);
    print_array(arr,n);
}
    
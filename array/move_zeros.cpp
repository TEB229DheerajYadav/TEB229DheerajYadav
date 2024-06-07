#include<iostream>
using namespace std;
void move_zeros(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,0,3,0,0,12};
    move_zeros(arr,6);
    print_array(arr,6);
}
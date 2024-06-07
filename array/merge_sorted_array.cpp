#include<iostream>
using namespace std;
void merge_array(int arr1[],int n,int arr2[],int m,int arr3[] ){
    int k=0;
    int i=0;
    int j=0;
     while(i<n && j<m){
            if(arr1[i]<arr2[j]){
               arr3[k]=arr1[i];
                i++;
                k++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
                k++;
            }
        }

    while(i<n){
        arr3[k]=arr1[i];
         i++;
         k++;
    }
    while(j<m){
        arr3[k]=arr1[j];
         j++;
         k++;
    }
}
void print_array(int arr3[],int s){
    for(int k=0;k<s;k++){
        cout<<arr3[k]<<" ";
    }
}


int main(){
    int arr1[5]={2,4,7,8,10};
    int arr2[3]={1,3,5};
    int arr3[8]={0,0,0,0,0,0,0,0};
    merge_array(arr1,5,arr2,3,arr3);
    print_array(arr3,8);

}
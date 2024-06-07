#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key){
  int start= 0;
  int end= size-1;
  int mid=start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    if(key<arr[mid]){
      end=mid-1;
    }
    else{
      start=mid+1;
    }
    mid=start+(end-start)/2;
  }
  return -1;
}


int main() {
 int even[6]={1,3,5,7,9,11};
 int odd[5]={12,23,34,56,67};
 int index= binary_search(even,6,1);
 cout<<"index of 1 is"<<" "<<index<<endl;
  index= binary_search(odd,5,23);
  cout<<"index of 23 is"<<" "<<index<<endl;
}
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout << "enter the number of element in the array"<<endl;
    cin>>n;
    cout<<"enter the array of the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<endl;
    }
     int end=n-1;
    for(int i=0;i<=end;){
       if(arr[i]%10==0){
         int temp=arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
        end--;
       }
       else{
         i++;
       }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


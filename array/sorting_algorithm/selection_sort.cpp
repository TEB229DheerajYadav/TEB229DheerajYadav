#include <stdio.h>
int main(){
  int n,i,j,swap;
  int arr[100];
  printf("enter the number of element");
  scanf("%d",&n);
  printf("enter the element:");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);  
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(arr[j]<arr[i]){
        swap=arr[j];
        arr[j]=arr[i];
        arr[i]=swap;
        }
      }
    } 
  printf("the sorted element is:");
  for(i=0;i<n;i++){
  printf("%d",arr[i]);
    }
  return 0;
  
}
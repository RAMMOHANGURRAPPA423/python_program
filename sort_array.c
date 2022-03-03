#include <stdio.h>
int sort(int arr[],int n);
int main()
{
    int arr[10],i,n;
    printf("enter no of elements:");
    scanf("%d",&n);
  printf("elements of array are:");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  sort(arr,n);
  printf("array elements in descending order:");
  for(i=0;i<n;i++){
      printf("%d",arr[i]);
  }
}
int sort(int arr[],int n){//1 2  3 4 5 6 7 8 9 10
    int i,j,temp;           i  j
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
    if(arr[i]<arr[j]){
         temp=arr[i];//1
        arr[i]=arr[j];
        arr[j]=temp;
}
}
}
}

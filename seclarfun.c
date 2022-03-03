#include <stdio.h>
#define SIZE 5
int sec_lar(int arr[],int n);
int main(){
    int arr[SIZE],n,i;
    printf("enter the elements");
    for(i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sec_lar(arr,n));
// return sec_lar(arr,n);
return 0;
   
}
int sec_lar(int arr[],int n){
    int i,l=0,s=0;
    for(i=0;i<SIZE;i++){// 1  2   3   4  5
        if(arr[i]>l){ //1>0
            s=l;//s=0
            l=arr[i];//l=1
        }
        else if(arr[i]>s){
            s=arr[i];
        }
    }
   // printf("%d",s);
    return s;//the fun return second
}

#include <stdio.h>
#define SIZE 5
int sec_lar(int arr[],int n);
int main(){
    int arr[SIZE],n,i;
    printf("enter the elements");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",sec_lar(arr,n));
return 0;

}
int sec_lar(int arr[],int n){
    int i,large=0,second_large=0;
    for(i=0;i<SIZE;i++)// 5
    {
        if(arr[i]>large) //5>40       
        { 
            second_large=large;//second_large=30
            large=arr[i];//large=40
        }
        else if(arr[i]>second_large)//5>30
        {
            second_large=arr[i];//second_large=
        }
    }
    return second_large;
}

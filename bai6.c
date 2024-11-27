#include<stdio.h>
int main(void){
    int arr[5]={1,2,3,4,5};
    int i=0;
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            arr[i]+=3;
        }else{
            arr[i]+=2;
        }
        printf("%d, ", arr[i]);
    }
    return 0;
}

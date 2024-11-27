#include<stdio.h>
int main(void){
    int arr[5]={5,7,3,8,1};
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("%d la so chan\n", arr[i]);
            count++;
        }
    }
    if(count==0){
        printf("khong co so chan\n");
    }
    return 0;
}

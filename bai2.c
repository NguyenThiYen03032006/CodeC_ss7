#include<stdio.h>
int main(void){
    int array[5];
    printf("moi ban nhap\n");
    for(int i =0;i<5;i++){
        printf("phan tu thu %d : ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i =0;i<5;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
}

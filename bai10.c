#include<stdio.h>
int main(void){
    int a=0, count=0;
    printf("moi ban nhap so phan tu mang: ");
    scanf("%d", &a);
    int num[a];
    for(int i=0; i<a; i++){
        printf("moi ban nhap phan tu thu %d cua mang: ", i+1);
        scanf("%d", &num[i]);
    }
    for(int i=0; i<a; i++){
        count=0;
        for(int c= num[i]; c>=1; c--){
            if(num[i]%c==0){
                count++;
            }
        }
        if(count==2){
            printf("num[%d] = %d la so nguyen to\n", i, num[i]);
        }
    }
    return 0;
}

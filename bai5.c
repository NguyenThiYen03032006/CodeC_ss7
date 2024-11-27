#include<stdio.h>
int main(void){
    int num[5]={9,2,6,8,5};
    int min = 0, max=0, a, b;
    min=num[0];
    max=num[0];
    for(int i=0;i<4;i++){
        a=num[i];
        b=num[i+1];
        if(min>b){
            min=b;
        }
        if(max<b){
            max=b;
        }
    }
    printf("%d la phan tu nho nhat trong mang\n", min);
    printf("%d la phan tu lon nhat trong mang\n", max);
    return 0;
}

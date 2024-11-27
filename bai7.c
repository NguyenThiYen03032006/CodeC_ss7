#include<stdio.h>
int main(void){
    int a=0, b, count=0, i=0;
    printf("moi ban nhap vao so phan tu cua mang: ");
    scanf("%d", &a);
    int num[a];
    printf("moi ban nhap vao tung phan tu cua mang\n");
    do{
        while(i!=a){
            printf("moi ban nhap vao phan tu cua mang ");
            scanf("%d", &b);
                if(b%2!=0){
                    num[i]=b;
                    i++;
                    count++;
                }
        }
        
    }while(count!=a);
    for(int i=0;i<a;i++){
        printf("num[%d] = %d\n", i, num[i]);
    }
    return 0;
}

#include<stdio.h>
int main(void){
    int i;
    printf("moi ban nhap so phan tu co trong mang ");
    scanf("%d", &i);
    int arr[i];
    printf("moi ban nhap vao tung phan tu cua mang\n");
    for(int a=0; a<sizeof(arr)/sizeof(int); a++){
        printf("moi ban nhap vao tung phan tu thu %d :", a+1);
        scanf("%d", &arr[a]);
    }
    for(int a=0; a<sizeof(arr)/sizeof(int); a++){
        printf("arr[%d]= %d\n", a, arr[a]);
    }
    
    return 0;
}

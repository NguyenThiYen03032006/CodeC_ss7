#include <stdio.h>
int main(void){
    int arr[5]={1,2,3,4,5};
    int i;
    for(i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d\n", arr[i]);
    }
    printf("do dai cua mang la %d\n", i);
    return 0;
}

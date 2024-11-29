#include<stdio.h>
int main(void){
    int row, col;
    printf("moi ban nhap vao so hang ");
    scanf("%d", &row);
    printf("moi ban nhap vao so cot ");
    scanf("%d", &col);
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("moi ban nhap phan tu trong hang %d cot %d:", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            //printf(" phan tu hang thu %d cot thu %d la : %d\n",i+1, j+1, arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

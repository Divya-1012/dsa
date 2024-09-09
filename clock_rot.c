/*I.Given a matrix of size n X n containing positive integers, write an algorithm and a program to
 rotate the elements of matrix in clockwise direction
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */
#include<stdio.h>
void rotate(int a[][100],int n){
    int top=0,left=0,bottom=n-1,right=n-1,tmp[n];
    while(top<bottom && left<right){
        tmp[0]=a[top][left];  
        for(int i=top;i<bottom;i++){
            a[i][left]=a[i+1][left];
        }
         for(int i=left;i<right;i++){
            a[bottom][i]=a[bottom][i+1];
        }
         for(int i=bottom;i>top;i--){
            a[i][right]=a[i-1][right];
        }
         for(int i=right;i>left;i--){
            a[top][i]=a[top][i-1];
        }
        a[top][left+1]=tmp[0];
        top++;
        left++;
        bottom--;
        right--;
}
}
int main(){
    int n;
    //printf("Enter Size of Matrix");
    scanf("%d",&n);
    //printf("Enter Elements");
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    rotate(a,n);
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
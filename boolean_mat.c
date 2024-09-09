/*5. Given a boolean matrix (contains only 0 and 1) of size m X n where each row is sorted, write an
 algorithm and a program to find which row has maximum number of 1's. (Linear time
 complexity)
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */
#include<stdio.h>
int max_ones(int a[][100],int m,int n){
    int row=0;
    int col=n-1;
    for(int i=1;i<=m;i++){
        for(int j=col;j>=1;j--){
            if(a[i][j]==1){
                row=i;
                col--;
            }
            else 
                break; 
        }
    }
    return row;
}
int main(){
    int m,n;
    //printf("Enter m and n");
    scanf("%d %d",&m,&n);
    int a[100][100];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x=max_ones(a,m,n);
    printf("row - %d",x);
    return 0;
}
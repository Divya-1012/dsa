/* Given a matrix of size n X n, where every row and every column is sorted in increasing order.
 Write an algorithm and a program to find whether the given key element is present in the matrix
 or not. (Linear time complexity)
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */
#include<stdio.h>
int find(int a[][100],int k,int n){
    int i=0;
    int j=n-1;
    while(i>=0 && i<n && j>=0 && j<n){
        if (a[i][j]==k){
            return 1;
            
        }
        else if(a[i][j]>k){
            j--;
        }
        else if(a[i][j]<k){
            i++;
        
        }
    }
     return -1;
}
int main(){
    int n,k;
    //printf("Enter size of matrix");
    scanf("%d",&n);
    int a[100][100];
    //printf("Enter elements")
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        } 
    }
    //printf("Enter key element");
    scanf("%d",&k);
    int x=find(a,k,n);
    if(x==1)
      printf("Present");
    else
      printf("Not Present");
    return 0;
}
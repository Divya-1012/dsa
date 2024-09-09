/* 1. Given an array of integers, write an algorithm and a program to left rotate the array by specific
 number of elements.
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */
#include<stdio.h>
# define SIZE 100
void cal(int a[SIZE],int k,int n){
int i,j,temp;

for(j=0;j<k;j++){
    temp=a[0];
    for(i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[i]= temp;
}
}

int main(){
int a[SIZE],n,i,k,t,m;
//printf("Enter test cases");
scanf("%d",&t);

for(m=0;m<t;m++){
    //printf("Enter size ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //printf("Enter number of rotations");
    scanf("%d",&k);
    cal(a,k,n);
    for(i=0;i<n;i++){
       printf("%d ",a[i]);
    }
    printf("\n");
}
return 0;
}


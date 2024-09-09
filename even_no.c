/*.Given an array of non-negative integers, where all numbers occur even number of times except
 one number which occurs odd number of times. Write an algorithm and a program to find this
 number. (Time complexity = O(n))
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */
#include<stdio.h>
int find(int arr[],int n){
    int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    return x;
}
int main(){
    int t,n,i,j,k,res;
    //printf("Enter Number of Test Cases");
    scanf("%d",&t);
    for(k=0;k<t;k++){
        res=0;
        //printf("Enter size of array");
        scanf("%d",&n);
        //printf("Enter elements");
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        res=find(arr,n);
        printf("%d",res);

    }
    return 0;
}
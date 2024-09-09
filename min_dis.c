/*2. Given an unsorted array of integers and two numbers a and b. Design an algorithm and write a program to find minimum distance between a and b in this array. Minimum distance between any
two numbers a and b present in array is the minimum difference between their indices
Name-Divyanshi Kaushik
Section-A1
Roll No.-28
Course-B.tech(CSE)
*/
#include <stdio.h>
#include <limits.h>
int min(int arr[],int a,int b,int la,int lb,int n,int min_distance){
      for (int i = 0; i < n; i++) {
            if (arr[i] == a) {
                if (lb != -1) {
                    if (i - lb < min_distance) {
                        min_distance = i - lb;
                    }
                }
                la = i;
            } else if (arr[i] == b) {
                if (la != -1) {
                    if (i - la < min_distance) {
                        min_distance = i - la;
                    }
                }
                lb = i;
            }
           
        }
           return min_distance;

}

int main() {
    int t,c;
    int min_distance = INT_MAX;
    //printf("Enter number of test cases");
    scanf("%d", &t);

    for(int q=0;q<t;q++) {
        int n, a, b;
        int la = -1, lb = -1;
        // printf("Enter size of array");
        scanf("%d", &n);
        int arr[n];
        //printf("Enter elements");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        //printf("Enter a and b");
        scanf("%d %d", &a, &b);
        c=min(arr,a,b,la,lb,n,min_distance);
        if (c== INT_MAX) {
            printf("-1\n"); 
        } else {
            printf("%d\n", c);
        }
    }

    return 0;
}

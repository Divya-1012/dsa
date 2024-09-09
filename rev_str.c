/*10.Given an empty stack, design an algorithm and a program to reverse a string using this stack
 (with and without recursion).
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */

//WITHOUT RECURSION
#include<stdio.h>
#include<string.h>
#define SIZE 100
void push(char st[],int *top,char v){
    if(*top>=SIZE-1){
      printf("Overflow");
    }
    else{
        (*top)++;
        st[*top]=v;
    }

}

int pop(char st[],int *top){
    if(*top==-1){
        printf("Underflow");
        return -1;
    }
    else{
        return st[(*top)--];
    }
}

int main(){
    int n,top=-1,i,t,q;
    //printf("Enter number of test cases");
    scanf("%d\n",&t);
    for(q=0;q<t;q++){
    char st[SIZE],st2[SIZE];
    //printf("Enter string ");
    gets(st);
    for(int i=0;st[i]!='\0';i++){
        push(st,&top,st[i]);
    }
    for( i=top;i>=0;i--){
        st2[i]=pop(st,&top);
        printf("%c",st2[i]);
    }
    printf("\n");
    }
}
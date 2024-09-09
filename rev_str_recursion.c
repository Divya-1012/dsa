#include<stdio.h>
#include<string.h>
#define SIZE 100
void push(char st[],int *top,char v){
    if(*top>=SIZE-1)
          printf("over");
    else{
         (*top)++;
        st[*top]=v;
        }
    }


char pop(char st[],int *top){
    if(*top==-1){
        printf("Underflow");
        return -1;
    }
    else{
        return st[(*top)--];
    }
}

void rev(char st[],int *top){
    char d;
    d=st[*top];
    pop(st,top);
    rev(st,top);
    push(st,top,d);
}

int main(){
    int n,top=-1,i;
    char st[100];
    //printf("Enter string ");
    gets(st);
    for(int i=0;st[i]!='\0';i++){
        push(st,&top,st[i]);
    }
    for( i=top;i>=0;i--){
        printf("%c",st[i]);
    }
    
    
}
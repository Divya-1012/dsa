#include<stdio.h>
#define MAX 100
void push(int st[],int *top,int *top2,int v){
    if(*top+1<*top2){
      printf("Overflow");
    }
    else{
        (*top)++;
        st[*top]=v;
    }

}

void push1(int st[],int *top,int *top2,int v){
    if(*top2-1>*top){
      printf("Overflow");
    }
    else{
        (*top2)--;
        st[*top2]=v;
    }

}

int pop(int st[],int *top){
    if(*top==-1){
        printf("Underflow");
        return -1;
    }
    else{
        return st[(*top)--];
    }
}

int pop1(int st[],int *top2){
    if(*top2>=100){
        printf("Underflow");
        return -1;
    }
    else{
        return st[(*top2)--];
    }
}

void display(int st[],int top){
    int i;
    for(i=top;i>=0;i--){
        printf("%d",st[i]);
    }
}

void display1(int st[],int top2){
    int i;
    for(i=0;i<=top2;i++){
        printf("%d",st[i]);
    }
}

int main(){
    int st[MAX]={1,3,5},n,top=-1,top2=100;
    int m,d;
    do{
    printf("1.Push element in stack 1 \n");
    printf("2.Push element in stack 2 \n");
    printf("3.Pop element in stack 1 \n");
    printf("4.Push element in stack 2 \n");
    printf("5.Display element in stack 1 \n");
    printf("6.Display element in stack 2 \n");
    printf("Enter your choice");
    scanf("%d",n);
    switch(n){
        case 1:
               
               scanf("%d",&m);
               push(st,&top,&top2,m);

            break;
        case 2:
              
               scanf("%d",&d);
               push1(st,&top2,&top,d);
        
            break;
        
        case 3:
            pop(st,&top);
            break;
        
        case 4:
            pop1(st,&top2);
            break;
        
        case 5:
            display(st,top);
            break;
        
        case 6:
            display1(st,top2);
            break;
        default:
           printf("Exit");
        }
    }while(n!=7);
   

}
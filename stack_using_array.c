/*7. I. Design an algorithm and a program to implement stack using array. The program should
 implement following stack operations:
 a) Create() - create an empty stack 
 b)Push(k) - push an element k into the stack
 c)Pop() - pop an element from the stack snd return it
 d)IsEmpty() - check if stack is empty or not
 e)Size() - finds the size of the stack
 f) Print() - prints the contents of stack
 Name-Divyanshi Kaushik
 Section-A1
 Roll no.-28
 Course-B.tech(CSE)
 */
#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 100

void pushed(int st[], int ch, int *top)
{
    st[++(*top)] = ch;
}

int pop(int st[], int *top)
{
    int ch = st[*top];
    st[(*top)--];
    return ch;
}

int calc(int st[],int top){
    int c=0;
    for(int i=1;i<=top+1;i++){
       c++;
    }
    return c;
}

void print(int st[],int top){
    printf("Stack-");
    for(int i=0;i<=top;i++){
      printf("%d ",st[i]);
    }
}

void isempty(int top)
{
    if (top == -1)
        printf("Empty");
    else
        printf("Not empty");
}


int main(){
    int st[SIZE];
    int x,s,n,m,top=-1,ch;
        printf("Press:\n");
        printf("1 to Push\n");
        printf("2 to pop\n");
        printf("3 to check empty stack\n");
        printf("4 to calculate size\n");
        printf("5 to print the stack\n");
        printf("6 to exit\n");
        while(n!=6){
        //printf("Enter your Choice");
        scanf("%d",&n);
        switch(n){
            case 1:
             scanf("%d",&x);
             pushed(st,x,&top);
             print(st,top);
             break;
            case 2:
             ch=pop(st,&top);
             printf("Pop-%d",ch);
             break;
            case 3:
             isempty(top);
             break;
            case 4:
              s=calc(st,top);
              printf("Size-%d",s);
              break;
            case 5:
              print(st,top);
            default:
              break;
        }
        }
    return 0;
}


 
 
 

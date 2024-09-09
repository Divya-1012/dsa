/*9..Given a string of opening and closing paranthesis, design an algorithm and a program to find the
 length of the longest valid paranthesis substring. Valid paranthesis substring is a string which
 contains balanced paranthesis.
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void pushed(char st[], char ch, int *top)
{
    st[++(*top)] = ch;
}

char pop(char st[], int *top)
{
    char ch = st[*top];
    st[(*top)--];
    return ch;
}

bool isempty(int top)
{
    if (top == -1)
        return true;
    else
        return false;
}

int main()
{
    int q, t,m;
    scanf("%d", &t);
    for (q = 0; q < t; q++)
    {
        int n, i, c,max=0;
        int top = -1;
        char s[100];
        char st[100];
        scanf(" %[^\n]s", s);
        n = strlen(s);
        st[++top]=-1;

        for (i = 0; i < n; i++)
        {      
        if(s[i]=='('){
            pushed(st,i,&top);
        }
        else{
             top--;
        if(top==-1){
             pushed(st,i,&top);
        }
        else{
            int l=i-st[top];
            if(l>max){
                max=l;
            }
        }

        }
       
    }
     printf("%d",max);  
    }
     return 0; 
}

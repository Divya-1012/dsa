/*8. Given an expression string consisting of opening and closing brackets “{“,”}”,”(“,”)”,”[“,”]”,
 design an algorithm and a program to check whether this expression has balanced paranthesis or
 not
 Name-Divyanshi Kaushik
 Section-A1
 Roll No.-28
 Course-B.tech(CSE)
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

int see(char ch, char s)
{
    if ((ch == '(' && s == ')') ||(ch == '{' && s == '}') ||(ch == '[' && s == ']'))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int q, t;
    scanf("%d", &t);
    for (q = 0; q < t; q++)
    {
        int n, i, c;
        int top = -1, flag = 0;
        char s[100];
        char st[100];
        scanf(" %[^\n]s", s);
        n = strlen(s);

        for (i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                pushed(st, s[i], &top);
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (isempty(top))
                {
                    printf("Unbalanced\n");
                    flag = 1;
                    break;
                }
                char ch = pop(st, &top);
                c = see(ch, s[i]);
                if (c != 1)
                {
                    printf("Unbalanced");
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            if (isempty(top))
            {
                printf("Balanced");
            }
            else
            {
                printf("Unbalanced");
            }
        }
    }
    return 0;
}
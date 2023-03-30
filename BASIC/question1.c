#include <stdio.h>
int main()
{
    char ch;
    int a, b,c;
    printf("Enter an Operator : ");
    scanf("%c", &ch);
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    
    switch(ch)
    {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        case '%':
            c= a % b;
            break;
    }
    printf("Answer = %d", c);
    return 0;
}

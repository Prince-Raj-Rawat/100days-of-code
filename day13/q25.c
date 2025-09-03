//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h> 
int main() {
    int a ,b;
    char c;
    printf("enter two no.: ");
    scanf("%d %d",&a ,&b);
    printf("enter the operation symbol: ");
    scanf(" %c",&c);
    switch (c){
            case '%' :printf("%d",( a % b)); break;
            case '+' :printf("%d",( a + b)); break;
            case '-' :printf("%d",( a - b)); break;
            case '*' :printf("%d",( a * b)); break;
            case '/' :printf("%.2f",(float)( a / b)); break;
            default: printf("invalid charcter");
    }
    return 0;

}
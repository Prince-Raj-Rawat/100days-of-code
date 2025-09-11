#include <stdio.h>
int main(){
    int i,o;
    for (i=2;i<=7;i++)
    {
        o=i++;
    }
    printf("%d",o);
    return 0;
}
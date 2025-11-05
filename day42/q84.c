#include<stdio.h>

int main(){
    char word[100];
    printf("enter a word : ");
    fgets(word,sizeof(word),stdin);
    for (int a=0;word[a]!=0; a++)
    {
        if (word[a]=='\n')
        {word[a]='\0';}
    }

    for(int i=0;word[i]!='\0';i++){
        if(word[i]>='a' || word[i]<='z')
        {
            printf("%c ",(word[i]-32));
        }
        else 
        {
            printf("%c", word[i]);
        }
    }

}
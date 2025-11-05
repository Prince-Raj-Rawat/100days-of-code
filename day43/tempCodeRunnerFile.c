
    char x[100],y[100];
    printf("enter a word: ");
    fgets(x,100,stdin);
    int a =strlen(x);
    x[strcspn(x, "\n")] = '\0';

    for(int i=0;i<a;i++){
        y[i]=x[a-1-i];
    }
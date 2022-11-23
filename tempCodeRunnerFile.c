for(c=1;c<=100;c++)
    {
        printf("%d",c%10);
    }
    printf("\n");
    for(c=1;c<=100;c++)
    {
        if(c%10==0){
            printf("%d",c/10);
        }
        else{
            printf(" ");
        }
    }
        printf("\n");
    
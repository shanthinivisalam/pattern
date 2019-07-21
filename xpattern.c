#include<stdio.h>
main()
{
    int n;
    int row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==col || col==(n-row+1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

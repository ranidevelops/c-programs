# include <stdio.h>
void main()
{
    int i,j,row;
    printf("enter the number of rows");
    scanf("%d",&row);
    for(i=row;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%d",j);
        }
        printf("*");
        printf("\n");
    }
}
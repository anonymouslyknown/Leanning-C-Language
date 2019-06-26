//row sort
#include<stdio.h>
void main()
{
      int n[3][3],r,c,k,temp;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("enter element ");
                scanf("%d",&n[r][c]);
            }
        }
        for(r=0;r<=2;r++)
        {
            for(k=0;k<=2;k++)
                {
                    for(c=k+1;c<=2;c++)
                    {
                        if(n[r][c]<n[r][k])
                        {
                            temp=n[r][k];
                            n[r][k]=n[r][c];
                            n[r][c]=temp;
                        }
                    }
                }
        }

         for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("%d\t",n[r][c]);
            }
            printf("\n");
        }
}

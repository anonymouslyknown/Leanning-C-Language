#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("input four numbers\n");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(b>c)
                {
                    if(b>d)
                    {
                        printf("second highest number is %d",b);
                    }
                    else
                    {
                        printf("second highest number is %d",d);
                    }
                }
                else
                {
                    if(c>d)
                    {
                        printf("second highest number is %d",c);
                    }
                    else
                    {
                        printf("second highest number is %d",d);
                    }
                }
            }
              else
                    {
                        printf("second highest number is %d",a);
                    }
              }
        else
        {
            if(c>d)
            {
                if(a>d)
                   {
                      printf("second highest number is %d",a);
                   }

                else
                  {
                      printf("second highest number is %d",d);
                  }
            }
            else
            {
                printf("second highest number is %d",c);
            }
        }
    }
    else
    {
            if(b>c)
            {
                if(b>d)
                {
                    if(c>d)
                    {
                        printf("second highest number is %d",c);
                    }
                    else
                    {
                        printf("second highest number is %d",d);
                    }
                }
                else
                {
                    printf("second highest number is %d",b);
                }
            }
            else
            {
                if(d>c)
                {
                    printf("second highest number is %d",c);
                }
                else
                {
                    if(b>d)
                    {
                        printf("second highest number is %d",b);
                    }
                    else
                    {
                        printf("second highest number is %d",d);
                    }
                }
            }
    }
}

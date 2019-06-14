  #include <stdio.h>
int main()
{
    int a[5],b[5],c[10],i,j,k;
    for (i=0;i<=4;i++)
    { printf("Enter element in first array");
    scanf("%d",&a[i]);
    }
    for(j=0;j<=4;j++)
    {
        printf("Enter elements in second array");
        scanf("%d",&b[j]);
         }
    for(i=0,k=0;i<=4;i++,k++)
         {
             c[k]=a[i];
         }
    for(j=0,k=5;j<=4;j++,k++)
         {
             c[k]=b[j];
         }
    for (k=0;k<=9;k++)
    {
        printf("%d\n",c[k]);
    }
 return 0;

}

#include<stdio.h>
void main()
{
    int i,n,temp,j,a[10];
    printf("\nEnter the number of elements");
    scanf("%d",&n);
    printf("\nEnter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe array sorted in ascending order is :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    getch();
}
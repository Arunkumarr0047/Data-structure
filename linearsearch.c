#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],n,i,val,pos,I;
    clrscr();
    printf("\nEenter the limit");
    scanf("%d",&n);
    printf("\nEnter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched");
    scanf("%d",&val);
    pos=-1;
    for(I=0;I<n;I++)
    {
        if(a[I]==val)
        {
            pos=I;
            printf("%d present at %d location",val,pos);
            break;
        }
    }
    if(pos==-1)
    {
        printf("\nValue not found");
    }
    getch();
}
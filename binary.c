#include<stdio.h>
int main()
    { 
    int a[20],n,i,val,pos=-1,beg,end,mid;
     printf("Enter the limit\t");
     scanf("%d",&n);
     printf("Enter the sorted elements\t");
     for(i=0;i<n;i++)
     { 
        scanf("%d",&a[i]); 
        } 
    printf("\nThe array is\n"); 
    for(i=0;i<n;i++) 
        {
         printf("%d\t",a[i]);
         }
     printf("\nEnter the element to be searched\t"); 
    scanf("%d",&val);
     beg=0; 
    end=n;
     while(beg<=end) 
        { 
        mid=(beg+end)/2; 
        if(a[mid]==val) 
            {
             pos=mid;
             printf("Element found at %d",pos);
             break; 
            } 
        else if(a[mid]>val) 
        end=mid-1;
         else
         beg=mid+1; 
        } 
    if(pos==-1) 
    printf("Element not found");
    return 0;
    }
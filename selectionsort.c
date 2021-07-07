#include <stdio.h>
int smallest(int arr[], int k, int n);
int selection_sort(int arr[], int n);
int main()
 {	
    int arr[10], i, n;
    	printf("Enter the number of elements\t");
     	scanf("%d", &n);	
      printf("Enter the elements");
    	for (i = 0; i < n; i++)
     {		
        scanf("%d", &arr[i]);	
        }	
    printf("The array before sorting: \n");	
    for (i = 0; i < n; i++)
    	 printf(" %d\t", arr[i]);
    	selection_sort(arr, n);
    	printf("\nThe sorted array is: \n");
    	for (i = 0; i < n; i++)	
    	printf(" %d\t", arr[i]);
    }
int smallest(int arr[], int k, int n)
 {
    	int small, j, pos;
    	small = arr[k];
    	pos = k;
    	for (j = k + 1; j < n; j++) 
        {	
        	if (small > arr[j])
         {		
            	small = arr[j];			pos = j;
            		}
        	}
    	return pos;
    }
int selection_sort(int arr[], int n) 
    {	
    int k, pos, temp;
    	for (k = 0; k < n; k++)
     {	
        	pos = smallest(arr, k, n);	
        	temp = arr[k];		
        arr[k] = arr[pos];	
        	arr[pos] = temp;
        	}
    	return 0;
 }

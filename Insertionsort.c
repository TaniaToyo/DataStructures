#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[100];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++)
    {
	        temp = arr[i];
	        j = i - 1;
            while ( j >= 0 &&  temp < arr[j])
            {
                arr[j+1] = arr[j];
                j = j-1;
               
            }
            arr[j+1] = temp;
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
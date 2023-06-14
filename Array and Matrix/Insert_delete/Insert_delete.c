#include <stdio.h>
int main()
{
    int arr[100], i, n, pos, value;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d", &arr[i]);
     }
            printf("Enter the location where you wish to insert an element:\n");
            scanf("%d", &pos);
            printf("Enter the value to insert:\n");
            scanf("%d", &value);
            for (i = n - 1; i >= pos - 1; i--)
                arr[i + 1] = arr[i];
            arr[pos - 1] = value;
            n++;
            
            printf("Elements in array after insertion are:\n");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            printf("Enter the location where you wish to delete an element:\n");
            scanf("%d", &pos);
            if (pos >= n + 1)
                printf("Deletion not possible.\n");
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
            }
            
            printf("Elements in array after deletion are:\n");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
           printf("\n");
       
    return 0;
}

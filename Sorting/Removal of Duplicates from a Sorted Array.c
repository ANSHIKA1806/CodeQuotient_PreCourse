#include <stdio.h>
void removeDuplicates(int *arr, int *size)
{
  int i,j;
  for(i = 0; i < *size; i++)
    {
        for(j = i + 1; j < *size; j++)
        {
                if(arr[i] == arr[j])
                {
                        for (int k = j; k < *size - 1; ++k)
                        {
                                arr[k] = arr[k + 1];
                        }
                        (*size)--;
                        j--;  
                }       
        }
}
}

int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    removeDuplicates(arr, &size);
    for (i = 0; i < size; i++) 
        printf("%d\n", arr[i]);
  
    return 0;
}

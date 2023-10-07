// problem 3
#include <stdio.h>
int main()
{
    int n, delete_index;
    printf("How many inputs: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("Which value do you want to insert: ");
    // scanf("%d", &insert_value);

    printf("Which position's value do you want to delete: ");
    scanf("%d", &delete_index);
    // int i = n-1;
    delete_index--;
    for (int j = delete_index; j < n; j++)
    {
        arr[j] = arr[j + 1];
    }
    // arr[delete_index] = insert_value;
    for (int k = 0; k < n - 1; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
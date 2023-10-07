// problem 2
#include <stdio.h>
int main()
{
    int n, insert_index, insert_value;
    printf("How many inputs: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Which value do you want to insert: ");
    scanf("%d", &insert_value);

    printf("In which position do you want to insert: ");
    scanf("%d", &insert_index);
    insert_index--;
    int j = n;
    for (j; j >= insert_index; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[insert_index] = insert_value;
    for (int k = 0; k < n + 1; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
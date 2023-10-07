// problem 4
#include <stdio.h>
int main()
{
    int n, update_index, update_value;
    printf("How many inputs: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Which position's value do you want to update: ");
    scanf("%d", &update_index);

    printf("Enter position-%d's new value: ", update_index);
    scanf("%d", &update_value);
    update_index--;
    arr[update_index] = update_value;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
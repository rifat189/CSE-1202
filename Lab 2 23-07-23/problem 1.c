#include <stdio.h>
int main()
{
    int lb, ub, n;
    printf("How many inputs: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter lower and upper bound index: ");
    scanf("%d %d", &lb, &ub);

    // int k = lb;
    for (int k = lb; k <= ub; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
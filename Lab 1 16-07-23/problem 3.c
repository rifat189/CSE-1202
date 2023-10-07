
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 2; i < a; i++)
    {
        for (int k = i; k >= 1; k--)
        {
            if (arr[k] < arr[k - 1])
            {
                int temp = arr[k];
                arr[k] = arr[k - 1];
                arr[k - 1] = temp;
            }
        }
    }
    return 0;
}

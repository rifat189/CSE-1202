#include <stdio.h>
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int max = arr[0], LOC;
    for (int i = 1; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            LOC = i + 1;
        }
    }
    printf("max=%d\n", max);
    printf("LOC=%d", LOC);
    return 0;
}

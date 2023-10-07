#include <stdio.h>
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int LOC = -1;
    int x;
    scanf("%d", &x);
    for (int i = 0; i < 4; i++)
    {
        if (x == arr[i])
        {
            LOC = i + 1;
        }
    }
    printf("LOC=%d", LOC);
    return 0;
}

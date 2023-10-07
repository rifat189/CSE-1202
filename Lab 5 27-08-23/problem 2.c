#include <stdio.h>
int main()
{
    int INFO[12] = {0, 0, 201, 402, 325, 101, 301, 251, 0, 0, 385, 0};
    int LINK[12] = {NULL, NULL, 8, NULL, 11, 3, 5, 7, NULL, NULL, 4, NULL};
    int flag = 0;
    int ptr = 6;
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = 0; i < 12; i++)
    {
        if (value == INFO[i])
        {
            printf("%d", i + 1);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Search is unsuccessful");
    }
    return 0;
}
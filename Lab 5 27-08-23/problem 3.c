#include <stdio.h>
int main()
{
    char info[13] = {' ', ' ', 'U', 'E', 'C', 'R', 'T', 'E', ' ', ' ', 'S', ' '};
    // int start = 6;
    int link[12] = {NULL, NULL, 8, NULL, 11, 3, 5, 7, NULL, NULL, 4, NULL};
    int flag = 0;
    int ptr = 6;
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    int loc;

    while (ptr != NULL)
    {
        if (ch < info[ptr])
        {
            ptr = link[ptr];
        }
        else if (ch == info[ptr])
        {
            loc = ptr;
            flag = 1;
            break;
        }
        else
        {
            loc = NULL;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Location: %d", loc + 1);
    else
        printf("Search is unsuccessful");
    return 0;
}

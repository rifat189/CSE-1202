#include <stdio.h>
int main()
{
    char info[12] = {' ', ' ', 'U', 'E', 'C', 'R', 'T', 'E', ' ', ' ', 'S', ' '};
    int start = 6;
    int link[12] = {NULL, NULL, 8, NULL, 11, 3, 5, 7, NULL, NULL, 4, NULL};
    int ptr = start;
    while (ptr != NULL)
    {
        printf("%c", info[ptr - 1]);
        ptr = link[ptr - 1];
    }
    return 0;
}

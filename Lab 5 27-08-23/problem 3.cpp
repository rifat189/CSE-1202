#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    int next;
};

int SRCHSL(struct Node INFO[], int LINK[], int START, char ITEM, int *LOC)
{
    int PTR = START;
    *LOC = -1;

    while (PTR != -1)
    {
        if (ITEM < INFO[PTR].data)
        {
            PTR = LINK[PTR];
        }
        else if (ITEM == INFO[PTR].data)
        {
            *LOC = PTR;
            return *LOC;
        }
        else
        {
            break;
        }
    }

    return *LOC;
}

int main()
{
    const int MAX_NODES = 13; // Adjust this based on the number of nodes
    struct Node INFO[MAX_NODES];
    int LINK[MAX_NODES];
    int START;

    // Initialize INFO, LINK, and START based on your data
    INFO[0].data = '0';
    LINK[1]=20;
    INFO[1].data = '0';
    LINK[1] = 10;
    INFO[2].data = '0';
    LINK[2] = NULL;
    INFO[3].data = 'U';
    LINK[3] = 8;
    INFO[4].data = 'E';
    LINK[4] = NULL;
    INFO[5].data = 'C';
    LINK[5] = 11;
    INFO[6].data = 'R';
    LINK[6] = 3;
    INFO[7].data = 'T';
    LINK[7] = 5;
    INFO[8].data = 'E';
    LINK[8] = 7;
    INFO[9].data = '0';
    LINK[9] = 1;
    INFO[10].data = '0';
    LINK[10] = 12;
    INFO[11].data = 'S';
    LINK[11] = 4;
    INFO[12].data = '0';
    LINK[12] = 2;

    char ITEM;
    printf("Enter the character to search: ");
    scanf(" %c", &ITEM); // Note the space before %c to skip newline

    int LOC;
    int result = SRCHSL(INFO, LINK, START, ITEM, &LOC);

    if (LOC != -1)
    {
        printf("Character %c found at node: %d\n", ITEM, LOC);
    }
    else
    {
        printf("Character %c not found in the linked list.\n", ITEM);
    }

    return 0;
}

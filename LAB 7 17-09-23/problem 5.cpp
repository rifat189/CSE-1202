#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
int deque[MAX_SIZE] = {1, 2, 3, 4, 5};
int front = 0;
int rear = 4;

int removeRear()
{
    if (front == -1 && rear == -1)
    {
        printf("Deque is empty. Cannot remove.\n");
        return -1;
    }

    int removedValue = deque[rear];

    if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = MAX_SIZE - 1;
    }
    else
    {
        rear = rear - 1;
    }

    return removedValue;
}

int main()
{
    removeRear();

    return 0;
}

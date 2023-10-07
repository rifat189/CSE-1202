#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
int deque[MAX_SIZE] = {1, 2, 3, 4, 5};
int front = 0;
int rear = 4;

int removeFront()
{
    if (front == -1 && rear == -1)
    {
        printf("Deque is empty. Cannot remove.\n");
        return -1;
    }

    int removedValue = deque[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == MAX_SIZE - 1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }

    return removedValue;
}

int main()
{
    removeFront();

    return 0;
}

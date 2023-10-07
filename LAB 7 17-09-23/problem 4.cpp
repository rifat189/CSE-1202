#include <iostream>
#define N 2

int deque[N];
int LEFT = -1;
int RIGHT = -1;

void insertLeft(int item)
{

    if ((LEFT == 0 && RIGHT == N - 1) || (LEFT == RIGHT + 1))
    {
        std::cout << "Dequeue Overflow" << std::endl;
        return;
    }

    if (LEFT == -1)
    {
        LEFT = 0;
        RIGHT = 0;
    }
    else if (LEFT == 0)
    {
        LEFT = N - 1;
    }
    else
    {
        LEFT--;
    }

    deque[LEFT] = item;
}

int main()
{

    insertLeft(5);
    insertLeft(10);
    insertLeft(15);

    for (int i = RIGHT; i <= LEFT; i++)
    {
        std::cout << deque[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
using namespace std;
#define N 2

int deque[N];
int LEFT = -1;
int RIGHT = -1;

void insertRight(int item)
{

    if ((LEFT == 0 && RIGHT == N - 1) || (LEFT == RIGHT + 1))
    {
        cout << "Dequeue Overflow" << endl;
        return;
    }
    if (RIGHT == -1)
    {
        LEFT = 0;
        RIGHT = 0;
    }
    else if (RIGHT == N - 1)
    {
        RIGHT = 0;
    }
    else
    {
        RIGHT++;
    }
    deque[RIGHT] = item;
}

int main()
{
    insertRight(50);
    insertRight(15);
    insertRight(25);

    for (int i = LEFT; i <= RIGHT; i++)
    {
        cout << deque[i] << " ";
    }
    cout << endl;

    return 0;
}

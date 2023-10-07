#include <iostream>
#define maxSize 3
using namespace std;
int item[maxSize] = {10, 20, 30};
int size = 0;
class queue
{
private:
    int front = 0, rear = maxSize - 1;

public:
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if ((front == 0 && rear == maxSize - 1) || (front == rear + 1))
        {
            return true;
        }
        else
            return false;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW" << endl;
        }
        else
        {
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % maxSize;
            }
            size--;
        }
    }
    void display()
    {
        if (!isEmpty())
        {
            int i;
            for (i = front; i != rear; i = (i + 1) % maxSize)
            {
                cout << item[i] << " ";
            }
            cout << item[i];
            cout << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
};
int main()
{
    queue q;
    q.pop();
    q.display();
    q.pop();
    q.display();
    q.pop();
    q.display();
    q.pop();
    q.display();

    return 0;
}
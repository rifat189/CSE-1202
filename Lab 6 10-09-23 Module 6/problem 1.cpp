// problem 1
#include <bits/stdc++.h>
using namespace std;
#define size 5
int STACK[size];
class stackList
{
private:
    int top = -1;

public:
    bool isFull()
    {
        if (top == size - 1)
            return 1;
        else
            return 0;
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "OVERFLOW" << endl;
        }
        else
        {
            top++;
            STACK[top] = x;
            cout << "STACK pushed" << endl;
        }
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << STACK[i] << " ";
        }
    }
};
int main()
{
    stackList st;
    st.push(10);
    st.push(33);
    st.push(50);
    st.push(67);
    st.push(90);
    st.push(78);
    st.display();
}
#include <bits/stdc++.h>
using namespace std;
#define size 5
int STACK[size] = {10, 20, 30, 40, 50}, item[size], i=0;
class stackList
{
private:
    int top = 4;

public:
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Underflow"<<endl;
        }
        else
        {
            item[i]=STACK[top];
            top--;
            i++;
            cout << "STACK Popped" << endl;
        }
    }
    void display()
    {
        for (int j = 0; j < i; j++)
        {
            cout << item[j] << " ";
        }
    }
};
int main()
{
    stackList st;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.display();
}
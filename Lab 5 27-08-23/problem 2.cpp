#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    int pos;
};
int main()
{
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    node *four = NULL;
    node *five = NULL;
    node *six = NULL;
    node *seven = NULL;
    node *eight = NULL;
    node *nine = NULL;
    node *ten = NULL;
    node *eleven = NULL;
    node *twelve = NULL;

    one = new node();
    two = new node();
    three = new node();
    four = new node();
    five = new node();
    six = new node();
    seven = new node();
    eight = new node();
    nine = new node();
    ten = new node();
    eleven = new node();
    twelve = new node();

    three->data = 201;
    four->data = 402;
    five->data = 325;
    six->data = 101;
    seven->data = 301;
    eight->data = 251;
    eleven->data = 385;

    two->next = NULL;
    three->next = eight;
    four->next = NULL;
    five->next = eleven;
    six->next = three;
    seven->next = five;
    eight->next = seven;
    nine->next = NULL;
    ten->next = NULL;
    eleven->next = four;
    twelve->next = NULL;

    one->pos = 1;
    two->pos = 2;
    three->pos = 3;
    four->pos = 4;
    five->pos = 5;
    six->pos = 6;
    seven->pos = 7;
    eight->pos = 8;
    nine->pos = 9;
    ten->pos = 10;
    eleven->pos = 11;
    twelve->pos = 12;
    head = six;

    int value;
    cout << "Enter value: ";
    cin >> value;
    node *newNode = NULL;
    newNode = new node();
    newNode->data = value;
    //int position = 1;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == newNode->data)
        {
            cout << "Location: " << temp->pos << endl;
        }
        temp = temp->next;
        //position++;
    }
}
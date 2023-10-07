#include<bits/stdc++.h>
using namespace std;
class node{
public:
char data;
node* next;
};
int main(){
    node* head;
    node* one=NULL;
    node* two=NULL;
    node* three=NULL;
    node* four=NULL;
    node* five=NULL;
    node* six=NULL;
    node* seven=NULL;
    node* eight=NULL;
    node* nine=NULL;
    node* ten=NULL;
    node* eleven=NULL;
    node* twelve=NULL;
    
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
    
    three->data='U';
    four->data='E';
    five->data='C';
    six->data='R';
    seven->data='T';
    eight->data='E';
    eleven->data='S';

    two->next = NULL;
    three->next = eight;
    four->next = NULL;
    five->next = eleven;
    six->next = three;
    seven->next = five;
    eight->next=seven;
    nine->next=NULL;
    ten->next=NULL;
    eleven->next=four;
    twelve->next = NULL;

    head=six;

    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
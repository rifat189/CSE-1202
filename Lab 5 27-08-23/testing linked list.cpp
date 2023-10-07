#include <iostream>
using namespace std;
struct Node{
int data;
struct Node* next;
};
void createList(int a1[], int a2[]){
    struct Node* arr1 = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* arr2 = (struct Node*)malloc(sizeof(struct Node*));
    int i=0;
    while(a2[i] != NULL){
        arr1->data = a1[i];
        arr1->next = *a2[i];
    }
}
void printList(int a1[], int a2[]){
    while(a2[0]!=NULL){
        cout<<endl;
    }
}
int main()
{
    int arr1[12] = { ' ', ' ', 'U', 'E', 'C', 'R', 'T', 'E', ' ', ' ', 'S',' '};
    int* arr2[12] = {NULL, NULL, '8', NULL, 11, 3, 5, 7, NULL, NULL, 4, NULL};

}
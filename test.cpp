// Nuttasit moonpumsai 65543206013-6 sec 2
#include <stdio.h>

struct Node
{
    int Num;
    struct Node *next;
};

struct Node *AddNode(struct Node **walk, int newNum);
void ShowAll(struct Node *walk);
void UpdateNode(struct Node **walk, int choose, int newNum);
void ShowBack( struct Node **walk);
void SwapNode (struct Node **walk,int Num1,int Num2);

int main()
{
    struct Node *start;
    start = NULL;
    AddNode(&start, 10);
    AddNode(&start, 20);
    AddNode(&start, 30);
    AddNode(&start, 40);
    ShowAll(start);
    UpdateNode(&start, 10, 99);
    ShowAll(start);
    ShowBack(&start);
    ShowAll(start);
    SwapNode(&start, 99, 40);
    ShowAll(start);
    return 0;
}

struct Node *AddNode(struct Node **walk, int newNum)
{
    while (*walk != NULL)
    {
        walk = &(*walk)->next;
    }
    *walk = new struct Node;
    (*walk)->Num = newNum;
    (*walk)->next = NULL;
    return *walk;
}

void ShowAll(struct Node *walk)
{

    while (walk != NULL)
    {
        printf("%d ", walk->Num);
        walk = walk->next;
    }

    printf("\n");
}
void UpdateNode(struct Node **walk, int choose, int newNum)
{
    while ((*walk)->Num != choose)
    {
        walk = &(*walk)->next;
    }

    //((*walk)->Num, newNum);
    (*walk)->Num = newNum;
}
void ShowBack(struct Node **walk)
{
    struct Node* open = NULL;
    struct Node* current = *walk;
    struct Node* next = NULL;
    while (current != NULL) {
        
        next = current->next;
 
        
        current->next = open;
 
        
        open = current;
        current = next;
    }
    *walk = open;
}

   void SwapNode(struct Node**walk, int x, int y)
{
    
    if (x == y)
        return;
 
   
    struct Node *prevX = NULL, *currX = *walk;
    while (currX && currX->Num != x) {
        prevX = currX;
        currX = currX->next;
    }
 
    
    struct Node *prevY = NULL, *currY = *walk;
    while (currY && currY->Num != y) {
        prevY = currY;
        currY = currY->next;
    }
 
    
    if (currX == NULL || currY == NULL)
        return;
 
    
    if (prevX != NULL)
        prevX->next = currY;
    else 
        *walk = currY;
 
    
    if (prevY != NULL)
        prevY->next = currX;
    else 
        *walk = currX;
 
    
    struct Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}
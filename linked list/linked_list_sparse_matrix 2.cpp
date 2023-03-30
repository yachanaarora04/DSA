// C++ program for sparse matrix representation.
// Using Linked list
#include<iostream>
using namespace std;
 
// Node class to represent linked list
class Node
{
    public:
    int row;
    int col;
    int value;
    Node *nextPointer;
};
 
// Function to create new node
void createNewNode(Node **p, int rowIndex,
                     int colIndex, int nonZeroValue)
{
    Node *temp = *p;
    Node *r;
     
    // If link list is empty then
    // create first node and assign value.
    if (temp == NULL)
    {
        temp = new Node();
        temp->row = rowIndex;
        temp->col = colIndex;
        temp->value = nonZeroValue;
        temp->nextPointer = NULL;
        *p = temp;
    }
     
    // If link list is already created
    // then append newly created node
    else
    {
        while (temp->nextPointer != NULL)  
            temp = temp->nextPointer;
             
        r = new Node();
        r->row = rowIndex;
        r->col = colIndex;
        r->value = nonZeroValue;
        r->nextPointer = NULL;
        temp->nextPointer = r;
    }
}
 
// Function prints contents of linked list
// starting from startNode
void printList(Node *startNode)
{
    Node *ptr = startNode;
    cout << "Row position:";
    while (ptr != NULL)
    {
        cout << ptr->row << " ";
        ptr = ptr->nextPointer;
    }
    cout << endl;
    cout << "Column position:";
 
    ptr = startNode;
    while (ptr != NULL)
    {
        cout << ptr->col << " ";
        ptr = ptr->nextPointer;
    }
    cout << endl;
    cout << "Value:";
    ptr = startNode;
     
    while (ptr != NULL)
    {
        cout << ptr->value << " ";
        ptr = ptr->nextPointer;
    }
}
 
// Driver Code
int main()
{
     
    
    // sparse matrix of order 5x6 with 6 non-zero values
    int sparseMatrix[5][6] =
    {
        {0 , 8 , 0 , 0 , 9, 0 },
        {0 , 0 , 0 , 3 , 0, 0 },
        {4 , 0 , 0 , 0 , 0, 5 },
        {0 , 6 , 9 , 2 , 0, 0 },
        {0 , 0 , 0 , 0 , 0, 0 }
    };
    
    
    // Creating head/first node of list as NULL
    Node *first = NULL;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
             
            // Pass only those values which
            // are non - zero
            if (sparseMatrix[i][j] != 0)
                createNewNode(&first, i, j,
                                sparseMatrix[i][j]);
        }
    }
    printList(first);
 
    return 0;
}
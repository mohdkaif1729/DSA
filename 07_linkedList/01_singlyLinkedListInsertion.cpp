#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};


void printList(Node *head) {
  while (head) {
    cout << head->data<<" ";
    head = head->next;
    
  }
  cout << endl;
  return;
}




int main() 
{ 

  // array
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int *arr = new int[n];
  cout << "Enter the values of array:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }


  // linked list
  Node *head = new Node;
  head->data = arr[0];
  head->next = NULL;

  Node *temp = head;

  for (int i = 1; i < n; i++) {
    temp->next = new Node;
    temp = temp->next;
    temp->data = arr[i];
  }

  printList(head);

  

  return 0;
}
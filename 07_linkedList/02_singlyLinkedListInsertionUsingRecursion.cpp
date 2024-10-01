#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int data) {
      this->data = data;
      this->next = NULL;
      this->next = NULL;
    }
};

void displayList(Node *head) {
  while(head) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
  return;
}


// insertion at first using recursion
Node *createLinkedListFirst(int arr[], int n) {
  if (n == 0) {
    Node *newNode = new Node(arr[n]);
    return newNode;
  } 

  Node *newNode = new Node(arr[n]);
  newNode->next = createLinkedListFirst(arr, n - 1);
  return newNode;
}

// insertion at last using recursion
Node *createLinkedListLast(int arr[], int index, int n) {
  if (index == n) {
    Node *newNode = new Node(arr[index]);
    return newNode;
  } 

  Node *newNode = new Node(arr[index]);
  newNode->next = createLinkedListLast(arr, index + 1, n);
  return newNode;
}


int main() {
  int arr[] = {3, 1, 5, 2, 9, 8, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  Node *head = NULL;
  head = createLinkedListLast(arr, 0, n - 1);
  displayList(head);
  return 0;
}
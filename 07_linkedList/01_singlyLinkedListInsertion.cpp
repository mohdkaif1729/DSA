#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int data) {
      this->data = data;
      this->next = NULL;
    }
};


// display list
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
  // ********************* insertion at particular ****************************************
  int arr[] = {3, 1, 5, 2, 9, 8, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  Node *head = NULL;
  head = createLinkedListLast(arr, 0, n - 1);
  displayList(head);
  int value = 4;
  int index = 8;
  Node *temp = head;
  for (int i = 1; i < index && temp->next; i++) {
    temp = temp->next;
  }
  if (index == 1) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  }
  else if (index == n + 1) {
    Node *newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
  }
  else {
    Node *newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
  }
  displayList(head);




  // ********************* insertion at last ****************************************
  // int arr[] = {3, 1, 5, 2, 9, 8, 0};
  // int n = sizeof(arr) / sizeof(arr[0]);
  // Node *head = NULL;
  // Node *tail = NULL;

  // for (int i = 0; i < n; i++) {
  //   if (head == NULL) {
  //     Node *newNode = new Node(arr[i]);
  //     head = newNode;
  //     tail = newNode;
  //   }
  //   else {
  //     Node *newNode = new Node(arr[i]);
  //     tail->next = newNode;
  //     tail = newNode;
  //   }
  // }
  // displayList(head);




  // ********************* insertion at fist ****************************************
  // int arr[] = {3, 1, 5, 2, 9, 8, 0};
  // int n = sizeof(arr) / sizeof(arr[0]);
  // Node *head = NULL;

  // for (int i = n - 1; i >= 0; i--) {
  //   if (head == NULL) {
  //     Node *newNode = new Node(arr[i]);
  //     head = newNode;
  //   }
  //   else {
  //     Node *newNode = new Node(arr[i]);
  //     newNode->next = head;
  //     head = newNode;
  //   }
  // }
  // displayList(head);

  return 0;
}
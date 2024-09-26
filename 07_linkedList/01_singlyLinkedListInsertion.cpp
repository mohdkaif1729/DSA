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

void displayList(Node *head) {
  while(head) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
  return;
}


int main() {
  // insertion in start
  int arr[] = {3, 1, 5, 2, 9, 8, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  Node *head = NULL;

  for (int i = n - 1; i >= 0; i--) {
    if (head == NULL) {
      Node *newNode = new Node(arr[i]);
      head = newNode;
    }
    else {
      Node *newNode = new Node(arr[i]);
      newNode->next = head;
      head = newNode;
    }
  }
  displayList(head);
  return 0;
}
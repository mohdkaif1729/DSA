#include<iostream>
#include<climits>
using namespace std;

class Stack 
{   
private:
    int *arr;
    int size;
    int top;

public: 
    // stack constructor with size parameter
    Stack(int size) 
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    // destructor to free array or stack memory
    ~Stack() 
    {
        delete[] arr;
    }

    // push elements in stack 
    void push(int data) 
    {
        // check stack is overflow or not
        if(top == size-1) 
        {
            cout<<"Stack Overflow!"<<endl;
            return;
        }

        // push element in stack using top index
        top++;
        arr[top] = data;
    }

    // pop elements in stack
    int pop() 
    {
        // check stack is underflow or not
        if(top == -1) 
        {
            cout<<"Stack Underflow!"<<endl;
            return INT_MIN;
        }

        // pop element in stack using top index
        return arr[top--];
    }

    // check stack is empty or not
    bool isEmpty()
    {
        return top == -1;
    }

    // return peek element in stack using top index
    int peek()
    {
        if(top == -1) 
        {
            cout<<"Stack Is Empty!"<<endl;
            return INT_MIN;
        }
        return arr[top];
    }
};

int main()
{
    // create stack with size 5
    Stack stk(5);
    stk.push(3);
    stk.push(5);
    stk.push(7);

    cout<<stk.isEmpty()<<endl;
    cout<<stk.peek()<<endl;

    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    cout<<stk.peek()<<endl;
    

    return 0;
}
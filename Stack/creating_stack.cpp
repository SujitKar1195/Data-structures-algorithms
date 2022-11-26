#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    int size;
    int *a;
};

void createStack(struct Stack *st)
{
    cout << "Enter the size of the size : ";
    cin >> st->size;
    st->top = -1;
    st->a = new int[st->size];
}

int isFull(struct Stack *st)
{
    return (st->top == st->size - 1);
}

void push(struct Stack *st, int data)
{
    if (isFull(st))
    {
        cout << "Stack Overflow\n";
        return;
    }
    st->a[++st->top] = data;
}

int isEmpty(struct Stack *st)
{
    return (st->top == -1);
}

void pop(struct Stack *st)
{
    if (isEmpty(st))
    {
        cout << "Stack is Underflow\n";
        return;
    }
    cout << "Popped element is : "
         << st->a[st->top];
    cout << endl;
    st->top--;
}

void display(struct Stack st)
{
    cout << "Stack elements are : ";
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.a[i] << " ";
    }
    cout << endl;
}

void peek(struct Stack *st)
{
    if (isFull(st))
    {
        cout << "Stack is Full and top element is : " << st->a[st->top] << endl;
        return;
    }
    else if (isEmpty(st))
    {
        cout << "Stack is Empty\n";
        return;
    }
    else
    {
        cout << "Top of the element is  : " << st->a[st->top] << endl;
    }
}

int main()
{
    struct Stack st;
    createStack(&st);
    push(&st, 10);
    cout << endl;
    push(&st, 10);
    cout << endl;
    push(&st, 10);
    cout << endl;
    peek(&st);
    cout << endl;
    pop(&st);
    cout << endl;

    display(st);
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *a;
};

void Create(class Stack *st)
{
    cout << "Enter size : ";
    cin >> st->size;

    st->top = -1;

    st->a = new int[st->size];
}

void push(class Stack *st, int x)
{
    if (st->top == st->size - 1)
        cout << "Stack Overflow\n";
    else
    {
        st->top++;
        st->a[st->top] = x;
    }
}

int pop(class Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "Stack Underflow\n";
    else
    {
        x = st->a[st->top--];
    }
    return x;
}

void Display(class Stack *st)
{
    for (int i = st->top; i >= 0; i--)
    {
        cout << " " << st->a[i];
    }

    cout << endl;
}

int main()
{

    class Stack st;
    Create(&st);

    push(&st, 1);
    push(&st, 2);
    push(&st, 3);
    push(&st, 3); // printing till here if size is 4
    push(&st, 3);

    Display(&st);

    cout << "Popped element " << pop(&st) << endl;
    cout << "Popped element " << pop(&st) << endl;
    cout << "Popped element " << pop(&st) << endl;
    cout << "Popped element " << pop(&st) << endl;
    cout << "Popped element " << pop(&st) << endl;

    return 0;
}
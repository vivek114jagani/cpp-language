// Write Program to convert Infix to Postfix Expression using class and object.

#include <iostream>
using namespace std;

const int n = 20;
char s[n];
int top = -1;
class Stack
{
public:
    void push(char data)
    {
        top++;
        s[top] = data;
    }
    char pop()
    {
        char data = s[top];
        top--;
        return data;
    }
    int priority(char op)
    {
        switch (op)
        {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
        }
    }
};
int main()
{
    char in[n], post[n];
    int i, j = 0;
    Stack st;
    cout << "Enter Infix Expression :- ";
    cin >> in;
    for (i = 0; in[i] != '\0'; i++)
    {
        switch (in[i])
        {
        case '(':
            st.push(in[i]);
            break;
        case '^':
        case '*':
        case '/':
        case '+':
        case '-':
            while (st.priority(s[top]) >= st.priority(in[i]))
                post[j++] = st.pop();
            st.push(in[i]);
            break;
        case ')':
            while (s[top] != '(')
                post[j++] = st.pop();
            st.pop();
            break;
        default:
            post[j++] = in[i];
        }
    }
    while (top > -1)
        post[j++] = st.pop();
    post[j] = '\0';
    cout << "Postfix Expression :- " << post;
}
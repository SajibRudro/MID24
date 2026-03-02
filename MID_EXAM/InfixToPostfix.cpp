#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
int prec(char op)
{
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
}

int main()
{
    string infix;
    cin >> infix;
    reverse (infix.begin(),infix.end());
    for (int i = 0; i < infix.size(); i++)
    {
        if (infix[i]=='(') infix[i]=')';
        else if (infix[i]==')') infix[i]='(';
    }

    stack<char> st;
    string postfix = "";
    infix += ')';
    st.push('(');

    for (int i = 0; i < infix.size(); i++)
    {
        char x = infix[i];

        if (isalnum(x))
        {
            postfix += x;
        }
        else if (x == '(')
        {
            st.push(x);
        }
        else if (x == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && st.top() != '(' && prec(st.top()) >= prec(x))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    reverse(postfix.begin(),postfix.end());
    cout << postfix << endl;
}
#include <bits/stdc++.h>
using namespace std;
//EVALUTION CODE
double PostfixEvo(string exp)
{
    stack<int> s;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] == '/' or exp[i] == '+' or  exp[i] == '-' or exp[i] == '*' or exp[i]=='^')
        {
            int num1 = s.top();
            s.pop();
            int num2 = s.top();
            s.pop();

            if (exp[i] == '/')
                s.push(num2 / num1);
            else if (exp[i] == '+')
                s.push(num1 + num2);
            else if (exp[i] == '-')
                s.push(num2 - num1);
            else if (exp[i] == '*')
                s.push(num1 * num2);
            else
                s.push(pow(num2, num1));
        }
        else
            s.push((exp[i] - '0'));
    }
    cout << s.top() << endl;
}
int main()
{
    string X;
    cin >> X;
    PostfixEvo(X);
    return 0;
}

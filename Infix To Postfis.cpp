
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

// EXPRESSION
int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

void Postfix(string s)
{

	stack<char> st;
	string result;
    for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')|| (c >= '0' && c <= '9'))
        {
           result += c; 
        }
		else if (c == '(')
        {
            st.push('(');
        }
		else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}
    cout << result << endl;
	//Evalution
	PostfixEvo(result);
}
int main()
{
	string X;
	cin>>X;
	Postfix(X);
	return 0;
}
//Output : ab+cd+*ef-gh+*/xy+*
//((((9+8)*(7+6))/((5-4)*(3+2)))*(1+1))
//((((a+b)*(c+d))/((e-f)*(g+h)))*(x+y))
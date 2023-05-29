
#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(v) v.begin(),v.end()
#define nl cout<<"\n";


 double PrefixEvo(string exp)
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

void Prefix(string s)
{

	stack<char> st;
	stack<char> Prefix;
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
    string s1;
    
    for(int i=result.size()-1;i>-1;i--)
    {
        s1 += result[i];
        
    }
    cout << s1 << endl;
	
	PrefixEvo(result);
}
int main()
{
	string x;
	cin>>x;
   
	Prefix(x);
	return 0;
}


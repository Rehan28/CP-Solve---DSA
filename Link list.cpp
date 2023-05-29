#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
//Muku28
int mx = 100;
char st[100];
int top = 0;
void push(char n)
{
   if(top==mx)
   {
    cout<<"Overflow"<<"\n";
   } 
   else
   {
    top++;
   st[top] = n;
   }
}
void pop()
{
   if(top==0)
   {
    cout<<"underflow"<<"\n";
   } 
   else
   {
    top--;
   }
}
bool is_palindrom(string name)
{
    string s;
    while(top!=0)
    {
       s = s+st[top];
       pop();  
    }
    if(s==name)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    Muku28();
    string name;
    cin>>name;
    for(int i=0;i<name.size();i++)
    {
        push(name[i]);
    }
   
    if(is_palindrom(name))
    {
      cout<<"palindrome";
    }
    else
    {
        prints("Not palindrome");
    }
    return 0;
 }



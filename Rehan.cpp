
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
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
bool is_arraySorted(int a[],int n)
{
  if(n==1)
  {
    return 1;
  }
  return (a[0] < a[1]) and is_arraySorted(a+1,n-1);
  //akhane a+1 dhara bujay j first index samne nia gachi
  // jar jonno array size o 1 kobcy
}
// dec order
void number(int n)
{
  if(n==0)
  {
    return;
  }
  cout << n << "\n";
  number(n - 1);
}
// incri order
void incri(int n)
{
  if(n==0)
  {
    return;
  }
  incri(n - 1);
  cout << n << "\n";

}
int first_OC(int a[],int i,int val,int n)
{
  if(i==n)
  {
    return -1;
  }
  if(a[i]==val){
      return i;
  }
  return first_OC(a, i + 1, val, n);
}
int last_OC(int a[],int i,int val)
{
  if(i==-1)
  {
    return -1;
  }
  if(a[i]==val){
      return i;
  }
  return last_OC(a, i - 1, val);
}
// reverse string
void revese(string s)
{
    if(s.size()==0)
    {
      return;
    }
    string rev = s.substr(1);
    revese(rev);
    cout << s[0];
}
// j khane pi sei khane 3.14 bosabo
void replacepi(string s)
{
  if(s.size()==0)
  {
      return;
  }
  if(s[0]=='p' and s[1]=='i')
  {
      cout << "3.14";
      replacepi(s.substr(2));
  }
  else
  {
      cout << s[0];
      replacepi(s.substr(1));
  }
}
// Tower of hanoi
int hanoi(int n,char src,char des,char helper)
{
  if(n==0)
  {
      return 0;
  }
  int sum = 1;
  sum += hanoi(n - 1, src, helper, des);
  //cout << "From : " << src << " " << des << "\n";
  sum += hanoi(n - 1, helper, des, src);
  return sum;
}
// remove duplicate from string
string removeDup(string s)
{
  if(s.size()==0)
  {
    return "";
  }
  char c = s[0];
  string ans = removeDup(s.substr(1));
  if(c==ans[0])
  {
    return ans;
  }
  return c+ans;
}
// Move all X last
string moveX(string s)
{
  if(s.size()==0)
  {
    return "";
  }
  char c = s[0];
  string ans = moveX(s.substr(1));
  if(c=='x')
  {
    return ans + c;
  }
  return c+ans;
}
// all sub sequence == number of subsequence is 2^n
void subseq(string s,string ans)
{
   if(s.size()==0)
   {
     cout << ans;
     nl;
     return;
   }
   char ch = s[0];
   string next = s.substr(1);
   subseq(next,ans);
   subseq(next, ans + ch);
}
//Muku28
int Rehan()
{
     string s;
     cin>>s;
     subseq(s, "");
     return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
   // cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }


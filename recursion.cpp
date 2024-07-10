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
//all substring with ascii code
void subseq2(string s,string ans)
{
  if(s.size()==0)
  {
    cout<<ans<<"\n";
    return;
  }
  char ch = s[0];
  int code = s[0];
  string ss = s.substr(1);
  subseq2(ss, ans);
  subseq2(ss, ans + ch);
  subseq2(ss, ans + to_string(code));
}



///// Some advance Problem

// all possible permutaion
void permutation(string s,string ans)
{
  if(s.size()==0)
  {
    cout << ans << "\n";
    return;
  }
  for (int i = 0; i < s.size();i++)
  {
    char ch = s[i];
    string baki = s.substr(0, i) + s.substr(i + 1);
    permutation(baki, ans + ch);
  }
}
// count Path
// give a starting point and ending point we can jump by dice of 6 side
// number of way from start to end
int boardpath(int start,int end)
{
  if(start==end)
  {
    return 1;
  }
  if(start>end)
  {
    return 0;
  }
  int sum = 0;
  for (int i = 1; i <= 6;i++)
  {
    sum += boardpath(start + i, end);
  }
  return sum;
}
//count path from a 2D maze or grid
int countpath(int n,int i,int j)
{
  if(i==n-1 and j==n-1)
  {
    return 1;
  }
  if(i>n-1 or j>n-1)
  {
    return 0;
  }
  return countpath(n, i + 1, j) + countpath(n, i, j + 1);
}

// More advance problem
// tiling problem in here they give 2 X n space we have 2X1 size tile.how many way the sapce we cover with this tile

int tilingway(int n)
{
  if(n==0)
  {
    return 0;
  }
  if(n==1)
  {
    return 1;
  }
  return tilingway(n - 1) + tilingway(n - 2);
}
// pairing friend or alone
int friendpair(int n)
{
  if(n==0 or n==1 or n==2)
  {
    return n;
  }
  return friendpair(n - 1) + friendpair(n - 2) * (n - 1);
}
// 01 knapsack with recursion
// problem is a thif want to get more valuable item with minimum weight
int knapsack(int value[],int weight[],int n,int capacity){
  if(n==0 or weight==0){
    return 0;
  }
  if(capacity-weight[n-1]<0){
    return knapsack(value, weight, n - 1, capacity);
  }
  return max(knapsack(value, weight, n - 1, (capacity - weight[n - 1]))+value[n-1], knapsack(value, weight, n - 1, capacity));
}
//Muku28
int Rehan()
{
  int start;
  cin >> start;
  cout << tilingway(start);
  nl;
  cout << friendpair(start);
  nl;
  int value[] = {100, 50, 150};
  int weight[] = {10, 20, 30};
  cout << knapsack(value, weight, 3, 50);

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
 

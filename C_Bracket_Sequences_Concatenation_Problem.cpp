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
ll mod = 10e9 + 7;
//Muku28
int main()
{
    Muku28();
   ll n;
   cin>>n;
   string s[n];
   ll right[n] = {0};
   ll left[n] = {0};
   ll fa[n] = {0};
   map<ll,ll> left1;
   map<ll,ll> right1;
   set<ll> st;
   for(int i=0;i<n;i++)
   {
    cin>>s[i];
    for(int j=0;j<s[i].size();j++)
    {
        if(right[i]>left[i])
        {
            fa[i] = 1;
        }
        if(s[i][j]=='(')
        {
            left[i]++;
        }
        else
        {
            right[i]++;
        }
    }
    if(left[i]>right[i])
    {
        left[i] = left[i] - right[i];
        right[i] = 0;
    }
    else if(left[i]<right[i])
    {
        right[i] =right[i] - left[i];
        left[i] = 0;
    }
    else
    {
        right[i] = 0;
        left[i] = 0;
    }
    if(fa[i]==0)
    {
        //dbg(5);
        if(right[i]>0 and left[i]==0)
        {
            right1[right[i]]++; 
            st.insert(right[i]); 
        }
        else if(left[i]>0 and right[i]==0)
        {
            left1[left[i]]++;
            st.insert(left[i]);
        }
        else
        {
            right1[right[i]]++; 
            st.insert(right[i]); 
            left1[left[i]]++;
            st.insert(left[i]);
        }

    
   
    }
   
   }
   ll res = 0;
   ll c = 0;
   for (auto xx : st) {
       if(left1[xx]==0 and right1[xx]==0)
       {
        c++;
       }
       else if(left1[xx]>0 and right1[xx]>0)
       {
        //dbg(left1[xx]);
       // dbg(right1[xx]);
        //dbg(xx);
         res += (left1[xx]*right1[xx]);
       }
    }
   res += c*c;
   cout<<res<<"\n";

  return 0;
 }
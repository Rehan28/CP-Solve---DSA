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
//Muku28
int main()
{
    Muku28();
    int n;
    cin >> n;
    int a[n];
    cin(a, n);
    stack<int> st;
    st.push(a[0]);
    map<int, int> mp;
    for (int i = 1; i < n;i++)
    {
        if(st.size()>0)
        {
            if(a[i]>st.top())
            {
             while(st.size()>0)
             { 
                //dbg(st.top());
                if(st.top()>a[i])
                {
                    break;
                }
                mp[st.top()] = a[i];
                st.pop();
             }
            st.push(a[i]);
            }
            else
            {
                st.push(a[i]);
            }
        }
        else
        {
            st.push(a[i]);
        }
    }
    if(st.size()>0)
    {
        //dbg(5);
        while (st.size())
        {
            mp[st.top()] = -1;
            st.pop();
        }
    }
    for (int i = 0; i < n;i++)
    {
        cout << a[i] << " " << mp[a[i]] << "\n";
    }
    return 0;
 }
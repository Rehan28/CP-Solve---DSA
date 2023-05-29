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
    string s;
    cin>>s;
    string s1;
    bool f = true;
    int c = 1;
    int y = 1;
    for(int i=1;i<s.size()-1;i++)
    {
       if(s[i]<='9' and s[i]>='0')
        {
            s1 += s[i];
            c = 0;
        }
        else
        {
            f = false;
            
            break;
        }
        
    }
        if(s1.size()==0)
        {
            s1 += '2';
        }
        ll x = stoi(s1);
        //cout<<x<<"\n";
        if(f==false or x<100000 or x>999999 or (s[0]<'A' or s[0]>'Z') or (s[s.size()-1]<'A' or s[s.size()-1]>'Z') )
        {
            cout<<"No"<<"\n";
        }
        else
        {
             cout<<"Yes"<<"\n";
        }
    
  return 0;
 }
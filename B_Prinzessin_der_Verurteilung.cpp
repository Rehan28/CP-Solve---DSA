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
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        vector<string> v;
        char x = 'a';
        for (char i = 'a'; i <= 'z';i++)
        {
            string ss;
            ss += i;
            v.push_back(ss);
        }
        for (char i = 'a'; i <= 'z';i++)
        {
            for (char j = 'a'; j <= 'z';j++)
            {
               
                    string ss;
                    ss += i;
                    ss += j;
                    v.push_back(ss);
                
            }
        }
        for (char i = 'a'; i <= 'z';i++)
        {
            for (char j = 'a'; j <= 'z';j++)
            {
                
                    for (char k = 'a'; k <= 'z';k++)
                    {
                       
                            string ss;
                            ss += i;
                            ss += j;
                            ss += k;
                            v.push_back(ss);
                        
                    }
                    
              
            }
        }
        map<string, int> mp;
        for (int i = 0; i < s.size();i++)
        {
            string ss;
            ss += s[i];
            mp[ss]++;
            if(i<(s.size())-1)
            {
                ss += s[i + 1];
                mp[ss]++;
            }
            if(i<(s.size())-2)
            {
                ss += s[i + 2];
                mp[ss]++;
            }
        }
        for (int i = 0; i < v.size();i++)
        {
            if(mp[v[i]]==0)
            {
                cout << v[i] << "\n";
                break;
            }
        }
    }
  return 0;
 }
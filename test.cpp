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
int Rehan()
{
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    for (int i = 0; i < n;i++)
    {
        vector<int> v;
        vector<int> v1;
        sort(v.begin(), v.end());
        int sum = 0;
        for (int j = 0; j <= i;j++)
        {
            v.push_back(a[i]);
            sum += a[i];
        }
        if(sum%3==0)
        {
            sum = sum / 3;
            int now = v.size();
            int val = 0; 
            bool f = false;
            for (int j = 0; j < now;j++)
            {
                val = v[j];
                if(val>sum)
                {
                    continue;
                }
                else if(val==sum)
                {
                    v1.push_back(j);
                    break;
                }
                else
                {
                    int fast = j + 1;
                    for (int k = j + 1; k < now;k++)
                    {
                        val += v[k];
                        if(val>sum)
                        {
                            if(k==first)
                            {
                               break;
                            }
                            val -= v[k];
                            continue;
                        }
                        else if(val==sum)
                        {
                            v1.push_back(k);
                            break;
                        }
                        else
                        {
                            
                        }
                    }
                }
            }
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }
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
    ll a,b,c;
    cin >> a >> b >> c;
    ll n;
    cin >> n;
    vector<ll> usb;
    vector<ll> ps;
    while (n--)
    {
        ll x;
        cin >> x;
        string s;
        cin >> s;
        if(s=="USB")
        {
            usb.push_back(x);
        }
        else{
            ps.push_back(x);
        }
    }
    sort(usb.begin(),usb.end());
    reverse(all(usb));
    sort(ps.begin(),ps.end());
    reverse(all(ps));
    ll sum = 0;
    ll cc = 0;
    for (ll i = 0; i < a;i++)
    {
        if(usb.size()==0)
        {
            break;
        }
        sum += usb[usb.size()-1];
        cc++;
        usb.pop_back();
    }
    for (ll i = 0; i < b;i++)
    {
        if(ps.size()==0)
        {
            break;
        }
        sum += ps[ps.size()-1];
        cc++;
        ps.pop_back();
    }


    vector<ll> al;
    for (ll i = 0; i < usb.size();i++)
    {
        al.push_back(usb[i]);
       
    }
    for (ll i = 0; i < ps.size();i++)
    {
        al.push_back(ps[i]);
    }


     sort(al.begin(),al.end());
     reverse(all(al));
     for (ll i = 0; i < c; i++)
     {
         if (al.size() == 0)
         {
            break;
        }
        sum += al[al.size()-1];
        cc++;
        al.pop_back();
    }
    cout <<cc<<" "<< sum << "\n";
    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }
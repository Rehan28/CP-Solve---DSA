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
    double px,py,ax,ay,bx,by;
    cin >> px >> py >> ax >> ay >> bx >> by;
    double lo = 0.0;
    double hi = 10000000.00;
    double mid;
    double desa = ((px - ax) * (px - ax)) + ((py - ay) * (py - ay));
    double desb = ((px - bx) * (px - bx)) + ((py - by) * (py - by));
    double persona = (ax * ax) + (ay * ay);
    double personb = (bx * bx) + (by * by);
    double cira = ((bx - ax) * (bx - ax)) + ((by - ay) * (by - ay));
    cira = sqrt(cira);
    // cout << "desa : " << desa << "\n";
    // cout << "desb : " << desb << "\n";
    // cout << "persona : " << persona << "\n";
    // cout << "personb : " << personb << "\n";
    // cout << "circle : " << cira << "\n";
    while((hi-lo)>0.0000001)
    {
        mid = lo + (hi - lo) / 2;
        bool f = false;    
        
        //cout << mid << "\n";
        
        if((desa<=(mid*mid) and (persona)<=(mid*mid)) or (desb<=(mid*mid) and (personb)<=(mid*mid)))
        {
           f = true;
        }
        else if((desa<=(mid*mid) and (personb)<=(mid*mid) and cira<=(mid+mid)) or (desb<=(mid*mid) and (persona)<=(mid*mid) and cira<=(mid+mid)))
        { 
            //cout << desa << " ";
            f = true;
        }
        if(f)
        {
            hi = (double)mid;
        }
        else
        {
            lo = mid + 0.0000001;
        }
    }
    printf("%.10lf\n", lo);
    

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
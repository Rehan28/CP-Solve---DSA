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
        int a[n];
        cin(a,n);
        int b[n];
        for (int i = 0; i < n;i++)
        {
            b[i] = a[i];
        }
        sort(b, b + n);
        int x = b[n - 1];
        int se;
        if(n==1)
        {
            cout << a[0];
            goto rehan;
        }
        else
        {
             se = b[n - 2];
        }
       
        if(x==a[0])
        {
            if(se==a[n-1])
            {
                x = se;
                bool f = false;
                int point = 0;
                for (int i = 0; i < n; i++)
                {
                    if (x == a[i] and point == 0)
                    {
                        point = i;
                        f = true;
                    }
                    if (f)
                    {
                        cout << a[i] << " ";
                    }
                }
            //
            point--;
            //dbg(a[point]);
            if(a[point]==a[0])
            {
                cout << a[point] << " ";
            }
            else
            {
                int xx = 0;
                for (int i = point; i>0;i--)
                {
                   if(a[0]>=a[i])
                    {
                       // dbg(i);
                        xx = i;
                        break;
                    } 
                    cout << a[i] << " ";
                }
                for (int i = 0; i <=xx;i++)
                {
                    cout << a[i] << " ";
                }
                    
            }
            }
            else
            {
            x = se;
            bool f = false;
            int point = 0;
            for (int i = 0; i < n;i++)
            {
                if(x==a[i] and point==0)
                {
                    point = i;
                    f = true;
                }
                if(f)
                {
                    cout << a[i] << " ";
                }
            }
            //
            point--;
            //dbg(point);
            if(a[point]==a[0])
            {
                cout << a[point] << " ";
            }
            else
            {
                int xx = 0;
                for (int i = point; i>0;i--)
                {
                    cout << a[i] << " ";
                    if(a[0]>=a[i-1])
                    {
                       // dbg(i);
                        xx = i;
                        break;
                    }
                }
                for (int i = 0; i < xx;i++)
                {
                    cout << a[i] << " ";
                }
                    
            }
            }
           
        }
        else if(x==a[n-1])
        {
           
                bool f = false;
                int point = 0;
                for (int i = 0; i < n; i++)
                {
                    if (x == a[i] and point == 0)
                    {
                        point = i;
                        f = true;
                    }
                    if (f)
                    {
                        cout << a[i] << " ";
                    }
                }
            //
            point--;
            //dbg(a[point]);
            if(a[point]==a[0])
            {
                cout << a[point] << " ";
            }
            else
            {
                int xx = 0;
                for (int i = point; i>0;i--)
                {
                   if(a[0]>=a[i])
                    {
                       // dbg(i);
                        xx = i;
                        break;
                    } 
                    cout << a[i] << " ";
                }
                for (int i = 0; i <=xx;i++)
                {
                    cout << a[i] << " ";
                }
                    
            }
        }
        else
        {
            bool f = false;
            int point = 0;
            for (int i = 0; i < n;i++)
            {
                if(x==a[i] and point==0)
                {
                    point = i;
                    f = true;
                }
                if(f)
                {
                    cout << a[i] << " ";
                }
            }
            //
            point--;
            if(a[point]==a[0])
            {
                cout << a[point] << " ";
            }
            else
            {
                int xx = 0;
                for (int i = point; i>0;i--)
                {
                    cout << a[i] << " ";
                    if(a[0]>=a[i-1])
                    {
                       // dbg(i);
                        xx = i;
                        break;
                    }
                }
                for (int i = 0; i < xx;i++)
                {
                    cout << a[i] << " ";
                }
                    
            }
        }
        rehan:
        nl;
    }
  return 0;
 }
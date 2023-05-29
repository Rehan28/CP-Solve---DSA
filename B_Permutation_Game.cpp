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
   
        int n,y;
        cin>>n>>y;
        int a[y];
        cin(a,y);
        map<int,int> mp;
        map<int,int> mp1; 
        bool f = true;
        for(int i=0;i<y-1;i++)
        {
            if(a[i]>a[i+1] or(i==y-2 and a[i]==a[i+1]))
            {
                int x = (n-a[i]) + a[i+1];
                mp[a[i]] = x;
            }
            else if(a[i]<a[i+1])
            {
                int x = a[i+1] - a[i];
                 mp[a[i]] = x;
            }
            else
            {
                 //dbg(i);
                f = false;
            }
        }
       
        for(int i=1;i<=n;i++)
        {
            if(mp[i]!=0)
            {
                mp1[mp[i]]++;
            }
            
        }
        for(int i=1;i<=n;i++)
        {
            //
            if( mp1[mp[i]]>1)
            {
               
                f = false;
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
             for(int j=1;j<=n;j++)
             {  //
                if(mp1[j]==0)
                {
                  //dbg(j);
                    mp[i] = j;
                    mp1[j]++;
                    break;

                }
             }
            }
        }
        
        if(n==1 and y==1)
        {
            printi(a[0]);
        }
        else if(f)
        {
            for(int i=1;i<=n;i++)
            {
            cout<<mp[i]<<" ";
            }
            nl;
        }
        else
        {
            printi(-1);
        }
    
  return 0;
 }
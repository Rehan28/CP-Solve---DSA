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
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        cin(a,n);
        int b[n*2];
        int left = n-1;
        int right = n+1;
        if(a[0]==n or a[n-1]==n)
        {
            int x = n;
            if(a[0]>a[n-1])
            {
                b[n] = a[0];
                int i = 1;
                int j = n-1;
                while(i<=j)
                {
                    if(a[i]<a[j])
                    {
                        b[left] = a[i];
                        left--;
                        i++;
                    }
                    else if(i==j)
                    {
                        b[left] = a[i];
                        left--;
                        i++;
                    }
                    else
                    {
                        b[right] = a[j];
                        right++;
                        j--;
                    }
                }
            }
            else
            {
               
                b[n] = a[n-1];
                int i = 0;
                int j = n-2;
                while(i<=j)
                {
                    if(a[i]<a[j])
                    {
                        b[left] = a[i]; 
                        //dbg(a[i]);
                        //dbg(i);
                        left--;
                        i++;
                    }
                    else if(i==j)
                    {
                        b[left] = a[i];
                        left--;
                        i++;
                    }
                    else
                    {
                        b[right] = a[j];
                        //dbg(a[j]);
                        //dbg(j);
                        right++;
                        j--;
                    }
                }
            }
            
             
            for(int i=left+1;i<right;i++)
            {
                cout<<b[i]<<" ";
            }
            nl;
        }
        else
        {
            printi(-1);
        }
    }
  return 0;
 }
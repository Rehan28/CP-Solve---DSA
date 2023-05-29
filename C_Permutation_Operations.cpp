#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(v) v.begin(),v.end()
#define nl cout<<"\n";
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        cin(a,n);
       vector<pair<int,int>> p;
       ll b[n+1];
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int sub = a[i] - a[i+1];
                p.push_back(make_pair(sub,i+2));
            }
            
        }
        sort(p.begin(),p.end());
        int x = 1;
        //dbg(p.size());
        for(int i=0;i<p.size();i++)
        {
            
            b[p[i].first] = p[i].second;
            
           
            dbg(p[i].first);
            x++;
        }
       // dbg(x);
        for(int i=x;i<=n;i++)
        {
            b[i] = n;
        }
       /* int x = 0;
        ll sum = 0;
        for(int i=0;i<n-1;i++)
        {
            //a[i] += sum;
            a[i+1] +=sum;
            //cout<<i<<" "<<a[i]<<"\n";
            //cout<<i+1<<" "<<a[i+1]<<"\n";
            if(a[i]>a[i+1])
            {
                ll sum1 = 0;
                for(int j=x+1;j<=n;j++)
                {
                    sum += j;
                    sum1 += j;
                    //dbg(i+1);
                   
                    a[i+1] += j; dbg(i);
                   cout<<j<<" Rehan\n";
                    //cout<<"b "<<j<<" "<<b[j]<<"\n";
                    if(a[i]<=a[i+1])
                    {
                        x = j;
                        b[j] = i+2;
                        //a[i+1] -= sum1;
                        break;
                    }
                }
                //i--;
            }
        }*/
        //a[n-1] +=sum;
        for(int i=1;i<=n;i++)
        {
            cout<<b[i]<<" ";
        }
        nl;
        
       /* for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
        //nl;
    }
  return 0;
 }
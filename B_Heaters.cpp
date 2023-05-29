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
    
    
        int n,x;
        cin>>n>>x;
        x--;
        int a[n];
        cin(a,n);
        map<int,int> mpone;
        map<int,int> mp;
        int one = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                mpone[i]++;
                one++;
                //dbg(i+x);//dbg(min(i+x,n));
                for(int j=max(0,(i-x));j<=min(n,(i+x));j++)
                {
                    
                    mp[j]++;
                }
            }
        }
        
        int y = 0;
        int z = 0;
        int gap = 0;
        bool f = true;
        for(int i=0;i<n;i++)
        {
            if(mp[i]>2 and gap==0)
            {
                y = i;
                gap = 1;
            }
            if((mp[i]<3 or i==n-1) and gap==1)
            {
                z = i;
                gap = 0;
            }
            if(mp[i]==0)
            {
                f = false;
                break;
            }
            //dbg(y);
            //dbg(z);
            for(int k=y;k<z;k++)
            {
                //dbg(k);
                //dbg(mpone[k]);
                if(mpone[k]>0)
                {
                    one--;
                }
                y = 0;
                z = 0;
            }
        }
        if(f)
        {
            cout<<one<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    
  return 0;
 }
 
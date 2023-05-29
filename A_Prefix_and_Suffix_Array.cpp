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

int pal(string str)
{
    int x = str.size();
    for (int i = 0; i < x / 2; i++) 
    {
       
        if (str[i] != str[x - i - 1])
        {
           return false; 
        }
            
    }
    return true;
}
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n; 
        int xx = (n*2)-2;
        string s[xx];
        int c = 0;
        int cc = 0;
       
        for(int i=0;i<xx;i++)
        {
            cin>>s[i];
            if(s[i].size()==1)
            {
                c = i;
            }
        }
        bool f = false;
        for(int i=0;i<xx;i++)
        { 
            if(s[c][0]==s[i][0] and i!=c)
            {
               
                f = true;
                break;
            }
        }  
        map<int,int> mp;
       
        string ss;
        ss += s[c];
        char ch = s[c][0];
        mp[c]++;
        //cout<<f<<"\n";
        int yy = 0;
        int rehan = 1;
        if(n==2)
        {
            if(s[0]==s[1])
            {
                yes;
            }
            else
            {
                no;
            }
          yy++;
        }
        else if(f)
        {
          while(1)
          {
            rehan++;
            f = false;
            for(int i=0;i<xx;i++)
            { 
                //dbg(i);
                
                if(mp[i]==0 and s[i][s[i].size()-2]==ch and s[i].size()==rehan)
                {
                    f = true;
                    for(int k=1;k<s[i].size();k++)
                    {
                        ss += s[i][k];
                    }
                    mp[i]++;
                    ch = s[i][s[i].size()-1];
                    //break;
                }
               
            }
            if(f==false)
            {
                break;
            }
          }
        }
        else
        {
            f = true;
            while(1)
          {
            rehan++;
            for(int i=0;i<xx;i++)
            { 
                //dbg(i);
                
                if(mp[i]==0 and s[i][s[i].size()-1]==ch and s[i].size()==rehan)
                {
                   f = false;
                    for(int k=s[i].size()-2;k>-1;k--)
                    {
                        ss += s[i][k];
                    }
                    mp[i]++;
                    ch = s[i][0];
                   break;
                }
               
            }
            if(f)
            {
                break;
            }
          }
        }
      cout<<ss<<"\n";
     if(pal(ss) and yy==0)
     {
        yes;
     }
     else if(yy==0)
     {
        no;
     }

        
    }
  return 0;
 }
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int b[n];
        cin(b,n);
        vector<pair<int,int>> p;
        int c = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                c++;
            }
            p.push_back(make_pair(b[i],i));
        }
        sort(p.begin(),p.end());
        int d[n+1] = {0};
        //dbg(c);
        s[n] = 0;
        
        int sum = 0;
        for(int i=n-1;i>-1;i--)
        {
            if(c==0)
            {
                break;
            }
           int x = p[i].first;
           int y = p[i].second;
           int r = 1;
           
           while(r<n)
           {
            if((s[y+r]=='1' and d[y+r] == 0))
            {
                break;
            }
            r++;
           }
           
           if(s[y] == '1' and d[y] == 0)
           {
            sum+= x;
            d[y] = 1;
            c--;
           }
           else if(s[y] !='1' and s[y+r] == '1' and d[y+r] == 0 and y+r<n)
           {
                sum += x;
                d[y] = 1;
                swap(s[y],s[y+r]);
                c--;
           }
            //c--;
        }
        cout<<sum<<"\n";

    }
  return 0;
 }
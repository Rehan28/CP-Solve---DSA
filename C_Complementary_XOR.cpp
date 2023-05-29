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
        string s1;
        cin>>s;
        cin>>s1;
        s+='2';
        vector<int> a;
        vector<int> b;
        bool f = true;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='1' and f==true)
            {
                a.push_back(i+1);
                f = false;
            }
            if((s[i]=='0' and f == false))
            {
                b.push_back(i);
                 f = true;
            }
            if(s[i]=='2' and f == false)
            {
                b.push_back(i);
            }
        }
        int x =  a.size();
        if(x>4)
        {
            prints("NO");
        }
        else if(x==1 and s[0]=='0' and s[n-1]=='0')
        {
            prints("YES");
            printi(1);
            cout<<a[0]<<" "<<b[0]<<"\n";
        }
        else if(x==1)
        {
            prints("YES");
            printi(2);
            cout<<a[0]<<" "<<b[0]-1<<"\n";
            cout<<b[0]<<" "<<b[0]<<"\n";
        }

    }
  return 0;
 }
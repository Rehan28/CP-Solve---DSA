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
        char c;
        cin>>c;

       string s;
       cin>>s;

       int x = 0;

       for(int i=0;i<n;i++)
       {
        if(s[i] == 'g')
        {
            x = i+1;
            break;
        }
       }

       bool b = false;
       vector<int> d;
       int r = 0;
       int cc = 0;

       for(int i=0;i<n;i++)
       {

        if(s[i] == c and b==false)
        {
            b = true;
            r = i;
        }
        if(s[i] == 'g')
        {
            b = false;
        }
        if(b)
        {
            cc++;
        }
        else
        {
            //dbg(cc);
            d.push_back(cc);
            cc = 0;
        }

       }
       //cout<<b<<" rehan"<<"\n";
       if(b)
       {
        d.push_back((n-1-r)+(x));
       }
       cout<<*max_element(d.begin(),d.end())<<"\n";

    }
  return 0;
 }
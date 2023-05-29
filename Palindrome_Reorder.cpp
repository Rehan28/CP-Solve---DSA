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
     string s;
     cin>>s;
     map<char ,int> mp;
     for(int i=0;i<s.size();i++)
     {
        mp[s[i]]++;
     }
     int c = 0;
     char ch = 'A';
     char mid = '0';
     
     for(int i=0;i<26;i++)
     {
        if(mp[ch]%2!=0)
        {
            c++;
            mid = ch;
        }
        if(c>1)
        {
            cout<<"NO SOLUTION"<<"\n";
            return 0;
        }
        ch++;
     }
     ch = 'A';
     string s1;
     for(int i=0;i<26;i++)
     {
        if(mp[ch]!=0 and ch!=mid)
        {
            for(int j=0;j<(mp[ch]/2);j++)
            {
             s1 += ch; 
            }
          
        }
        ch++;
     }
     cout<<s1;
     for(int i=0;i<mp[mid];i++)
     {
        cout<<mid;
     }
     reverse(s1.begin(), s1.end());
     cout<<s1<<"\n";
     
  return 0;
 }
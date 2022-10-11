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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1,s2;
    int j = s.size()-1;
    for(int i=0;i<n/2;i++)
    {
        s2+=s[j];
        j--;
        s1+=s[j];
        j--;
    }
    cout<<s1;
    if(n%2!=0)
    {
        cout<<s[0];
    }
    for(int i=s2.size()-1;i>-1;i--)
    {
        cout<<s2[i];
    }
    nl;
  return 0;
 }
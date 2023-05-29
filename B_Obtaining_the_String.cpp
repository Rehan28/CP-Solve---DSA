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
    string s,t;
    cin>>s>>t;
    string s1,t1;
    s1 = s;
    t1 = t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            cout<<-1<<"\n";
            return 0;
        }
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x = i+1;
        int y = i+1;
        for(int j=i;j<n;j++)
        {
            if(t1[i]==s1[j])
            {
                y = j+1;
                break;
            }
        }
       //dbg(x);
       //dbg(y);
        for(int j=y-1;j>=x;j--)
        {
            swap(s1[j-1],s1[j]);
            v.push_back(j);
        } 
        
         
           
        
    }
    //cout<<s1<<"\n";
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    nl;
  return 0;
 }
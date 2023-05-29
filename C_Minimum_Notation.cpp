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
        string s;
        cin>>s;
        string s1 = s;
        vector<pair<char,int>> p;
        for(int i=0;i<s.size();i++)
        {
          p.push_back(make_pair(s[i],i));
        }
        sort(p.begin(),p.end());
        sort(s1.begin(),s1.end());
        /*for(int i=0;i<s.size();i++)
        {
          cout<<p[i].first<<" "<<p[i].second<<"\n";
        }*/
        int x = p[0].second;
        int y = 1;
        for(int i=0;i<s.size();i++)
        {
          //cout<<x<<"\n";
          if(x==i and y<s.size())
          {
            x = p[y].second;
            y++;
            continue;
          }
          else if(x<i and y<s.size())
          {
            x = p[y].second;
            y++;
            i--;
            continue;
          } 
          if(i<x)
          {
            if(s[i]!='9')
            {
              s[i]++;
            }
          }
        }
        sort(s.begin(),s.end());
        cout<<s<<"\n";
    }
  return 0;
 }
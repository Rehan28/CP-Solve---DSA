
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
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        int c = 0;
        for(int i=0;i<n;i++)
        {
          string s;
          cin>>s;
          int time = 0;
          if(s[0]=='D')
          {
            time = 28800;
          }
          else
          {
            time = 32400;
          }

          string s1;
          int start = 0;
          int end = 0;
          int x = 3600;
          int point = 0;
          for(int i=2;i<s.size();i++)
          {
            if(s[i]==':' and point<3)
            {
                int num = stoi(s1);
                start += num*x;
                x = x/60;
                s1.erase();
                point++;
            }
            else{
                int num = stoi(s1);
                end += num*x;
                x = x/60;
                s1.erase();

            }
            s1+=s[i];
          }
          cout<<start<<"\n";
          cout<<end<<"\n";
        }



    }
  return 0;
 }

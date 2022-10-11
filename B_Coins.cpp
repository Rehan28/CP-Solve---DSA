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
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i=0;i<3;i++)
    {
        cin>>s;
        if(s[1]=='>')
        {
            char c = s[0];
            if(c=='A')
            {
                a++;
            }
            else if(c=='B')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        else
        {
            char c = s[2];
            if(c=='A')
            {
                a++;
            }
            else if(c=='B')
            {
                b++;
            }
            else
            {
                c++;
            }
        }
    }
    string s1;
    for(int i=0;i<3;i++)
    {
        if(a==i)
        {
        s1+='A';
        }
        else if(b==i)
        {
        s1+='B';
        }
        else
        {
        s1+='C';
        }

    }
    if(s1[0]==s1[1] or s1[1]==s1[2] or s1[2] == s1[0])
    {
        prints("Impossible");
    }
    else
    {
        cout<<s1<<"\n";
    }
    
  return 0;
 }
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
bool ispalindrome(string s)
{
    int x = s.size();
    int j = x-1;
    for(int i=0;i<x/2;i++)
    {
        if(s[i]!=s[j])
        {
           return false;
        }
        j--;
    }
    return true;
}
//Muku28
int main()
{
    Muku28();
    string s;
    getline(cin,s);
    cin.ignore();
    int x =0;
    int b = 0;
    for(int i=s.size()-1;i>-1;i--)
    {
        if(s[i]!='a')
        {
            x = i+1;
            break;
        }
        b++;
    }
    int y =0;
    for(int i=0;i<s.size();i++)
    {
         if(s[i]!='a')
        {
            y = i;
            break;
        }
    }
    //dbg(x);
    if(y>b)
    {
        y = 0;
    }
    string s1;
    for(int i=y;i<x;i++)
    {
        s1+=s[i];
    }
    //cout<<s1<<endl;
    if(ispalindrome(s1))
    {
        prints("Yes");
    }
    else
    {
        prints("No");
    }

  return 0;
 }
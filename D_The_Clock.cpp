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


bool isPalindrome(int x,int y)
{
    string sh = to_string(x);
    string sm = to_string(y);
    if(sh.size()<2)
    {
        sh = '0' + sh;
    }
    if(sm.size()<2)
    {
        sm = '0' + sm;
    }
    string s = sh + sm;
    if(s[0]==s[3] and s[2]==s[1])
    {
        return true;
    }
    return false;
}


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
        int n;
        cin>>n;
        int x = ((int)(s[0]-'0')*10) + (int)(s[1]-'0');
        int y = ((int)(s[3]-'0')*10) + (int)(s[4]-'0');
        //cout<<x<<" "<<y<<"\n";
        int c = 0;
        x = (x*60) + y;
        //dbg(c);
        
        int u = 0;
        int time = x;
        while(1)
        {
            time += n;
           // dbg(time-1440);
          
            int hour = time/60;
            int min = time%60;
            if(hour%10 == min/10 and min%10 == hour%10)
            {
                c++;
            }
            u++;
           if(x==hour and y==min)
           {
            break;
           }
            //dbg(u);
           // dbg(c);
        }
        cout<<c<<"\n";
    }
  return 0;
 }
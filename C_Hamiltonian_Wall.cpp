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
        string s1,s2;
        cin>>s1>>s2;
        string s3,s4;
        s3 = s1;
        s4 = s2;
        string s5,s6,s7,s8;
        s5 = s1;
        s6 = s2;
        s7 = s1;
        s8 = s2;
        int x = 0;
        int c = 0;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='B' or s2[i]=='B')
            {
                x = i;
                c++;
                break;
            }
        }
        int x1 = x;
        int y = n-1;
        for(int i=n-1;i>-1;i--)
        {
            if(s1[i]=='B' or s2[i]=='B')
            {
                y = i;
                break;
            }
        }
        //dbg(x);
        int b = 1;
        if(s1[x]=='B')
        {
            int ss = 1;
            while(x<y)
            {
                if(s2[x]=='B' and ss==1)
                {
                    ss = 2;
                    s1[x] = 'W';
                }
                else if(s1[x+1]=='B' and ss == 1)
                {
                    s1[x] = 'W';
                    x++;
                }
               else if(s1[x]=='B' and ss==2)
                {
                    ss = 1;
                    s2[x] = 'W';
                }
                else if(s2[x+1]=='B' and ss == 2)
                {
                    s2[x] = 'W';
                    x++;
                }
                else
                {
                   
                    break;
                }
            
            }
            bool f = true;
            for(int i=0;i<n;i++)
            {
            if(s1[i]=='B' and i!=y)
            {
                //cout<<s1[i]<<"\n";
               f = false;
                break;
            }
            //dbg(1);
            if(s2[i]=='B' and i!=y)
            {
               f = false;
                //cout<<s2[i]<<"\n";
                break;
            }
            }
            if(f)
            {
                b = 0;
            }
        }
         if(s4[x1]=='B'){
            int ss = 2;
            while(x1<y)
            {
                if(s4[x1]=='B' and ss==1)
                {
                    ss = 2;
                    s3[x1] = 'W';
                }
                else if(s3[x1+1]=='B' and ss == 1)
                {
                    s3[x1] = 'W';
                    x1++;
                }
               else if(s3[x1]=='B' and ss==2)
                {
                    ss = 1;
                   s4[x1] = 'W';
                }
                else if(s4[x1+1]=='B' and ss == 2)
                {
                    s4[x1] = 'W';
                    x1++;
                }
                else
                {
                    
                    break;
                }
            
            }
            bool f = true;
            for(int i=0;i<n;i++)
            {
            if(s3[i]=='B' and i!=y)
            {
                //cout<<s1[i]<<"\n";
               f = false;
               break;
            }
            //dbg(1);
            if(s4[i]=='B' and i!=y)
            {
                 f = false;
                //cout<<s2[i]<<"\n";
                break;
            }
            }
            if(f)
            {
                b = 0;
            }
        }
        //re

        

        if(b==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
    }
  return 0;
 }
 /*
 if(s5[y]=='B')
        {
            int ss = 1;
            while(x<y)
            {
                if(s6[y]=='B' and ss==1)
                {
                    ss = 2;
                    s5[y] = 'W';
                }
                else if(s5[y-1]=='B' and ss == 1)
                {
                    s5[y] = 'W';
                    y--;
                }
               else if(s5[y]=='B' and ss==2)
                {
                    ss = 1;
                    s6[y] = 'W';
                }
                else if(s6[y-1]=='B' and ss == 2)
                {
                    s6[y] = 'W';
                    y--;
                }
                else
                {
                   
                    break;
                }
            
            }
            bool f = true;
            for(int i=0;i<n;i++)
            {
            if(s5[i]=='B' and i!=x)
            {
                //cout<<s1[i]<<"\n";
               f = false;
                break;
            }
            //dbg(1);
            if(s6[i]=='B' and i!=x)
            {
               f = false;
                //cout<<s2[i]<<"\n";
                break;
            }
            }
            if(f)
            {
                b = 0;
            }
        }
         if(s6[y]=='B'){
            int ss = 2;
            while(x<y)
            {
                if(s8[y]=='B' and ss==1)
                {
                    ss = 2;
                    s7[y] = 'W';
                }
                else if(s7[y-1]=='B' and ss == 1)
                {
                    s7[y] = 'W';
                    y--;
                }
               else if(s7[y]=='B' and ss==2)
                {
                    ss = 1;
                   s8[y] = 'W';
                }
                else if(s8[y-1]=='B' and ss == 2)
                {
                    s8[x] = 'W';
                    y--;
                }
                else
                {
                    
                    break;
                }
            
            }
            bool f = true;
            for(int i=0;i<n;i++)
            {
            if(s7[i]=='B' and i!=x)
            {
                //cout<<s1[i]<<"\n";
               f = false;
               break;
            }
            //dbg(1);
            if(s8[i]=='B' and i!=x)
            {
                 f = false;
                //cout<<s2[i]<<"\n";
                break;
            }
            }
            if(f)
            {
                b = 0;
            }
        }*/
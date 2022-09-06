#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
int main()
{
    muku28();
    int t;
    cin>>t;
   while(t--)
    {
        string s;
        cin>>s;
        int x = s.length();
        int c = 0;
        int count = 0;
        int h = 0;
        //cout<<s[x-1];
        
       for(int i=0;i<x-1;i++)
       {
        if(s[i]=='A')
        {
            c++;
            
        }
        else{
            c--;
        }
       }
       if(c>-1)
       {
        prints("YES");
       }
       else
       {
        prints("NO");
       }
    }
  return 0;
 }

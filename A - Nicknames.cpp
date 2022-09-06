#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}
//muku28
int main()
{
    muku28();
    int t;
    cin>>t;
    string a[t];
    string s[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        cin>>s[i];
    }
    int sum = 0;
    for(int i=0;i<t;i++)
    {
        int count = 0;
        int c = 0;int countt = 0;
        int cc=0;
        for(int j=0;j<t;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                count++;
                //break;
            }
            if(s[i]==a[j])
            {
                countt++;
            }
            if(a[i]==s[j])
            {
                c++;
                //break;
            }
            if(s[i]==s[j])
            {
                cc++;
            }
        }
        if(c>0 || count>0 and cc>0 or countt>0)
        {
            sum++;
            break;
        }
    }
     if(sum==0)
    {
        prints("Yes");

    }
    else
    {
        prints("No");
    }
  return 0;
 }
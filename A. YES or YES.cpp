
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
   while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            s[i] = toupper(s[i]);
        }
        string h = "YES";
        int count = 0;
        for(int i=0;i<3;i++)
        {
            if(h[i]!=s[i])
            {
                count++;
            }
        }
        if(count == 0)
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

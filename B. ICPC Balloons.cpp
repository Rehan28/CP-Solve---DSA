
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int a[n];
        int b[n];
        a [0] = 0;
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                a[count+1] = i;
                b[count] = i;
                count++;
            }
        }
        int sum = 0;
        int y = 0;
        for(int i=0;i<count;i++)
        {
            int x = (b[i]-a[i]);
            sum = sum + x;
            y++;
        }
        sum = sum + (n-a[count]) +1;
        printi((sum+y));
    }
  return 0;
 }

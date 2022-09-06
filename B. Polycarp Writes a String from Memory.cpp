
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
        string a;
        cin>>a;
        int x = a.length();
        //printi(x);
        //s[x]='1';
        int j = 0;
        int count = 0;
        while(j<x)
        {
            int y = 3;
            int g = 1;
            string b;
            //j++;
            b[0] = a[j];
            for(int i=0;i<y;)
            {
                if(b[i]!=a[j+1])
                {
                    b[i+1] = a[j+1];
                    i++;
                    if(a[j]!=a[j+2] and i<2)
                    {
                        b[i] = a[j+2];
                        i++;
                        //j++;
                    }
                    else
                    {
                        //j++;
                    }

                }
               j++;
            }
          /* cout<<b[0]<<endl;
           cout<<b[1]<<endl;
           cout<<b[2]<<endl;
           cout<<j<<endl;*/
            while(1)
            {
                if(b[0]==a[j]||b[1]==a[j]||b[2]==a[j])
                {
                    j++;
                }
                else
                {
                    break;
                }
            }

            count++;
        }
        printi(count);



    }
  return 0;
 }

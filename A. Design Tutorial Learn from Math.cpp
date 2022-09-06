
#include<bits/stdc++.h>

using namespace std;

int Prime(int x)
{
    int dif;
    dif = x/2;
    for(int i=2;i<=dif;i++)
    {
       if(x%i==0)
       {
           return 1;

       }
    }
    return 0;
}

int main()
{
   int n;
   cin>>n;
   int div;
   div = n/2;

   //cout<<Prime(4);

   //cout<<Prime(10);
   for(int i=div;i>3;i--)
   {

       //cout<<i;
       int count =0;

       if(Prime(i) == 1)
        {
        for(int j=div;j<n-1;j++)
        {
           if(Prime(j)== 1 )
           {
               if(i+j == n)
               {
                    cout<<i<<" "<<j<<endl;
                   count++;

               }
               if(count>0)
               {
                   break;
               }
           }
       }

       }
        if(count>0)
               {
                   break;
               }
    }

}

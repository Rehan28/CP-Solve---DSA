
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{

   string s;
   getline(cin,s);
   //cout<<s;
   int count = 0;
   string x;
   cout<<s.size();

   for(int i=0;i<s.size();i++)
   {   int c = 0;
       for(int j=0;j<count;j++)
       {
           if(x[j]==s[i])
           {
               c++;
              break;
           }
       }
       if(s[i]>='a' && s[i]<='z' && c==0)
       {

        x[count] = s[i];
        count++;

       }

   }
   cout<<count<<endl;
 }

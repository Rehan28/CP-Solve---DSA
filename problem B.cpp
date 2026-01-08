#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin<<t;
   int n[1000000000];
   int k[1000000000];
   int sum[100000000];

   for(int i=0;i<t;i++){
    cin<<n[i];
    cin<<k[i];
   }

   for(int i=0;i<t;i++){
        sum[i] =0;
    for(int j=0;j<100000;j++){
        for(int b=0;b<n[i];b++){
           sum[i] = sum[i] + j;
            if(sum[i]/k[i]){
          break;
     }
        }

    }
   }


}
//good problem
// 1+2+3+4+... amon kore sum 1e14+ a o problem hoy na O(n) a colbe

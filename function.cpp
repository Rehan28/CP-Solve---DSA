#include <bits/stdc++.h>
using namespace std;

//0 1 1 2 3 5 8 13 .....

//self call k recursion

int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}




int main(){

    int x = fibo(3);
    cout << x << "\n";
    return 0;
}

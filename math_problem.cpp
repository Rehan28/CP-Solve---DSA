#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define all(x) x.begin(), x.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

//# Constructing a Number
/*onek gula number, oi number gular digit dia kono amon number banano jay kina jeta n%3==0
amra jani digit sum 3 dia divisable hoily number ta 3 dia divisiable(karon 10%3==1 jeta x*1 = x)
*/
 //## February 29
 /*2 ta date deoa ache ber korty hobe ar moddy koyta leapyear ache

*** important --> meaning full nam dile sohoj hoy + function use kora valo
 */

//## IP Checking
/*Easy problem just conversion,string onek somoy int hisebe input nity pari */
    // for (int i = 0; i < 4;i++){
    //         cin >> dec[i];
    //         char dammy;
    //         cin >> dammy;
    // }

//#Fadi and LCM 
/*LCM ar concept thaklye hobe.  --video ty lcm with factor dia dakhaiche*/

//#Integer Divisibility
/*n x dia banao kono number ar divisor kina 
jamon 7 3333333 ar divisor. ata ber korty hobe modular sum use kore korty pari
*/

//## Ekka Dokka 
/*Problem ta one sundor --> But valo kore pori nai
prime fact ar valo akta use sekha jay.
*/
//# Divisible Subsequences
/* ata mainly subarray divisible by d problem but bolche subsequence
   pfx kore mod kore rakty pari,then dakhbo left a koyta same pfxmod ache so amra oi
   ta koybar ber bad deoa jay.
   0 hoilyeo koyakbar dab deoa jaity pare
   so = mp[0]++;
   ** modulo same mane (a%d - b%d) = 0

*/

//# Large Division 
/*
ata Big modulo ar problem.onek boro akta number re akta digit ar mod kore onnotar sthe 10* kore
korty pari.
*/
//#Positive Negative Sign
/*
ad-hok type problem.observation dekhe boja gache.
n = 8 and m = 2 hole m number por por sing change koralagbe the total sum koto and n%(2*m)==0
-1,-2,3,4,-5,-6,7,8 - observation holo sob somoy 2ta sing pair ar gap same thake 
seta amra n(n+1)/2 dia ber korty pari.
   **ai approace chara o kora jay 
    1,2,3,4,5,6,7 dakha jay j nporer number n boro hobe
    so, -1, -2, 3, 4 ader sum hobe = 2 * 2 = 4
*/

//# Maximum GCD 
/*
obserrvation type problem.1-n ar moddy amon pair jader gcd max
ans : n/2 why?
*/

//#Square Free Factorization
/*
problem statement ta ami valo kore bujinai.pore bujchi
akhane n deoa thakbe minimum koyta factor dia n banano possible ber kortybe and factor gula 
square free hoity hobe (kono akta number ar divisor jodi onno kono number ar squar hoy then 
oi number square free na jamon 8 jar divisor 2^2=4).Toh amder dakhty hobe kono number nite pari.
sol- prime fact gula ber korbo
2,3^3,5,7^2 agula n ar prime factor akhon j sokol primefact ar power 1 ar basi tara square free na
jamon 3^3 % 3^2 and 7^2 %7^2 toh amra 7 7 alada nite pari jamon
2,3,3,3,5,7,7 but at aminimu hoityche na tarjonno alada kore nebo
2,3,5,7 akta then 3,7 then 3 atay ans hoy 3.
*/

//#Divisors 2
/*Problem ta bujty aktu problem hoice
1e6 ar moddy amon sob 108th number print kora lagbe jader all d[n]%d[m] d[x] means number of 
divisor (so m jodi n ar divisor hoy toh d[n]%d[m]==0 o hote hobe).
noraml seive dia ber korlye hoy.
*/

//# Odd Numbers of Divisors
/*
Given a positive odd integer K and two positive integers low and high,
determine how many integers between low and high contain exactly K divisors.
high<=1e10
so normalyy jabe n
1) kon number ar divisor odd hoy = jara squer number hoy
2) toh amra pari 1 - 1e5 porjonto sobar prime fact ber korty
** sqrt(n) ar PF jodi = p^2e ,p^3e hoy then n ar PF hobe = (p^2e ,p^3e)^2 so amne amra 
   square number gular divisor ber korty pari. Then 2d vector a x number of divisor kon kon
   number store kore rakhty pari.
tarpor o jodi low high te bruet force calai TLE asbe sob Upper_bound Lower Bound clabo.
*/

//# Divisors of factorial 
/*
akta factorial a koyta divisor ache. math.cpp
*/
//#Digits of Factorial
/* you have to find the number of digit(s) of the factorial of an integer in a certain base.
  amra jani j kono base digit log base(n) ber kora jay.
  factorial ar jonno o jani.
  but j kono base nai c++ a
  sol -
            logb(x) == b^k = x
            log10(x) == 10^k- = x
            log10(b) == 10^k-- = b
            b^k = 10^(k--*k) = x
            then,
            10^k- = 10^(k--*k)
            k- = k--*k
            k = k-\k--
            k = (log10(x))/log10(b);
            logb(x) = (log10(x))/log10(b);
  but ate TLE ase so amra dakhtychi j log10(b) sobsomoy comon so
  pre calculate kore nity pari log10(i);
*/
const int N = 1e6 + 9;
double pfx[N + 1];// log10[i] sum
void Log_sum(){
    pfx[1] = log10(1);//log 0 possible na
    for (int i = 2; i < N;i++){
        pfx[i] = pfx[i - 1] + log10(i);
    }
}
int Digit_Count(int test){
    int n,base;
    cin>>n>>base;
    double digit = 0;
    // for (int i = 2; i <= n;i++){
    //     digit += (log10(i)/log10(base));
    // }
    double sum_of_log = pfx[n];
    digit = sum_of_log / log10(base);
    int ans = (int)floor(digit);
    cout <<"Case "<<test<<": "<< ans+1 << "\n";
    return 0;
}
int Rehan(){
    
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }
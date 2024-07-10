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

//----------***---------
//## Divisibility of 2 or 5 --> just concept
/* onek boro akta number 10^10000 ba amon sta 2 dia vag jaykina 
   0,2,4,6,8,10,12-- so jader ses digit 2 dia divisible tara 2 dia divisable
   5 o same 0,5
*/
//## Divisibility of 3 or 9 -->
/*
  fact - kono number ar digit sum 3 dia vag jaile oi number tao 3 dhara divisable
  15 = 1 + 4 = 6%3==0 why??
  153 here,amra lakhte pari 153%3 or ((1*10^2)+(5*10^1)+3)%3 or 1%3 * 10^2%/3
  here 10%3==1 that why 1*1 + 5 + 3 .
  so, j sob numer ar reminder 10%x = 1hoy tara sumar solution e.
  jamon 9 
  asob 10 base number ar jonno.
*/
//##Divisibility 4 
/*kono number ar last 2 digit 4 dia divisiable hoile oi number ta vag jabe.
karon ager moto dakhly amra pai j 4 10^2 ar boro joto 10 power ache sobgulay vag jay
jar jonno last 2 ta digit check korlye hoy
*/

// #Divisibility of 6
/*
akhane prime fact ar kotha cinta kora lagbe jamon 2*3
oi number ta 2 dhara vag and 3 dhara vag jay kina 2 ta aksathe dakha lagbe
*/

//#Divisibility of 11
/*
atar jonno 10%11 kore = -1 paowa jay 100%11=(-1)^2 = ata abar 1 so
prothom ta + then - ,+- amon hobe!
*/

//# onek boro akta number divisibl kina 10^100000000 amon
/*
normally string nebo then akta akta number ar modulo sum kore abar modulo korbo.
*/
void Big_modulo(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < s.size();i++){
        ans = (((ans * 1LL * 10) % n) + (s[i] - '0')) % n;
    }
    // akane boro number tar first number ta amra 10*num kore mod korchi then oita dia ja ber hoice
    // otare porer number dia sum kore abar mod korchi
    if(ans==0){
        cout << "s is divisible by n";
    }
    else{
        cout << "rehan";
    }
}
//## k consicutive divisivility 
/* ata just akta problem akta array banate hobe jar sob subarray ar sum must subarray
length ar sathe divisibal hobe

sol : akta array jodi consicutive hoy then ata condition mane 
karon jodi dhori 2 3 4 5 6 7 8 9 amra joddi 1-3 sub array nei then dakhi j akta number must thakbe
jeta oi length ar divisible.
*/

//# divisible by all
/*
    --> l theke r ar moddy koyta number a,b dia vag jay
    seta check korty hole lcm(a,b) dia koyta number vag jay
    karon lcm mane sobcyay choto number jeta dia 2 ta number e vag jay 
    2 ar basio number same vabe kaj kore.   
*/

// ## Pair sum and Divisibility
/*  2 ta problem dia pair sum concept dakhaiche
    1) akta problem a array of n koto gula pair ache jara k a dia divisible ->
    mod kore amra pichone koyta ache sum kore galye hoy.
    2) SAME problem akhane positive and negative number thakbe toh koto gula subarray ache jader sum
    k dia divisible hobe. pfx re mod kore kora jay pichone koto gula mod ache.
    ** negative number dia positive mod = (n + (i % n)) % n; ai formula use korbo.
*/

//## Hating Divisible Pair
/* mainly at akta problem - Subset with no pair sum divisible by K
sol holo age mod kore nity pari then dakhbo max(x,k-x); x nile k-x nibo na.
0 ar k/2 ar jonno akta kore nibo.
*/
//#Legendre’s formula
/*
n! re p ar max koto power dia vag kora jay.max koto power(p = prime)
find the largest x that divide n! or (n!%(p^x))==0
n!= 1*2*3*4*---*n -> amar dakha lagbe n! ar moddy p ar factor koyta.
setar jonno 1 - n ar moddy p ar multiple kota then p^2 then p^3 --- (p^x<=n).
1 2 3 4 hoy and p = 2. then 2 ache 2 bar 2^2 ache 1 bar so total = 3 bar, 2^3 hobe.
4!= 24 ar 2^3=8 jeta vag jay.
ber korar jonno following code - :
*/
void legendre(int n,int p){
    int ans = 0;
    while(n){
        //akane uporer procedure ta simple kora hoice. valo karon overflow possible na.
        // amader vag kore kore dakha lagto j p koybar ache p^x koybar achhe --
        // ans += (n/p) then abar n/=p korar por amra pabo n/p/p that is = n/p^2 then n/p^3
        /*basic vabyeo kora jay sekhane n = 1e18 hoily over flow hobe*/
        ans += n / p;
        n /= p;
    }
    cout << ans << "\n";
}
//#Legendre’s formula (k = is not prime)
/*  same vabe e try korbo ,1st k ar prime fact ber kobo = p^y * p1^y1 --- amon asbe then
    then sob p ar jonno legendre(int n,int p) function calabo == x1,x2,x3 asbe then amader p^y 
    chilo amader lagbe p^y ar power so = x /=y flor then sob x ar moddy minimum ta amader answer. 
    <ami aktu clear na exactly kivabe kaj kortyche>
*/

//# trailing zeroes in (factorial of a number) onno number a atar moto concept use kora jaity pare
/*kono number a trailing 0 tokhon e thakbe jokhon 2 and 5 prime aksthe thkbe min(2^pow,5^pow)
n! ar jonno legendre(int n,int p) ata use korlye hobe. ar n! ar jonno 5 ta ber korlye hoy karon
5 min thakbe must.
*/
//# Divisor of a Factorial
/*
n! = 1*2*3*---*n protita number ar prime fact kore sum kore debo then all divisor formula
div = (power+1)*(power1+1)---;
ata legendre formula diao kora jabe same time conplexity = O(n*logn);
*/
//# Number of odd divisor 
/*
 amra n thke 2 ar power remove korlye hoy,karon 2 only even divisor.
*/

//##Goldbachs Conjecture
/* jkono even numer re 2 ta peime ar sum akare present kora jay. atar kono prof nai tai ata conjecture
   amra jodi code a dakhi then pry sob number e follow kore(even and odd) but some odd number are not
   follow this conjecture.
   akhan theke 2 ta problem idea as-->
   1) For all even integers x from 4 to 10^5,find any two primes such that their sum is x.
   Solve it in less than 1s1s1s.
   call -> goldbachs()
   ata n^2 dakhalyo o(n(logn)) a kaj kore karon observation a 200 ar moddy e paoa jay.

   2)For all odd integers x from 4 to 10^5,find any three primes such that their sum is x. Solve it in less than 1s.
   atar idea conjecture ta valo kore dakhlye hoy
   -->question : n re minimum koyta prime ar sum a present kora jay
     i) if n==prime then ans = 1;
     ii) if n==even then ans = 2 (Goldbachs Conjecture).
     iii) if n = odd then
                suppos = 11 so
                all possible is
                2 + 9 = 11
                3 + 8 = 11
                4 + 7 = 11
                amon hobe, akhon jodi left a odd hoy then rigt a must even so 2ta number kokhonoi prime possible na.
                except left a 2 thakle 2 amon akta prime jeta even
                so, ans is
                if((n-2)==is_prime) then 2;
                else = 3;
*/
bool goldbach(){
    for (int i = 2; i < n;i++){
        // spf age ber kora lagbe then ata use korbo(smallest prime)
        // spf[i] = i many ata prime 
        if(sfp[i]==i and spf[n-i]==(n-i)){
            return true;
        }
    }
    return false;
}
// # count Digit of a number
/* amra log(n)+1 dia ber korty pari 10 base log
jodi bole n! ar digit then
        double digit = 0;// log ar return type double 
        for (int i = 2; i <= n; i++)
                digits += log10(i);//  log(ab)=log(a)+log(b)
                // log(i) akahne floor deoa jabena karon value thik thak asbena
        return floor(digits) + 1;

** log -->
c++ a built in 3 ta log ache = loge(x),log2(x),log10(x)
log10(x) = k means 10^k = x so 10 ar koto power a x hoy
*/

//#Big GCD
/*--> problem -Read two integers a and b and Find the GCD of those integers where 
    a<=10^10000000 and b<=10^9.
    kichu concept
    a>=b
    eureka - a%b kora jabe Big_modulo Use kore.
    1) gcd(a,b) = gcd(a%b,b) ata dia boro number sohojye gcd ber kora jay.
    2) gcd(a,b) = gcd(a-b,b)
*/
//##GCD and story of fool
/*
question - akata array dia max subset/subsequence nity hobe jader gcd = 1
sol = kono akta pair ar gcd 1 hole sob 1 so, amra full array gcd nebo thne 1 hole ans n
noily = impossible.
*/
//# sum of power trick
/*
   k^0 + k^1 + k^2 + ---- +k^n < k^n+1 (k>2)
   Q - n k minimum k ar power ar sum a present koro
   n = 10 and k = 2;
   toh n ar niche boro power ta nebo = 2^3 = 8;
   n -= 8;
   thne same kaj abar that is 2^1 = 2

   ** j kono k and n ar jonno hobe
*/
int Rehan() {
    //Big_modulo();
    legendre(4, 2); // ans = 3;
    return 0;
}
//--------------28--------------//
int main() {
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--){
        Rehan();
    }
	return 0;
 }
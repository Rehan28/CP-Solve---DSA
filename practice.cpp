#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define nl cout<<"\n";
ll mod = 1e9 + 7;

void NOD(){
    //Number of devisor
    // O(squrt());
    /* Prime factorization dia ber kora jay! jamon 
    12 ar prime fact = 2^2 * 3^1 then NOD = 3*2 = 6 ta
    */
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i * i <= n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i*i!=n){
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << "Number of devisor : " << v.size() << "\n";
    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
    // With Prime Fact
    //NodWithPrimeFact();
}
#How to find the number of integers under n that has an odd number of divisors?
void NofOddDevisorUnderN(){
    /*Ovsarvation dakho j kokhon odd number of devisor asbe 
    12 ar jonno 
    2 * 6
    3 * 4
    amon jokhon ara same hobe tokhon ar jora asbena 
    jamon 16 
    2 * 8
    4 * 4 akhane akta count hobe 
    */
    int n;
    int x = sqrt(n);
    if (x*x==n)
    {
        //odd number of devisor
    }
}

void EuclidLemma(){
    // formula 
    // if(a*b/p) then a/p or b/p must if p is prim
    // 14*2/7 then 14/7 is true
}
void FandamentalTheoremOfArithmatic(){//unique factorization
    /*integer greater than 1 can be represented uniquely as a 
     product of prime numbers*/
}
// 1 is unit number
bool isPrime()
{
    int n;
    cin >> n;
    for (int i = 2; i * i <= n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
#Smallest prime of a number --> SPF.
First divisor is smallest prime because if that is not prime then there 
is a previous prime devisor

#Prime Factor or skeleton View of Number
void PrimeFactor(){
    int n;
    cin >> n;
    // akhane amra akta number ar SPF ber kore then oi Number ta bad dia dichi 
    // then abar new number ar sqrt porjonto try korchi
    vector<int> v;
    for (int i = 2; i * i <= n;i++){
        if(n%i==0){
            while (n%i==0){
                v.push_back(i);
                n = n / i;
            }
            
        }
    }
    sort(v.begin(), v.end());
    if(n>1)
        v.push_back(n);
    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
}
#n^2+n+41 ai equation dia 0 to 39 n bosale sob prime paoa jay --

#NOD With Prime FacTor
void NodWithPrimeFact(){
    //Ata tamon dorkar nai, But NT ty sob Prime factor Dia cinta kora uchid.
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v;
    for (int i = 2; i * i <= n;i++){
        while(n%i==0){
            v.push_back(i);
            mp[i]++;
            n = n/i;
        }
    }
    int ans = 1;
    if(n>1){
        v.push_back(n);
        mp[n]++;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size();i++){
        if(i==0){
            ans *= (mp[v[i]] + 1);
        }
        else{
            if(v[i]!=v[i-1]){
                ans *= (mp[v[i]] + 1);
            }
        }
    }
    cout << ans << "\n";
}
#--> prime p^2 ar devisor = 3
amra ulta o dakhte pari evabe j 4 ta devisor ar number khujty bolle
amra p^3 or p*q two prime number then  ivabe cobination dia amra number gula khujte pari


#n ar moddy koto gula devisor thakte pare hisbar jonno cubic root of n 


#------#Sieve-----

/*However, for the simple implementations of the 
Sieve of Eratosthenes using a vector<bool> is faster.
**vector<char> is about 3x faster in this situation than using a vector<bool>
FOR USE :: odd,sqrt, optimiztion and char…..segment sieve use kori nai!*/


#method to find prime number under n
bool f[100000000];
void Sieve(){
    //basic Sieve 1e7 porjonto 1s a kaj kore -->O(nlogn)
    auto st = clock();
    int n = 1e7;
    int numberOfprime = 0;
    vector<int> prime;
    for (int i = 2; i <= n;i++){
        if(!f[i]){
            numberOfprime++;
            //cout << i << " ";
            prime.push_back(i);
            for (int j = i + i; j <= n;j = j+i){
                f[j] = true;
            }
        }
    }
    cout << numberOfprime << "\n";
    cout << 1.0 * (clock() - st) / CLOCKS_PER_SEC << "\n";//execution Time print korar jonno
}
#aro optimez sieve 
atar time coplexity proof onek hard ,O(blogn) proof kora jay easyly
harmonic series follow kore jamon n(1+1/2+1/3+1/4---)
atare amra n(1 + 1/2 + 1/2 + 1/4 + 1/4 + 1/4 +1/4 --- ) aro boro kore series banate pari
then 1 + 2ta the 1 + then 4 ta thene 1 + then 8 ta theke 1 emne logn a solution ase
void Osieve(){
    int n = 1e8;
    // O(nloglogn)
    //   ---> space complexity : O(n/64)
    vector<int> prime;
    for (int i = 2; i*i <= n;i++){ //sqrt porjonto galye all composite number paia jai amra
    // atar jonno pore abar alada kore prime ber korte hobe
        if(!f[i]){
            for (int j = i * i; j <= n;j = j+i){//i*i korte pari karon i+i ta laready tar ager
            // prime a mark kore dice
                f[j] = true;
            }
        }
    }
}
#YouKnowWho ar seive --
const int N = 2e7 + 9;
bitset<N> is_prime;
void Best_sieve() {
  is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i * i < N; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j < N; j += i) {//i+i chilo
        is_prime[j] = false;
      }
    }
  }
}
#Divisor Count for integers from 1 to N using sieve

normally korle O(nsqrt(n)) lagbe
basic seive dia korbo,jkhon bad ditechi tokhon oder count kore jabo 

int d[101];
void NODofN(){
    int n = 100;
    // amra jodi kono arrray function ar modde declar kori then ata te random value initial hoy
    // Global declar korle 0 initial hoy
    for (int i = 1; i <= n;i++){
        // amra protita number er multiple gulay gaci then sei number ar divisor count baraichi
        // Easy Thinking
        // time complexity --> O(nloglog(n))
        for (int j = i; j <= n; j = j + i){
            d[j]++;
        }
    }
    for (int i = 1; i<= n;i++)
    {
        cout << d[i] << " ";
    }
    // divisor ar sum ber korte hole just sum += d[i]
}

#Prime Factorization using Sieve
bool ft[101];
void PrimeFactUsingS_My(){
    // ata ami banailam but atay akta problem ache
    // prime factorial ar akta kore number paoa jabe 
    // 8 ar prime fact holo 2*2*2 but ai code a pabo just 2
    int n = 100;
    vector<int> v[n+1];
    for (int i = 2; i <= n;i++){
        if(ft[i]==false){
            for (int j = i; j <= n;j+=i){
                v[j].push_back(i);
                ft[j] = true;
            }
        }
    }
    for (int i = 2; i<= n;i++){
        cout << "Prime Fact Of " << i << ": " ;
        for (int j = 0; j < v[i].size();j++){
            cout << v[i][j] << " ";
        }
        nl;
    }
}
void PrimeFactUsingS_YouKnow(){
    int n = 100;
    int spf[101];
    for (int i = 2; i <= n;i++){
        spf[i] = i;
    }
    for (int i = 2; i <= n;i++){
        for (int j = i; j <= n;j+=i){
            spf[j] = min(spf[j], i);
        }
    }
    int q;
    cin >> q;
    while (q--){
        int a;
        cin>> a;
        while (a>1){
            cout << spf[a] << " ";
            a /= spf[a];
        }
        
    }
    
}

#Prime Gap
https://en.wikipedia.org/wiki/Prime_gap
Akhane bakkha ache
Prime gap onek kom hoy --
ata --> O(log n^2)

#sqrt function int a r jonno ll ar jonno sqrtl use korte pari.
 onek somoy sqrt function vul dite pare 10 ar jaygay 9.99 dite pare star jonno
###  p = sqrt(n); while(p*p<)p++; while(p*p>)p--; kore safe thaka jay


##GCD and LCM :
largest positive integer that divides each of the integers.
__gcd(a,b) --> O(log(min(a,b)))
--> LCM = is the smallest positive integer that is divisible by both a and b.
why gcd(a,b)*lcm(a,b) = a*b?
amra jani protita number re prime dia represent kora jay jamon..
a = 2^3 * 5^3 * 7^2
b = 2^6 * 5^2 * 3^2
toh gcd hoilo maximum divisor - 2^3*5^2 or = p^min(a,b-power)*p^--
lcm hoilo minimum multiple mane sob divisor ar mul = 2^max(3,6)*3^(max(0,2))*7--*5
lcm*gcd = p^min(a,b)+max(a+b)---
==> p^a+b --2 ta number ar jonno
=> THAT  power is mul ==> lcm*gcd = a*b
so, lcm = (a*b)/gcd

##every rational number can be written uniquely as the
 product of primes, if negative exponents are allowed==1/2 or -1/5--
* 2 ta number ar modde koyta komon divisor?= Gcd ar divisor

* (a+b)%__gcd(a,b)==0 karon g a - ar divisor and b ar o.

//### Euclids Algorithm :
  akhane amra pai gcd(a,b)==gcd(a+b,b)==gcd(a-b,b)==gcd(a-2b,b)-- if a>b then
  tar mane a theke b - korle same thkatece but ata amra just mood dia lakhte pari
  gcd(a%b,b) if one is 0 then other is our gcd
        int gcd(int a,int b){
            if(a==0)return 0;
            if(b==0)return 0;
            if(b>a) swap(a,b);
            return (a%b,b);
        }
   **** amra c++ a gcd use kori otay binary gcd use kore, CP_algorithm a ache
   **Geometric proof ta easy minimum j box dia akta n*m box cover kora jay mod kore kore
   jabo


   **GCD(a,b) == 1 then co-prime
   common divisors of a and b are exactly the ---divisors of gcd(a,b);-->

int Rehan(){

    // NOD();
    // cout<<isPrime();
    // PrimeFactor();
    // NodWithPrimeFact();
    // Sieve();
    // NODofN();
     PrimeFactUsingS_My();
    //PrimeFactUsingS_YouKnow();
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--){
        Rehan();
    }
	return 0;
 }
 //ratio int a ber korar jonno ata use kora jay
 d and k ar ratio
        int x = __gcd(d, k);
        int dx = d / x;
        int kx = k / x;
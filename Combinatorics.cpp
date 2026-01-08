#Rull of product
/*For the first seat, we have a choice of any of the 6 friends. After seating the first person, for the 
second seat, we have a choice of any of the remaining 5 friends. After seating the second person, for the 
third seat, we have a choice of any of the remaining 4 friends. After seating the third person, for the 
fourth seat, we have a choice of any of the remaining 3 friends. After seating the fourth person, for the
 fifth seat, we have a choice of any of the remaining 2 friends. After seating the fifth person, for the 
 sixth seat, we have a choice of only 1 of the remaining friends. Hence, by the rule of product, there are
    6×5×4×3×2×1=720 ways to seat these 6 people. More generally, this problem is known as a permutation. */


#rull of Sum 

/*The rule of sum is a basic counting approach in combinatorics. A basicstatement of the rule is that if 
there are n choices for one action and m choices for another action, and the two actions cannot be done 
at the same time, then there are n+m ways to choose one of these actions.*/

#Double counting

#Permutation
//order matter kore
/*1 - n ar sob gula dia koto vabe sajano jay distinc that is n!
n! fact ekhan theke asche*/ 

--> Permutations of a Set of Distinct Objects
/*The number of permutations of a set of n distinct objects is n!*/

//60!, for example, is already larger than the number of atoms in the 
//observable universe.

-->Permutations of a Subset of Distinct Objects
//p(n,r) = n!/(n-r)! -- jodi dis Thake

/* n number k r possition a bosanor method k permutation bole ata normally 
n*(n-1)*(n-2)...1 but position kom hole P(n,r) = n!/(n-r)! -- jodi dis Thake
But 1--> 2 ta ache 
*/

--> Permutations with Repetition
/* n!/ repet1!*repet2!.. */

-->Permutations with Restrictions
/*n!/(r1!*r2!..)*/
/*Lisa has 4 different dog ornaments and 6 different cat ornaments that she wants to place on her mantle. 
All of the dog ornaments should be consecutive and the cat ornaments should also be consecutive. 
How many ways can they be arranged?We have to decide if we want to place the dog ornaments first, or the 
cat ornaments first, which gives us 2 possibilities. We can arrange the cat ornaments in6! ways and the dog ornaments 
in 4! ways. Hence, by the rule of product, there are 2×6!×4!=34560 ways to arrange the ornaments.*/
//https://brilliant.org/wiki/permutations/

#combination
//order does not matter.
/*n number ache ani ask kortechi koyvabe 3 jonre ana jay
position metter kore na, 10 jon ache tader theke 3 jon nite cai koy vabe neoa jabe

nck = n!/(k! *(n-k)! 

magine you have n distinct objects, and you want to choose k of them. Let's consider one specific object among these n, say X.

Now, there are two possibilities:

X is chosen → Since X is included in the selection, we now need to choose the remaining k-1 elements from
 the remaining n-1 elements. The number of ways to do this is C(n-1, k-1).
X is not chosen → Since X is excluded, we must choose all k elements from the remaining n-1 elements. 
The number of ways to do this is C(n-1, k).

Bionomial Co-effeciant bole

--> n lenght ar koyta binary sequence ache jekahne exactly k ta 1 ache 
/nCK  n ta theke k ta 

*/

# star and bar

//position gulake * dia and + gula k bar dia separate kora
(n+k-1)C(k-1) = (n+k-1)!/n!*(k-1)!
nci = nci-1

//garbeg partition 
//n ta object ache jeta koyta group a divide kora jabe
a1+a2+a3<=n kivabe hobe just akta k+1 ta nia kaj korlye hobe


#Combinations with Repetitions



#Grid Walking

#code 
// code of nCr and nPr

const int N = 1e6+5;
const int mod = 1e9+7;

int fact[N];
int invfact[N];

int power(long long n, long long k) {//modular exponentiation inverse modulo
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

void invfactCal(){
    invfact[N-1] = power(fact[N-1],mod-2);//atar jonno nlogn theke n hoy.
    for(int i=N-2;i>=0;i--){
        invfact[i] = (invfact[i + 1] * (i + 1)) % mod; // 1/(n-r)! = r * 1/r!;
    }
}

void factCal(){
    for(int i=0;i<N;i++){
        if(i==0) fact[i]=1;
        else fact[i] = (fact[i-1]*i)%mod;
    }
}

int nCr(int n,int r){
    if(n<r or n<0) return 0;
    return (1LL * fact[n] * invfact[r] % mod * invfact[n - r]) % mod;
}

int nPr(int n,int r){
    if(n<r or n<0) return 0;
    return (1LL * fact[n] * invfact[n - r]) % mod;
}

void solve(int test) {
    factCal();
    invfactCal();
    cout<<nCr(6,2)<<nl;
    cout<<nPr(6,2)<<nl;
}

#Pascals Triangle



// p(n,k) = p(n-1,k-1) + p(n-1,k);

//atai bionomial coeffeciant

//p(n,k)= nCk

//Row ar sum = 2^n

#include<bits/stdc++.h>
using namespace std;

const int N = 1010, mod = 1e9 + 7;
int C[N][N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  C[0][0] = 1;
  for (int n = 1; n < N; n++) {
    C[n][0] = 1;
    for (int k = 1; k <= n; k++) {
      C[n][k] = (C[n - 1][k - 1] + C[n - 1][k]) % mod;
    }
  }
  cout << C[6][2] << '\n';
  return 0;
}
//all combination 
// uporer ta o temni
const int N = 62;
int c[N][N];//combination

void pre(){
  c[0][0] = 1;
  for (int i = 1; i < N;i++){
    c[i][0] = c[i][i] = 1;
    for (int j = 1; j < N;j++){
      c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
  }
}
 
#Binomial Theorem

#Sum of Product of all Subsequences
//(ai+1)(ai+1) - 1

#Compositions of an Integer
// sumation of 0 to n-1 --> n-1Ci = 2^n-1 

#Partitions of an Integer
//koto vabe show kora jay jokhon sorted

#Bicoloring a Graph
//biparted graph a 2 vabe color kora jay


#Derangement permutation

ধরো, তোমার কাছে কিছু জিনিস আছে, যেগুলোকে তুমি নতুন করে সাজাবে। কিন্তু শর্ত হলো – কোনো জিনিস তার আগের জায়গায় থাকতে পারবে না।
ধরো, 3টা সংখ্যা আছে: 1, 2, 3
মোট পারমিউটেশন হবে 
3
!
=
6
3!=6

সবগুলো পারমিউটেশন:

123 ❌ (সব জায়গায় ঠিক আগের মতো আছে → derangement না)

132 ❌ (1 আগের জায়গায় আছে → derangement না)

213 ✅ (কোনো সংখ্যা তার আগের জায়গায় নেই → derangement)

231 ✅ (কোনো সংখ্যা তার আগের জায়গায় নেই → derangement)

312 ✅ (কোনো সংখ্যা তার আগের জায়গায় নেই → derangement)

321 ❌ (3 আগের জায়গায় আছে → derangement না)

!n=n!(0!1​−1!1​+2!1​−3!1​+⋯+n!(−1)n​) = formula

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) fact *= i;
    return fact;
}

long long derangement(int n) {
    long long fact = factorial(n);
    double sum = 0;
    for(int k = 0; k <= n; k++) {
        sum += (pow(-1, k) / factorial(k));
    }
    return round(fact * sum); // round করা লাগবে decimal error ঠিক করতে
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Derangement of " << n << " = " << derangement(n) << endl;
    return 0;
}

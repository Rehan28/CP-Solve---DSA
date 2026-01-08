
##Codeforces Round 930(Div .2) - C
/*
This is an interactive problem.
akta permutation of n deoa thakbe (0 to n-1) 3n  query korty parbo per queryte 4 ta value nibe
a,b,c,d response kobe (a or b) and (c or d) ar moddy konta boro coto ba soman.
"<" if (a∣b)<(c∣d)
"=" if (a∣b)=(c∣d)
">" if (a∣b)>(c∣d)
then ber korty hobe kon 2 ta number ar xor maximum.
observation -
 0 to n ar modde max xor ki possible ? = n ar total bit jodi 1 hoy then
 so find kora lagbe boro number ta then dakhty hobe kon number ar sathe or korle sob bit gula
 set hoy kintu set onek gula hobe tar modde minimum ta nebo.
 Ex : 0,1,2,3,4,5,6,7,8,9 akhane bolo 9 then 1001 amar set korte hole maje 2 bit set kora lagbe
 akhon dakhbo 9 ar sathe k k or korly set hoy
 6 and 7
 1001 or 0111 = 1111 but 1001 xor 0111 = 1110
 1001 or 0110 = 1111 and 1001 xor 0110 = 1111
 ai sob possible gula vector a rakhbo then sob cyay choto ta nebo jader or maximum hoy.karon xhoto
 tay same 1 1 pawer posibility kom. a ketre jodi n nijye 111 set hoy taily sobar sathe or e set
 to 0 ar satheo then 0 e ans a dukbe.

 Xor ar akta properrti -->
 full set bit thake jodi T te then T=2^k
 then ,
 T xor T-1 = max = 8 xor 7
 T+1 xor T-1 = max
 ...

 1) problem valo kore observe kora lagbe.
 2) function use kora valo.
 3) Thik Thak cinta kora dorkar.


*/
#Codeforces Round 919 (Div. 2) - 1600
/*
divisor type problem
jodi a mod m = b mod m then abs(a-b) = km mane amra amon number pabo jader mod same hobe.
*/

#Codeforces Round 691(Div .2)
/*Gcd ar common akta use nia problem ta
gcd(a,b)==gcd(a,(a-b))
gcd(a,b,c)==gcd(a,(a-b),c)==gcd((a-b),a,c)==gcd(a,(a-b),(a-c))
nothig but gcd(a[0],all(a[0]-a[i]));
*/
#Codeforces Round 928(Div .4)(D)
    /*
    bit ar problem.
    kono akta valure tar cyay boro 2 ar power - 1 dia xor korle ulta bit paoa jay
    int x = (1<<3)-1 = 7;
    jodi (4 xor x) kori = 100 ^ 111 then pabo = 011 ja ulta ai concept ta use korece.
    */
https: // codeforces.com/problemset/problem/1614/C
    // sum of all sub sequence is = total sum * 2^n-1(per elemenent 2^n-1 time asbe)
    // sum of all sub_sequence xor = (bitwise or of array ) * 2^n-1;
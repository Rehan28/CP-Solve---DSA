#Dice Combinations
/*
1-6 dice dia koy vabe n banano possible
amra (1-6) nia kaj korte pari
fn(n-1) then fn(n-2)... amne
0 hole return = 1 karon that means n hoia agche akvabe
n<0 hole toh possible na = 0

itretive mathod o onek easy
*/

#Hex-a-bonacci 
/*atay akta problem recursion a kora ache dp te kora lagbe simple*/

#Frog 1
/*Basic DP 
 ** int &ans = dp[i] 
 amne korle ans change hole dp[i] o change hobe ata use kora jay
 basi state jokhon asbe tokhon help hoy.

 itretive mathod o easy
 2 vabe kora jay suru theke ses then ses theke suru
*/

#Frog 2 
/*same problem aktu alada
 itretive mathod ta o valo
*/

#Removing Digits
/*You are given an integer 
n. On each step, you may subtract one of the digits from the number.
How many steps are required to make the number equal to 0 
--> Easy

itretive mathod kora jay
?*/

#Vacation
/*
need some codition 

iterative tao kora jay code simplify korle valo hoy

*/

#Knapsack 1
/*clasic knapsack -
    2 ta state basic nebo ba nebona nebo jokhon W ar cyay current weight kom 
    dp state dp[n][weight] weight karon onek type weight hote pare kamne aschi ta janina
    tar jonno different route hole sum or weight different hobe taile boja jabe state same kina
    iterative o kora jay ota tamon akta valo buji nai

    abar thik tahak moto iterative ta kora uchid.

*/
#Coin Change (I)
/* 
onek ta knapsack ar moto 
mod ta dakhbi thik thak
ans %= mod === if(ans>=mod){ ans -= mod }

iterative korachi

*/

#Knapsack 2
/*
    constrain valo kore dakha uchid
    weight use na kore value use kore knapsack kora jay 
*/

#Edit Distance
/*CSES ar problem dp j lagbe and kamne lagbe ata bojha important 
    sob valo kore pora uchid
*/

#Neighbor House 
/*
privious akta problem ar moto
*/
#Neighbor House (II) 
/*
    circular array nia aktu kaj kora lage
*/

#Divisible Group Sums
/*good problem NT ty Dp ar use question ar sob dakha uchid*/

#Longest Path
/* DP on graph type 
Graph ar longest path ta ber korte bolce

*/

#Grid Paths
/*akta grid 11 theke nn a koy vabe jaoa jay maje kichu badha ache 

*/
#LCS 
//least common subsequence ata ber kore then print function use kore print kora jay
#An Easy LCS
/*almost same problem 
akhane sudu lexicographical smallest LCS  korte bolce tar jonno 
function a e string return kore compare korte hobe
*/
#Independent Set
/*Dp on tree ar problem just dfs calaia chile noder valu amra current a nite pari

    void dfs(int u,int p){
        for(auto v : g[u]){
            if(v!=p){
                dfs(v,u);
                dp[u] = dp[v];
                // akhnae amra dp kore kaj korte pari
            }
        }
    }

*/
//
#Coins 
/*all possible korle e hoy but 3ta state nile memore complexity hobe thats why optimized kora jay
*/
#Batman
/*LCS ar motoe just 3 ta string
    int x = max({a,b,c,d});amne kora jay
    itrative a korchi
*/

#Longest Palindrome
/* palindgrom of subseuence
    onek somoy input a faka line o thakte pare tai
    cin.ignore() use kore then getline(cin,s);
    nity hobe.

    *itaretive ta o kora hoiche
*/
#Coin Combinations I 
/*
valo problem
hudai state kora jabena
itrative o korchi

*/
#Deque
/*2 ta person ar dp te kaj korbe

2 ta function niao kaj kora jay

    function protype nia jana jabe
    mane niche kono function call korle upore prototype dite hobe
    *******ex = int second_fun(int,int);

*/

#Candies
/*optimization kora lagbe
    prefixsum and mod aktu valo kore kora lagbe
    ans += mod;
    ans %= mod;
    kora valo noile -1 aste pare
*/

#Slimes 
/*  ulta vabe cinta kore try korte paro */
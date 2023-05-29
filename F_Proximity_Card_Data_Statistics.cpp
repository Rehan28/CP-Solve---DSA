
#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
//Muku28

int main()
{
  int t;
  cin>>t;
  string s1[t],s2[t],s3[t],s4[t];
  map<string,int> mail;
  map<int,int> year;
  map<string,int> year1;
  map<string,int> blood;
  map<string,string> blood1;
  int maxy = 0;
  int miny = 2024;
  for(int i=0;i<t;i++)
  {
    cin>>s1[i]>>s2[i]>>s3[i]>>s4[i];
    //On time
    // day
    bool time = true;
    string s11=s1[i];
    string s;
    s += s11[0];
    s +=  s11[1];
    int x = stoi(s);
    int day = x;
    if(x>5)
    {
        time = false;
    }
    s.clear();
    // month
    s += s11[3];
    s += s11[4];
    x = stoi(s);
    int month = x;
    if(x>2 or x<2)
    {
        time = false;
    }
    s.clear();
    //year
    s += s11[6];
    s += s11[7];
    s += s11[8];
    s += s11[9];
    x = stoi(s);
    int year2 = x;
    if(x>2023 or x<2023)
    {
        time = false;
    }
    s.clear();

   if(day==31 and month==1 and year2==2023)
    {
        int time1 = 24 * 60 * 60;
        int time2 = 0;
        //hour
        s += s11[11];
        s += s11[12];
        x = stoi(s);
        time2 += x * 60 * 60;
        s.clear();
        // min
        s += s11[14];
        s += s11[15];
        x = stoi(s);
        time2 += x * 60;
        s.clear();

        s += s11[17];
        s += s11[18];
        x = stoi(s);
        time2 += x;
        s.clear();
        //cout<<time2<<"\n";
        if(time2==time1)
        {
            time = true;
        }
    }
    else if(day==5 and month==2 and year2==2023)
    {
        int time1 = 24 * 60 * 60;
        int time2 = 0;
        //hour
        s += s11[11];
        s += s11[12];
        x = stoi(s);
        time2 += x * 60 * 60;
        s.clear();
        // min
        s += s11[14];
        s += s11[15];
        x = stoi(s);
        time2 += x * 60;
        s.clear();

        s += s11[17];
        s += s11[18];
        x = stoi(s);
        time2 += x;
        s.clear();
        //cout<<time2<<"\n";
        if(time2==time1)
        {
            time = false;
        }
    }
    
    if(time)
    {
        s11 = s3[i];
        s += s11[6];
        s += s11[7];
        s += s11[8];
        s += s11[9];
        x = stoi(s);
        s.clear();
        //cout<<x<<"\n";
       if(mail[s2[i]]==0)
       {
            year[x]++;
            year1[s2[i]] = x;
            maxy = max(maxy,x);
            miny = min(miny,x);
            blood[s4[i]]++;
            blood1[s2[i]] = s4[i];
       }
       else
       {
        int yy = year1[s2[i]];
        year[yy]--;
        year[x]++;
        string bb = blood1[s2[i]];
        blood[bb]--;
        blood[s4[i]]++;

       }
       mail[s2[i]]++;
    }
   // cout<<x<<"\n";
  }
  string ss = "A+";
  cout<<"A+ "<<blood[ss]<<"\n";
  ss = "A-";
  cout<<"A- "<<blood[ss]<<"\n";
  ss = "AB+";
  cout<<"AB+ "<<blood[ss]<<"\n";
  ss = "AB-";
  cout<<"AB- "<<blood[ss]<<"\n";
   ss = "B+";
  cout<<"B+ "<<blood[ss]<<"\n";
  ss = "B-";
  cout<<"B- "<<blood[ss]<<"\n";
  ss = "O+";
  cout<<"O+ "<<blood[ss]<<"\n";
   ss = "O-";
  cout<<"O- "<<blood[ss]<<"\n";

    for(int i=miny;i<=maxy;i++)
    {
        if(year[i]!=0)
        {
            cout<<i<<" "<<year[i]<<"\n";
        }
    }

  return 0;
 }


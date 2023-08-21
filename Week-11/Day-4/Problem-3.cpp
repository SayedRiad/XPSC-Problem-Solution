
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1042

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ban_num(ll m){
    if(m>9999999){
        printf(" %lld kuti",m/10000000);
        m %= 10000000;
    }
    if(m>99999){
        printf(" %lld lakh",m/100000);
        m %= 100000;
    }
    if(m>999){
        printf(" %lld hajar",m/1000);
        m %= 1000;
    }
    if(m>99){
        printf(" %lld shata",m/100);
        m %= 100;
    }
    if(m<100 && m>0){
        printf(" %lld",m);
    }
}

int main(){
    ll n;
    int i=0;
    while(scanf("%lld",&n)!=EOF){
        printf("%4d.",++i);
        if(n == 0){
            printf(" 0\n");
            continue;
        }
        if(n>9999999){
            ban_num(n/10000000);
            printf(" kuti");
            n %= 10000000;
        }
        ban_num(n);
        printf("\n");
    }
    return 0;
}

//https://lightoj.com/problem/hex-a-bonacci

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    long long t,n;          cin >> t;

    for (int j=1;j<=t;j++) {
        ll hexafib[10009];

        cin >> hexafib[0]>>hexafib[1]>>hexafib[2]>>hexafib[3]>>hexafib[4]>>hexafib[5]>>n;

        for (int i=6;i<=n;i++) {
            hexafib[i] = (hexafib[i-1]+hexafib[i-2]+hexafib[i-3]+hexafib[i-4]+hexafib[i-5]+hexafib[i-6])%10000007;
        }
        
        cout << "Case " << j << ": " << hexafib[n] % 10000007 << endl;
    }

    return 0;
}
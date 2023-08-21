
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=342

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool is_palindrome(string x){
    int n = x.size()-1;
    for(int i=0,j=n;i<j;i++,j--){
        if(x[i]!=x[j])
            return 0;
    }
    return 1;
}

bool is_mirror(string x){
    string y = x;
    int n = x.size()-1;
    for(int i=0;i<=n;i++){
        if(x[i]=='E')
            x[i] = '3';
        else if(x[i]=='J')
            x[i] = 'L';
        else if(x[i]=='L')
            x[i] = 'J';
        else if(x[i]=='S')
            x[i] = '2';
        else if(x[i]=='Z')
            x[i] = '5';
        else if(x[i]=='2')
            x[i] = 'S';
        else if(x[i]=='3')
            x[i] = 'E';
        else if(x[i]=='5')
            x[i] = 'Z';
        else if(x[i]=='A')
            x[i] = 'A';
        else if(x[i]=='H')
            x[i] = 'H';
        else if(x[i]=='I')
            x[i] = 'I';
        else if(x[i]=='M')
            x[i] = 'M';
        else if(x[i]=='O')
            x[i] = 'O';
        else if(x[i]=='T')
            x[i] = 'T';
        else if(x[i]=='U')
            x[i] = 'U';
        else if(x[i]=='V')
            x[i] = 'V';
        else if(x[i]=='X')
            x[i] = 'X';
        else if(x[i]=='Y')
            x[i] = 'Y';
        else if(x[i]=='1')
            x[i] = '1';
        else if(x[i]=='8')
            x[i] = '8';
        else return 0;
    }
    reverse(x.begin(),x.end());
    if(x==y)
        return 1;
    else
        return 0;
}

void solve(){
    string s;                  
    while(cin >> s){
        string s1 = s;
        int len = s.size()-1;
        for(int i=0;i<=len;i++){
            if(s[i]=='0') s[i] = 'O';
        }
        int res1 = is_palindrome(s);
        int res2 = is_mirror(s);

        if(res1==1 and res2==1){
            cout << s1 << " -- is a mirrored palindrome.\n\n";
        }

        else if(res1==1 and res2==0){
            cout << s1 << " -- is a regular palindrome.\n\n";
        }

        else if(res1==0 and res2==1){
            cout << s1 << " -- is a mirrored string.\n\n";
        }

        else{
            cout << s1 << " -- is not a palindrome.\n\n";
        }
    }
    
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
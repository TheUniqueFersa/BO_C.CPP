#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int a,b, charger, min=0;
    cin >> a;
    cin >> b;
    bool game = true;
    charger = (a<b)?1:2;
    while (game && a>0 && b>0){
        if((a > 2 && b<=2)){
            // charger = (charger == 1)? 2:1;
            charger = 2;
        }
            
        else if(b>2 && a<=2){
            // charger = (charger == 1)? 2:1;
            charger = 1;
        }
        // cout << a<<" "<<b<<'\n';
        if(game){
            if(charger==1){
                a++;
                b-=2;
            } else if(charger == 2){
                b++;
                a-=2;
            }
            min++;
        }
        if(a<=0 || b<=0)
            game = false;
    }
    cout << min << '\n';
    
}

int main() {
    fastIo();
    solve();
}
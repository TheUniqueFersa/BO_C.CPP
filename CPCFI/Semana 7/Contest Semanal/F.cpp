#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool esDecimal(float f){
    if(abs(f-int(f))>0) return true; 
	else return false; 
}
void solve() {
    int n;
    cin >> n;
    int r;
    float root;
    r = sqrt(n);
    root = sqrt(n);
    int l;
    if(esDecimal(root)){
        l = r+1;
    } else {
        l= r;
    }
    if(pow(l, 2)-n >= l){
        cout << l*4 -2;
    } else {
        cout << l*4;
    }
}

int main() {
    solve();
}
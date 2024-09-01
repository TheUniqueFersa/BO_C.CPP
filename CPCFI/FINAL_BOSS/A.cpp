#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef vector<int> veci;

void add_compHeight(veci & spaces, int col){
    spaces.push_back(col);
}
void solve() {
    int n, x, i, max_col=0, inc;
    cin >> n;//n columns of the coral
    cin >> x;//max amount of water
    veci a;
    a.assign(n, 0);
    
    for(i=0; i<n; i++){
        cin >> inc;
        if(inc>max_col)
            max_col = inc;
        a[i] = inc;
    }
    veci available_spaces, b = a;
    available_spaces.assign(max_col, 0);

    for(i=0; i<max_col; i++){
        for(int j=0; j<n; j++){
            if(a[j] == 0){
                available_spaces[i]++;
            }
            if(a[j]>0)
                a[j]--;
        }
    }
    i=0;
    int y=x, height;
    bool flag = true;
    while(flag){
        if(y-available_spaces[i] > 0){
            y-=available_spaces[i];
        } else flag = false;
        if(i==(available_spaces.size()-1) && y>0){
            add_compHeight(available_spaces, n);
            cout << available_spaces[i+1] << '\n';
        }
        cout << i << ", " << y << ", " << available_spaces[i] << " " << max_col << '\n';        
        if(flag)
            i++;
    }
    height = i+1;
    cout << height << '\n';

    //dep
    // for(auto each:available_spaces){
    //     cout << each << " ";
    // }
    // cout << '\n';

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}
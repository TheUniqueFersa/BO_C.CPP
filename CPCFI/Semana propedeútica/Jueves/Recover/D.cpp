#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int sum_v(vector<int>& v){
    int sum = 0;
    for(int i = 0; i<v.size(); i++){
        sum += v[i];
    }
    return sum;
}

void solve() {
    int n, i, j, inc, sum, n_dels=0;
    cin >> n;
    vector<int> v;

    for(i = 0; i<n; i++){
        cin >> inc;
        v.push_back(inc);
    }
    sort(v.begin(), v.end()); 
    bool flag = true;
    float del;
    i = 0; j=1;
    while(flag){
        // cout<< v.size() << " " << sum_v(v, v.size()) << ", " << v.size() << " " << v.begin() <<  " " << v.end();
        if((sum_v(v) > static_cast<int>(v.size())) && (v.front() != v.back())){
            sum=0;i = 0;
            while(i<=j){
                sum += v[i];
                i++;
            }
            del = round(float(sum)/(j+1));
            // cout << "Pruebas: " << del << '\n';
            if(del < v.back()){
                for(int k=0; k<v.size(); k++){
                    if(v[k]>del){
                        v.erase(v.begin() + k);
                        n_dels++;
                        k--;
                    }
                }
            } else {
                if(j>=v.size()){
                    flag = false;
                } else j++;
            }
        } else flag = false;
    }
    cout << n_dels << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}
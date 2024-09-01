#include <bits/stdc++.h>
using namespace std;


void prefixSum(int arr[],int n, int pf[]){
    pf[0] = arr[0];

    for(int i = 1; i < n; i++){
        pf[i] = pf[i-1]+arr[i];
    }
}

int rango(int pf[],int l, int r){
    if(l == 0){
        return pf[r];
    }
    return pf[r] - pf[l-1];
}


int main(){

    int a[] = {10, 5, 4, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int pf[n];

    prefixSum(a,n,pf);

    
    cout << "Arreglo normal: ";
    for(int i = 0; i < n; i++){
        cout << "[" << a[i] << "]" << " "; 
    }
    cout << endl;

    cout << "Prefix sum: ";
    for(int i = 0; i < n; i++){
        cout << "[" << pf[i] << "]" << " ";
    }

    cout << endl;

    int l = 1, r = 3;
    cout << "\nSuma en subarreglo desde indice " << l << " hasta " << r << ": " << rango(pf,l,r);

    l = 0, r = 2;
    cout << "\nSuma en subarreglo desde indice " << l << " hasta " << r << ": " << rango(pf,l,r);
    
    return 0;

}
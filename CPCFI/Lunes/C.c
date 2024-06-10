#include <stdio.h>

int main (){
    int cases = 0, c;
    scanf("%i", &cases);
    int n,m,k, results;
    for(c = 0; c<cases; c++){ //each case
        results=0;
        scanf("%i %i %i", &n, &m, &k);
        //printf("%i %i %i", n, m, k);
        int arr_n[n], arr_m[m], max_n=0, max_m=0, min_n=0, min_m=0;
        for(int q=0; q<n; q++){
            scanf("%i", &arr_n[q]);
            max_n = (arr_n[q] > max_n)? arr_n[q] : max_n;            
            min_n = (arr_n[q] < min_n)? arr_n[q] : min_n;   
        }
        for(int q=0; q<m; q++){
            scanf("%i", &arr_m[q]);
            max_m = (arr_m[q] > max_m)? arr_m[q] : max_m;
            min_m = (arr_m[q] < min_m)? arr_m[q] : min_m;
        }
        //For the case = 0
        if (min_n > k || min_m > k)
            results = -1;
        if(results != -1){
            if(max_n + max_m <= k)
                results = n*m;
            else {
                for(int i = 0; i<n; i++){
                    for(int j=0; j<m; j++){
                        if(arr_n[i] + arr_m[j] <= k)
                            results++;
                    }    
                }
            }
        } else results++;
        
        printf("%i\n", results);
    }

    return 0;
}
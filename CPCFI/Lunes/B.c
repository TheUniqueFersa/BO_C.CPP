#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int inProblems(char *prob, char c){
    int result;
    if ((strchr(prob, c) == NULL)){
        char newChar[2];
        newChar[0] = c;
        newChar[1] = '\0';
        //printf("%s\n", newChar);
        strcat(prob, newChar);
    }
    else{
        result = 1;
    } 
    return result;
}
int main (){
    int cases = 0, c, n, totalBallons;
    char problems[27];
    scanf("%i", &cases);
    for(c = 0; c<cases; c++){ //each case
        totalBallons = 0;
        scanf("%i", &n);
        char string[n];
        char c = getchar();
        fgets(string, n+1, stdin);
        for(int k=0; k<n; k++){
            totalBallons += (inProblems(problems, string[k]))? 2 : 1;
        }
        printf("%i\n", totalBallons);
    }
    return 0;
}
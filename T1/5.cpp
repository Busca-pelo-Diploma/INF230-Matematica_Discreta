#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int calculaTrianguloPascal(int n){

    int ctd=0;
    int matrix[n][n];
    
    for (int i=0; i<=n*2; i++){
        for (int j=0; j<=i; j++){
    
            if (i == 0 || j == 0){
                ctd = 1;
            }else{
                ctd = ctd * ( i - j + 1)/j;
            }
            matrix[i][j] = ctd;
        }
    }
    return matrix[2*n][n];
}

int main(){
    
    for(int n = 0; n < 100; n++){

        cout << n << endl;
        cout << calculaTrianguloPascal(n) << endl;
        cout << "----------------------------------------------------" << endl;
        /* if((calculaTrianguloPascal(n) % 441) == 0){
            cout << "Para " << n << " divisivel" << endl;
        } */
    }
}

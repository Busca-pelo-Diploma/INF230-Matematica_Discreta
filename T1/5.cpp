#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int calculaTrianguloPascal(int n){

    int ctd=0;
    int matrix[4*n][4*n];
    
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

    int cont = 0;
    
    for(int n = 0; n < 100; n++){
        
        if(calculaTrianguloPascal(n) % 9  == 0){
            cout << "Para n = " << n << ",  divisivel." << endl;
            cont++;
        }
        
    }

    if(cont == 0){
        cout << "Não tem nenhum entre 1 e 100." << endl;
    }
}

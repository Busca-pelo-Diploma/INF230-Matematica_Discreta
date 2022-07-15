#include <bits/stdc++.h>
#include <math.h>

using namespace std;

unsigned long long int calculaTrianguloPascal(int n){

    unsigned long long int ctd=0;
    unsigned long long int matrix[4*n][4*n];
    
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

bool isPrime(unsigned long long int n){
    if (n == 1){
        return false;
    }
    for (unsigned long long int i=2; i<n; i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    
    bool isDivisible = 0;

    for(int n = 0; n < 30; n++){
        
        isDivisible = 0;

        unsigned long long int result = 20*n;
        
        for(unsigned long long int j = 0; j*j <= result; j++){
            
            if(isPrime(j)){

                if(result % j*j  == 0){
                    cout << "Para n = " << n << ",  divisivel." << endl;
                    isDivisible = 1;
                    break;
                }

            }
        }
        
    }

    if(!isDivisible){
        cout << "Não tem nenhum entre 1 e 100." << endl;
    }
}

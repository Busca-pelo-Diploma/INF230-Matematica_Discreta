#include <bits/stdc++.h>
#include <math.h>

using namespace std;

unsigned long long int calculaTrianguloPascal(unsigned long long int n){

    unsigned long long int ctd=0;
    unsigned long long int matrix[2*n][2*n];
    
    for (unsigned long long int i=0; i<=n; i++){
        for (unsigned long long int j=0; j<=i; j++){
    
            if (i == 0 || j == 0){
                ctd = 1;
            }else{
                ctd = ctd * ( i - j + 1)/j;
            }
            matrix[i][j] = ctd;
        }
    }
    return matrix[n][n/2];
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

    
    for(unsigned long long int n = 1; n <= 200; n+=2){
        
        bool isDivisible = 0;

        unsigned long long int result = calculaTrianguloPascal(n);

        for(unsigned long long int j = 2; (j*j) <= result; j++){

            if(isPrime(j) && (result % (j*j)  == 0)){
                isDivisible = 1;
                break;
            }
        }  
        if(!isDivisible){
            cout << n << " nao e divisivel." << endl;
        }
    }

}

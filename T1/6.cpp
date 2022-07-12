#include <stdio.h>
#include <bits/stdc++.h>

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
    return matrix[n][n/2];
}

int main(){
    
  int cont = 0;
    
  for(int n = 0; n < 200; n++){
      
      if(calculaTrianguloPascal(n) % 121  == 0){
          cout << "Para n = " << n << ",  divisivel." << endl;
          cont++;
      }
      
  }

  if(cont == 0){
      cout << "Não tem nenhum entre 1 e 200." << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

void imprime(int taxicab, int n) {
    cout << n << " - " << taxicab << endl;
}

void calculaTaxicab(int n) {
    int starter = 1, count = 0;

    while(count<n){
        int taxicab_compare = 0;

        for(int i=1; i<=pow(starter, 1.0/3); i++) {
            for(int k=i+1; k<=pow(starter, 1.0/3); k++){
                if(pow(i,3) + pow(k,3) == starter) taxicab_compare++;
            }
        }

        if(taxicab_compare == 2) {
            count++;
            imprime(starter, count);
        }

        starter++;
    }
}

int main() {
    int n;
    cout << "Digite um valor n e verá os n primeiros numeros de Hardy-Ramanujan: ";
    cin >> n;

    calculaTaxicab(n);

    return 0;
}
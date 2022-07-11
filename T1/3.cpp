#include <bits/stdc++.h>
using namespace std;

void imprime(int64_t fib, int n, int count) {
    cout << n << " - " << fib << " (fibonacci nº " << count << ")" << endl;
}

long int fibonacci(int n) {
    long int a = 0;
    long int b = 1;
    
    while (n-- > 1) {
        long int aux = a;
        a = b;
        b += aux;
    }

    return b;
}

void calculaFibonacciMod5(int n) {

    int count=1, count_mod_5=0;

    while(count<=n){
        long int fib = fibonacci(count);
        if(fib%5==0) {
            count_mod_5++;
            imprime(fib, count_mod_5, count);
        }
        count++;
    }
}

int main() {
    int n;
    cout << "Digite um valor n e verá os números de Fibonacci que são divisíveis por 5 entre 1 e n: ";
    cin >> n;
    calculaFibonacciMod5(n);
    return 0;
}
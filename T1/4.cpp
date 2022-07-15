#include <bits/stdc++.h>
using namespace std;

void imprime(int64_t fib, int n, int count) {
    cout << n << " - " << fib << " (fibonacci nº " << count << ")" << endl;
}

long long int fibonacci(int n) {
    long long int a = 0;
    long long int b = 1;
    
    while (n-- > 1) {
        long long int aux = a;
        a = b;
        b += aux;
    }

    return b;
}

void calculaFibonacciMod3(int n) {

    int count=1, count_mod_3=0;

    while(count<=n){
        long long int fib = fibonacci(count);
        if(fib%3==0) {
            count_mod_3++;
            imprime(fib, count_mod_3, count);
        }
        count++;
    }
}

int main() {
    int n;
    cout << "Digite um valor n e verá os números de Fibonacci que são divisíveis por 3 entre 1 e n: ";
    cin >> n;
    calculaFibonacciMod3(n);
    return 0;
}
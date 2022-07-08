#include <bits/stdc++.h>
using namespace std;

void imprime(int fib, int n, int count) {
    cout << n << " - " << fib << " (fibonacci nº " << count << ")" << endl;
}

int fibonacci(int x) {
    if(x==1 || x==2) return 1;
    return fibonacci(x-1) + fibonacci(x-2);
}

void calculaFibonacciMod5(int n) {

    int count=1, count_mod_5=0;

    while(count<=n){
        int fib = fibonacci(count);
        if(fib%3==0) {
            count_mod_5++;
            imprime(fib, count_mod_5, count);
        }
        count++;
    }
}

int main() {
    int n;
    cout << "Digite um valor n e verá os n primeiros numeros de Fibonacci que são divisíveis por 5: ";
    cin >> n;
    calculaFibonacciMod5(n);
    return 0;
}
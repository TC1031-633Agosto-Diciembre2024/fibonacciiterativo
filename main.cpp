#include <iostream>

#include <iostream>

int fibonacci(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    int result=fibonacci(n-1)+fibonacci(n-2);
    std::cout<<result<<" ";
    return result;
}

int main() {
    int n;
    std::cout << "Introduce el número de términos para la secuencia de Fibonacci: ";
    std::cin >> n;
    fibonacci(n);
    return 0;
}
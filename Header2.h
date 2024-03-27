#include <iostream>
int factorial(int a) {
    int f = 1;
    for (int i = 1; i < a + 1; i++) {
        f *= i;
    }
    return f;
}
int main() {
    
    std::cout << factorial(5);
}
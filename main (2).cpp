#include <iostream>
#include <string>
using namespace std;

// 1. Перевантаження за типом аргументів
void showValue(int x) {
    cout << "Ціле число: " << x << endl;
}

void showValue(double x) {
    cout << "Дійсне число: " << x << endl;
}

void showValue(const string& x) {
    cout << "Рядок: " << x << endl;
}

// 2. Перевантаження за кількістю аргументів
int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Перевантаження за ТИПОМ аргументів:" << endl;
    showValue(10);                 // виклик showValue(int)
    showValue(3.14);               // виклик showValue(double)
    showValue(string("Привіт"));   // виклик showValue(string)

    cout << endl << "Перевантаження за КІЛЬКІСТЮ аргументів:" << endl;
    cout << "sum(2, 3) = " << sum(2, 3) << endl;         // два аргументи
    cout << "sum(1, 2, 3) = " << sum(1, 2, 3) << endl;   // три аргументи

    return 0;
}

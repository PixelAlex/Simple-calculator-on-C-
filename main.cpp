#include <iostream>
#include <cmath>

using namespace std;

void Calculate (double first, char let, double second);

int main() {
    setlocale(LC_ALL, "rus");

    double first, second;
    char let;

    cout << "\nHello! This is a simple calculator. Enter your expression: ";
    cin >> first >> let >> second;
    Calculate(first, let, second);

    return 0;
}

void Calculate (double first, char let, double second) {
    double res;

    switch (let) {
        case '+':
            res = first + second;
            break;
        case '-':
            res = first - second;
            break;
        case '*':
            res = first * second;
            break;
        case '/':
            res = first / second;
            break;
        case ':':
            res = first / second;
            break;
        case '^':
            res = pow(first, second);
            break;
        default:
            res = 0;
            break;
    }

    if (second == 0 && let == '/' || let == ':') {
        cout << "Результат: на ноль делить нельзя!" << endl;
        main();
    } else {
        cout << "Результат: " << res << endl;
    }
}
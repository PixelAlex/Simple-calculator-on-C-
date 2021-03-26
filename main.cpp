#include <iostream>
#include <math.h>

using namespace std;

double Calculate(double first, char let, double second);

int main() {
    setlocale(LC_ALL, "ru");
    double a, b, res;
    char let;
    cout << "Hello! This is a simple console calculator on C++! Enter the expression: ";
    cin >> a >> let >> b;
    res = Calculate(a, let, b);
    cout << "The result is: " << res << endl;
    return 0;
}

double Calculate(double first, char let, double second)
{
    switch (let) {
        case '+':
            return first + second;
            break;
        case '-':
            return first - second;
            break;
        case '*':
            return first * second;
            break;
        case '/':
            return first / second;
            break;
        case ':':
            return first / second;
            break;
        case '^':
            return pow(first, second);
            break;
        default:
            return 0;
            break;
    }
}

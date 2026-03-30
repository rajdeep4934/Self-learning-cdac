#include <iostream>
using namespace std;

class FindFactorial {
    int num;
    long long fact;

public:
    void input() {
        cout << "Enter number: ";
        cin >> num;
    }

    void calculate() {
        fact = 1;
        for(int i = 1; i <= num; i++) {
            fact *= i;
        }
    }

    void display() {
        cout << "Factorial = " << fact;
    }
};

int main() {
    FindFactorial f;
    f.input();
    f.calculate();
    f.display();
}
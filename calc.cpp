
#include <iostream>
using namespace std;

int main() {
    char setOperator;
    float firstNum = 0.00, secondNum = 0.00;
    cout << "Wybierz swoja metode: +, -, *, /:  \n";
    cin >> setOperator;
    cout << "Wpisz pierwsza liczbe:  \n";
    cin >> firstNum;
    cout <<  "Wpisz druga liczbe:  \n";
    cin >> secondNum;
    
    switch(setOperator) {
        case '+':
        cout << "Wynik: " <<firstNum + secondNum;
        break;
        
        case '-':
        cout << "Wynik:" << firstNum - secondNum;
        break;
        
        
        
        case '*':
        cout << "Wynik: " << firstNum * secondNum;
        break;
        
        case '/':
        cout << "Wynik: " << firstNum / secondNum;
        break;
    }
    return 0;
}

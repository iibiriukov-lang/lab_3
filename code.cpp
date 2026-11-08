#include "pch.h"
#include <iostream>
#include <windows.h>

using namespace std;

void taskIf17();
void taskIf8();
void taskFigure8();

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    taskIf17();
    taskIf8();
    taskFigure8();
    return 0;
}

    //вводимо 
void taskIf17() {
    double A, B, C;
    //вводимо
    cout << "If17. Дано три змінні дійсного типу: A, B, C. Якщо їх значення впорядковані за зростанням або зменшенням, то подвоїти їх; в іншому випадку замінити значення кожної змінної на протилежне. Вивести нові значення змінних A, B, C." << endl;
    cout << "Введіть дійсне число (А): ";
    cin >> A;
    cout << "Введіть дійсне число (В): ";
    cin >> B;
    cout << "Введіть дійсне число (С): ";
    cin >> C;
    //перевіряємо та робимо математичні махінації
    if ((A <= B && B <= C) || (A >= B && B >= C)) {
        A *= 2;
        B *= 2;
        C *= 2;
    }
    else {
        A *= -1;
        B *= -1;
        C *= -1;
    }
    //виводимо
    cout << "Нові значення: A = " << A << ", B = " << B << ", C = " << C << endl;
}

void taskIf8() {
    double a, b;
    //вводимо
    cout << "If8. Дано два числа. Вивести спочатку більше, а потім менше з них." << endl;
    cout << "Введіть число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;
    //рахуємо та виводимо
    if (a > b) {
        cout << a << " > " << b << endl;
    }
    else {
        cout << b << " > " << a << endl;
    }
}

void taskFigure8() {
	//вводимо
    double a, x, y;
    
  
    cout << "Figure8. Введіть сторону квадрата a: ";
    if (!(cin >> a) || a <= 0) {
        cerr << "Некоректні дані!" << endl;
        return;
    }

    cout << "Введіть координати точки (x, y): ";
    if (!(cin >> x >> y)) {
        cerr << "Не числові дані!" << endl;
        return;
    }
	  //перевіряємо, чи точка належить жовтій області
    double r = a / 2.0;
    bool inYellowHalfCircle = x > 0 && x * x + (y + r) * (y + r) < r * r;
    bool inYellowTriangle = x > 0 && y > 0 && x + y < r;
    //виводимо
    if (inYellowHalfCircle || inYellowTriangle) {
        cout << "Точка належить жовтій області." << endl;
    }
    else {
        cout << "Точка НЕ належить жовтій області." << endl;
    }
}


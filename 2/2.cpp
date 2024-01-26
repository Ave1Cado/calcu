#include <iostream>
#include <cmath>

using namespace std;

    // Функция для сложения
    double add(double a, double b) {
        return a + b;
    }

    // Функция для вычитания
    double subtract(double a, double b) {
        return a - b;
    }

    // Функция для умножения
    double multiply(double a, double b) {
        return a * b;
    }

    // Функция для деления
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        }
        else {
            cout << "Ошибка: деление на ноль!" << endl;
            return 0;
        }
    }

    // Функция для возведения в степень
    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Функция для нахождения квадратного корня
    double squareRoot(double x) {
        if (x >= 0) {
            return sqrt(x);
        }
        else {
            cout << "Ошибка: нельзя извлечь квадратный корень из отрицательного числа!" << endl;
            return 0;
        }
    }

    // Функция для нахождения 1 процента от числа
    double onePercent(double x) {
        return x * 0.01;
    }

    // Функция для нахождения факториала числа
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        else {
            return n * factorial(n - 1);
        }
    }

    int main() {
        int choice;
        double num1, num2;
        setlocale(LC_ALL, "Russian");

        do {
            cout << "Выберите операцию:" << endl;
            cout << "1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n5. Возведение в степень\n"
                << "6. Нахождение квадратного корня\n7. Нахождение 1 процента от числа\n8. Найти факториал числа\n9. Выйти из программы\n";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                cout << "Результат: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                cout << "Результат: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                cout << "Результат: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                cout << "Результат: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Введите основание и степень: ";
                cin >> num1 >> num2;
                cout << "Результат: " << power(num1, num2) << endl;
                break;
            case 6:
                cout << "Введите число для извлечения квадратного корня: ";
                cin >> num1;
                cout << "Результат: " << squareRoot(num1) << endl;
                break;
            case 7:
                cout << "Введите число: ";
                cin >> num1;
                cout << "Результат: " << onePercent(num1) << endl;
                break;
            case 8:
                cout << "Введите число для вычисления факториала: ";
                cin >> num1;
                cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
                break;
            case 9:
                cout << "Программа завершена." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
            }
        } while (choice != 9);

        return 0;
    }
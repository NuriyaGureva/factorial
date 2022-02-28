// factorial.cpp
#include <iostream>
using namespace std;


int factorial(int n)
{
    if (n < 0) return 0;               
    if (n == 0)return 1;
    else
    {      
        return n * factorial(n - 1);
    }
}
double power(double a, int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    else
    {
        return a * power(a, n - 1);
    }   
}

int main()
{
    setlocale(LC_ALL, "");

    int n; 
    double a;

    cout << "Введите число факториала: " ;
    cin >> n;
    cout << endl;  
    cout<<"Результат:" << n << "! = " << factorial(n) << endl;
    cout << endl;

    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите степень n: ";
    cin >> n;
    cout << endl;
    std::cout << "Результат: " <<power(a, n) << '\n';
    return 0;

}


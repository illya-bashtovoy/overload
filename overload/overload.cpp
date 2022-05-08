/*
Перегрузіть оператор - , +, *, / для класу, в якому зберігаєте координати цілих точок
*/

#include <iostream>
#include <Windows.h>

using namespace std;


class Point {
private:
    int x;
    int y;

public:
    Point() {
        x = 0; y = 0;
    }


    Point(int X, int Y) {
        this->x = X;
        this->y = Y;
    }


    void Print() {
        cout << "x= " << x << '\t' << "y=" << y << endl;
    }


    Point operator-(const Point& other) {
        Point c; 
        c.x = this->x - other.x;
        c.y = this->y - other.y;
        return c;
    }


    Point operator+(const Point& other) {
        Point c; 
        c.x = this->x + other.x;
        c.y = this->y + other.y;
        return c;
    }


    Point operator*(const Point& other) {
        Point c;
        c.x = this->x * other.x;
        c.y = this->y * other.y;
        return c;
    }


    Point operator/(const Point& other) {
        Point c; 
        if (other.x != 0 or other.y != 0) {
            c.x = this->x / other.x;
            c.y = this->y / other.y;
        }
        return c;
    }
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Point  A(4, 8);
    Point  B(1, -3);
    Point C;


    cout << "Координати об'єкта A:" << endl; A.Print();
    cout << "Координати об'єкта B:" << endl; B.Print();

    cout << "Перевантаження оператора '-'" << endl;
    C = A - B;    C.Print();
    cout << "Перевантаження оператора '+'" << endl;
    C = A + B;    C.Print();
    cout << "Перевантаження оператора '*'" << endl;
    C = A * B;    C.Print();
    cout << "Перевантаження оператора '/'" << endl;
    C = A / B;      C.Print();
}
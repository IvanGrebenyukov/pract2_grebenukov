

#include <iostream>
using namespace std;

void Zad1() {
    srand(time(0));
    const int array_size = 50;
    int array[array_size];

    cout << "Массив: ";
    for (int i = 0; i < array_size; i++)
    {
        array[i] = -100 + rand() % 200;
        cout << array[i] << ", ";
    }
    cout << endl;
    int min_value = array[0];
    for (int i = 0; i < array_size; i++)
    {
        if (array[i] < min_value) {
            min_value = array[i];
        }
    }

    cout << "Минимальное значение = " << min_value << endl;
}
void Zad2() {
    srand(time(0));
    const int rows = 5;
    const int columns = 5;
    int array[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array[i][j] = rand() % 100;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    int rowSum = 0;
    cout << "Сумма элементов в каждом подмассиве" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            rowSum += array[i][j];
        }
        cout << "Сумма в строке " << i << ": " << rowSum << endl;
        rowSum = 0;
    }
}

struct Date {
    int day;
    int month;
    int year;
};
void Zad3() {

    Date date;

    cout << "Введите день: ";
    cin >> date.day;
    cout << "Введите месяц: ";
    cin >> date.month;
    cout << "Введите год: ";
    cin >> date.year;

    switch (date.month)
    {
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: {
        if (date.day < 1 || date.day > 31) {
            cout << "Некорректная дата" << endl;
            return;
        }
        break;
    }
    case 4: 
    case 6: 
    case 9: 
    case 11: {
        if (date.day < 1 || date.day > 30) {
            cout << "Некорректная дата" << endl;
            return;
        }
        break;
    }
        
    case 2: 
        if (date.year % 4 == 0) {
            if (date.day < 1 || date.day > 29) {
                cout << "Некорректная дата" << endl;
                return;
            }
        }
        else {
            if (date.day < 1 || date.day > 28) {
                cout << "Некорректная дата" << endl;
                return;
            }
        }
        break;
    default: {
        cout << "Некорректный месяц" << endl;
        return;
        }
            
    }
    cout << "Введенная дата корректна" << endl;
}

class Rectangle {
    private:
        double width;
        double height;
    public:
        Rectangle(double width, double height) {
            this->width = width;
            this->height = height;
        }
        double calculateArea() {
            return width * height;
        }

};
void Zad4() {
    double width, height;
    do {
        cout << "Введите ширину: ";
        cin >> width;

        if (width < 0) {
            cout << "Ширина должна быть положительным значением" << endl;
        }
    } while (width < 0);
    do {
        cout << "Введите высоту: ";
        cin >> height;

        if (height < 0) {
            cout << "Высота должна быть положительным значением" << endl;
        }
    } while (height < 0);

    Rectangle rectangle(width, height);
    cout << "Площадь прямоугольника: " << rectangle.calculateArea() << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
    //Zad1();
    //Zad2();
    //Zad3();
    Zad4();

}



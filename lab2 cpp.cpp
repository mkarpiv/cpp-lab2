#include <iostream> // для вводу і виводу
#include <iomanip> // для використання функції setlocale
using namespace std;

template<typename T> //шаблон функції для конвертації часу
void convertTime(T seconds) {

    int years, months, days, hours, minutes; //зберігання даних¿

    years = seconds / 31536000; //років в секундах
    months = seconds / 2592000; //місяців в секундах
    days = seconds / 86400; //днів в секундах
    hours = seconds / 3600; //годин в секундах
    minutes = seconds / 60; //хвилин в секундах
  
    //вивід результатів
    cout << "Роки: " << years << endl;
    cout << "Місяці: " << months << endl;
    cout << "Дні: " << days << endl;
    cout << "Години: " << hours << endl;
    cout << "Хвилини: " << minutes << endl;
    cout << "Секунди: " << seconds << endl;
}
 //головна функція
int main() {
    setlocale(LC_ALL, "ukr"); //українська локалізація
    int inputSeconds;
    cout << "Введіть кількість секунд: "; //вводимо к-сть секунд
    cin >> inputSeconds; //виводимо результати
    convertTime(inputSeconds); //виклик функції конвертації часу
    return 0;
}

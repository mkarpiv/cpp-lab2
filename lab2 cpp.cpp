#include <iostream> // для виводу і вводу
#include <iomanip> // для використання функції setlocale
using namespace std;

template<typename T> //шаблон функції для конвертації часу
void convertTime(T seconds) {

    int years, months, days, hours, minutes; //зберігання даних конвертації

    years = seconds / 31536000; //секунд в році
    months = seconds / 2592000; //секунд в місяці
    days = seconds / 86400; //секунд в дні
    hours = seconds / 3600; //секунд в годині
    minutes = seconds / 60; //секунд в хвилині
  
    //вивід результатів
    cout << "Роки: " << years << endl;
    cout << "Мiсяцi: " << months << endl;
    cout << "Днi: " << days << endl;
    cout << "Години: " << hours << endl;
    cout << "Хвилини: " << minutes << endl;
    cout << "Секунди: " << seconds << endl;
}
 //головна функція
int main() {
    setlocale(LC_ALL, "ukr"); //встановлення української локалізації
    int inputSeconds;
    cout << "Введiть кiлькiсть секунд: "; //вводимо к-сть секунд
    cin >> inputSeconds; //виводимо всі результати
    convertTime(inputSeconds); //викликаємо функцію для конвертації часу
    return 0;
}

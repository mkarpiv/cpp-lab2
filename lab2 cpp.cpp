#include <iostream> // ��� ������ � �����
#include <iomanip> // ��� ������������ ������� setlocale
using namespace std;

template<typename T> //������ ������� ��� ����������� ����
void convertTime(T seconds) {

    int years, months, days, hours, minutes; //��������� ����� �����������

    years = seconds / 31536000; //������ � ����
    months = seconds / 2592000; //������ � �����
    days = seconds / 86400; //������ � ��
    hours = seconds / 3600; //������ � �����
    minutes = seconds / 60; //������ � ������
  
    //���� ����������
    cout << "����: " << years << endl;
    cout << "�i���i: " << months << endl;
    cout << "��i: " << days << endl;
    cout << "������: " << hours << endl;
    cout << "�������: " << minutes << endl;
    cout << "�������: " << seconds << endl;
}
 //������� �������
int main() {
    setlocale(LC_ALL, "ukr"); //������������ ��������� ����������
    int inputSeconds;
    cout << "����i�� �i���i��� ������: "; //������� �-��� ������
    cin >> inputSeconds; //�������� �� ����������
    convertTime(inputSeconds); //��������� ������� ��� ����������� ����
    return 0;
}

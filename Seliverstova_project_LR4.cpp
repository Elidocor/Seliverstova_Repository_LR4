#include <iostream>
#include <map>
#include <string>
#include <functional>

using namespace std;

int X = 0;

bool UserInput(string input){
    if (input.empty()) return false;
    try {
        int number = stoi(input);
        if (number < 0) return false;
    }
    catch (...)
    { return false; }
    return true;
}

void enterNumber(int& varLink, string label) {
    string str_input;
    cout << label << " = ";
    getline(cin, str_input);
    while (!UserInput(str_input)) {
        cout << label << " = ";
        getline(cin, str_input);
    }
    varLink = stoi(str_input);
}

void task1()
{
    //в разработке
}

void task2()
{
    //в разработке
}

void task3()
{
    //в разработке
}

int main()
{
    while(true)
    {
        int task;
        cout << "Меню:" << endl;
        cout << "Task 1. Ввод натурального числа X" << endl;
        cout << "Task 2. Нахождение наибольшей цифры в записи числа X" << endl;
        cout << "Task 3. Нахождение наименьшей цифры в записи числа X" << endl;
        cout << "0. Выход" << endl;
        cout << "Введите номер пункта: ";
        cin >> task;

        switch(task)
        {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 0: return 0;
        }
        cout << endl;
    }
}
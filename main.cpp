#include "class.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    Organization organization; //organizz(n)-передача в конструктор аргумента
    int menuMassive;
    
    do {
        cout << "\n" << "------------\n"
            "0. Выход.\n"
            "1. Использовать динамический массив классов. \n"
            "2. Использовать массив классов.\n"
            "------------\n";
        cin >> menuMassive;
        switch (menuMassive)
        {
           case 0:
           {
               break;
           }
           case 1:
           {
                int menu;
                int SizeMassive; //переменная для памяти массива
                cout << "Введите количество организаций: " << endl;
                cin >> SizeMassive;
                Organization* Massive = new Organization[SizeMassive];//создание динамического массива объектов
                do {
                    cout << "\n" << "------------\n"
                        "0. Выход.\n"
                        "1. Очистка данных. \n"
                        "2. Заполнение данных организаций.\n"
                        "3. Вывод данных об организациях из файла.\n"
                        "------------\n";
                cin >> menu;
                cout << "------------" << endl;
                    switch (menu)
                    {
                    case 0:
                    {
                        cout << "Программа завершена." << endl;
                        delete[] Massive;
                        break;
                    }
                    case 1:
                    {
                        organization.cleanFile();
                        break;
                    }
                    case 2:
                    {
                        organization.massiveCompletion(Massive, SizeMassive);
                        cout << "------------" << endl;
                        break;
                    }
                    case 3:
                    {
                        organization.openFileMassive();
                        cout << "------------" << endl;
                        break;
                    }
                    }
                } while (menu != 0);
                return 0;
            }
            case 2:
            {
                int menuCase;
                int sizeMassive; //переменная для памяти массива
                cout << "Введите количество организаций: " << endl;
                cin >> sizeMassive;
                Organization* Massive = new Organization[sizeMassive];
                Organization** massivePointer = new Organization* [sizeMassive];
                do {
                    cout << "\n" << "------------\n"
                        "0. Выход.\n"
                        "1. Очистка данных. \n"
                        "2. Заполнение данных организаций.\n"
                        "3. Вывод данных об организациях из файла.\n"
                        "------------\n";
                    cin >> menuCase;
                    cout << "------------" << endl;
                    switch (menuCase)
                    {
                    case 0:
                    {
                        cout << "Программа завершена." << endl;
                        delete[] Massive;
                        delete[] massivePointer;
                        break;
                    }
                    case 1:
                    {
                        organization.cleanFile();
                        break;
                    }
                    case 2:
                    {
                        organization.massivePointerCompletion(massivePointer, sizeMassive);;
                        cout << "------------" << endl;
                        break;
                    }
                    case 3:
                    {
                        organization.openFileMassive();
                        cout << "------------" << endl;
                        break;
                    }
                    }
                } while (menuCase != 0);
                return 0;
            }
            }
            }while (menuMassive != 0);
    } 
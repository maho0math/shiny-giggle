#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#define N 2
class Organization//класс организации

{
private:
    int salesVolume;// = 230000;//объем продаж
    int income;// = 103500;//прибыль
    int staff;// = 4;//кол-во сотрудников
    int salary;// = 5600;//зп персонала
    string name; //имя
public:
    Organization()
    {
        salesVolume = 0; income = 0; staff = 0; salary = 0; name = "unknown";
    }

    void cleanFile();
    void massiveCompletion(Organization* arr, int size); //заполнение массива объектов
    void saveMassiveParameters(Organization* arr, int size); //сохранение в файл массива
    void openFileMassive(); //считывание из файла

    void massivePointerCompletion(Organization** arr, int size);
    void saveMassivePointerParameters(Organization** arr, int size);
    void openFileMassivePointer();
    
};

#endif //CLASS_H

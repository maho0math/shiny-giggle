#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#define N 2
class Organization//����� �����������

{
private:
    int salesVolume;// = 230000;//����� ������
    int income;// = 103500;//�������
    int staff;// = 4;//���-�� �����������
    int salary;// = 5600;//�� ���������
    string name; //���
public:
    Organization()
    {
        salesVolume = 0; income = 0; staff = 0; salary = 0; name = "unknown";
    }

    void cleanFile();
    void massiveCompletion(Organization* arr, int size); //���������� ������� ��������
    void saveMassiveParameters(Organization* arr, int size); //���������� � ���� �������
    void openFileMassive(); //���������� �� �����

    void massivePointerCompletion(Organization** arr, int size);
    void saveMassivePointerParameters(Organization** arr, int size);
    void openFileMassivePointer();
    
};

#endif //CLASS_H

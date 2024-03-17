#include "class.h"

    void Organization::cleanFile()
    {  
        ofstream cleanFile("massive.txt", ios::trunc);
        cleanFile.close();
        ofstream clean("massivePointer.txt", ios::trunc);
        clean.close();
    }

    void Organization::massiveCompletion(Organization* arr, int size)
    {
    for (int i = 0; i < size; i++)
    {
        cout << "��������." << endl;
        cin >> arr[i].name;

        cout << "�����." << endl;
        cin >> arr[i].income;

        cout << "�������." << endl;
        cin >> arr[i].salesVolume;

        cout << "���-�� �����������" << endl;
        cin >> arr[i].staff;

        cout << "�/� ���������." << endl;
        cin >> arr[i].salary;
        }
    saveMassiveParameters(arr, size);
    }

    void Organization::saveMassiveParameters(Organization * arr, int size)
    {
        ofstream f2("massive.txt", ios::app);
        for (int i = 0; i < size; i++)
        {
        f2 << "��������: " << arr[i].name << endl;
        f2 << "�����:  " << arr[i].income << endl;
        f2 << "�������:  " << arr[i].salesVolume << endl;
        f2 << "���-�� �����������:  " << arr[i].staff << endl;
        f2 << "�� �����������:  " << arr[i].salary << endl;
        f2 << "------------" << endl;
        }
        f2.close();
    }

    void Organization::openFileMassive()
    {
        ifstream openfile("massive.txt", ios::in);
        string line;
        if (openfile.is_open())
        {
            while (getline(openfile, line))
            {
                cout << line << "\n";
            }
            openfile.close();
        }
        else cout << "���������� ������� ����";
    }

    void Organization::massivePointerCompletion(Organization** arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "��������." << endl;
            cin >> arr[i]->name;

            cout << "�����." << endl;
            cin >> arr[i]->income;

            cout << "�������." << endl;
            cin >> arr[i]->salesVolume;

            cout << "���-�� �����������" << endl;
            cin >> arr[i]->staff;

            cout << "�/� ���������." << endl;
            cin >> arr[i]->salary;
            saveMassivePointerParameters(arr, size);
        }
    }
    void Organization::saveMassivePointerParameters(Organization** arr, int size)
    {
        ofstream f2("massivePointer.txt", ios::app);
        for (int i = 0; i < size; i++)
        {
            f2 << "��������: " << arr[i]->name << endl;
            f2 << "�����:  " << arr[i]->income << endl;
            f2 << "�������:  " << arr[i]->salesVolume << endl;
            f2 << "���-�� �����������:  " << arr[i]->staff << endl;
            f2 << "�� �����������:  " << arr[i]->salary << endl;
            f2 << "------------" << endl;
        }
        f2.close();
    }
    void Organization::openFileMassivePointer()
    {
        ifstream open("massive.txt", ios::in);
        string line;
        if (open.is_open())
        {
            while (getline(open, line))
            {
                cout << line << "\n";
            }
            open.close();
        }
        else cout << "���������� ������� ����";
    }
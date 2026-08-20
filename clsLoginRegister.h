#pragma once

#include <iostream>
#include "clsScreen.h"
#include "clsDate.h"
#include "clsString.h"
#include <iomanip>
#include <vector>
#include <fstream>
#include "clsUser.h"

using namespace std;

class clsLoginRegister : protected clsScreen
{
private:
    string _UserName;
    string _Password;
    int _Permissions;

    static void _PrintLoginRegisterationRecordLine(clsLoginRegister Record)
    {
        cout << setw(8) << left << "" << "| " << setw(15) << left << clsDate::GetSystemDateTimeString();
        cout << "| " << setw(20) << left << Record._UserName;
        cout << "| " << setw(12) << left << Record._Password;
        cout << "| " << setw(12) << left << Record._Permissions;
    }

    static clsLoginRegister _ConvertLinetoRecord(string Line, string Seperator = "#//#")
    {
        vector<string> vUserData = clsString::Split(Line, Seperator);

        return clsLoginRegister(vUserData[0], vUserData[1], stoi(vUserData[2]));
    }

    static vector<clsLoginRegister> _LoadRecordsDataFromFile()
    {
        vector<clsLoginRegister> vUsers;
        fstream MyFile("LoginRegister.txt", ios::in); // read mode

        if (MyFile.is_open())
        {
            string Line;
            while (getline(MyFile, Line))
            {
                clsLoginRegister User = _ConvertLinetoRecord(Line);
                vUsers.push_back(User);
            }
            MyFile.close();
        }

        return vUsers;
    }

public:
    clsLoginRegister(string UserName, string Password, int Permissions)
    {
        _UserName = UserName;
        _Password = Password;
        _Permissions = Permissions;
    }

    static void ShowLoginRegisterationScreen()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pLoginRegister))
            return;

        vector<clsLoginRegister> vRecords = _LoadRecordsDataFromFile();

        string Title = "\t  Login Register Screen";
        string SubTitle = "\t    (" + to_string(vRecords.size()) + ") Record(s).";

        _DrawScreenHeader(Title, SubTitle);

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(15) << "Date/Time";
        cout << "| " << left << setw(20) << "User Name";
        cout << "| " << left << setw(12) << "Password";
        cout << "| " << left << setw(12) << "Permission";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        if (vRecords.empty())
        {
            cout << "\t\t\t\tNo Records Available In the System!";
        }
        else
        {
            for (clsLoginRegister& Record : vRecords)
            {
                _PrintLoginRegisterationRecordLine(Record);
                cout << endl;
            }
        }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;
    }
};

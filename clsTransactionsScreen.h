#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsDepositScreen.h"
#include "clsWithdrawScreen.h"
#include "clsTotalBalancesScreen.h"
#include <iomanip>

using namespace std;

class clsTransactionsScreen :protected clsScreen
{


private:
    enum enTransactionsMenueOptions {
        eDeposit = 1, eWithdraw = 2,
        eShowTotalBalance = 3, eShowMainMenue = 4
    };

    static short ReadTransactionsMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 4]? ";
        short Choice = clsInputValidate::ReadIntNumberBetween(1, 4, "Enter Number between 1 to 4? ");
        return Choice;
    }


    static void _ShowDepositScreen()
    {
        clsDepositScreen::ShowDepositScreen();
    }

    static void _ShowWithdrawScreen()
    {
        clsWithdrawScreen::ShowWithdrawScreen();
    }

    static void _ShowTotalBalancesScreen()
    {
        clsTotalBalancesScreen::ShowTotalBalancesScreen();
    }

    static void _GoBackToTransactionsMenue()
    {
        cout << "\n\nPress any key to go back to Transactions Menue...";
        system("pause>0");
        ShowTransactionsMenue();

    }

    static void _GoBackToMainMenue()
    {
        cout << "\n\nPress any key to go back to Main Menue...";
        system("pause>0");
        ShowMainMenue();

    }

    static void _PerformTransactionsMenueOption(enTransactionsMenueOptions TransactionsMenueOption)
    {
        switch (TransactionsMenueOption)
        {
        case enTransactionsMenueOptions::eDeposit:
        {
            system("cls");
            _ShowDepositScreen();
            _GoBackToTransactionsMenue();
            break;
        }

        case enTransactionsMenueOptions::eWithdraw:
        {
            system("cls");
            _ShowWithdrawScreen();
            _GoBackToTransactionsMenue();
            break;
        }

        case enTransactionsMenueOptions::eShowTotalBalance:
        {
            system("cls");
            _ShowTotalBalancesScreen();
            _GoBackToTransactionsMenue();
            break;
        }


        case enTransactionsMenueOptions::eShowMainMenue:
        {
           system("cls");
          //  _GoBackToMainMenue();
          //  break;

            //OR
		//	return; // This will exit the function and return to the previous menu
        }
        }
        }

public:


    static void ShowTransactionsMenue()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pTranactions))
        {
            return;// this will exit the function and it will not continue
        }

        system("cls");
        _DrawScreenHeader("\t  Transactions Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t  Transactions Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] Deposit.\n";
        cout << setw(37) << left << "" << "\t[2] Withdraw.\n";
        cout << setw(37) << left << "" << "\t[3] Total Balances.\n";
        cout << setw(37) << left << "" << "\t[4] Main Menue.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerformTransactionsMenueOption((enTransactionsMenueOptions)ReadTransactionsMenueOption());
    }

    static void ShowMainMenue()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pTranactions))
        {
            return;// this will exit the function and it will not continue
        }

        system("cls");
        _DrawScreenHeader("\t\tMain Screen");

        cout << "\t\t\t\t===========================================\n";
        cout << "\t\t\t\t\t\tMain Menu\n";
        cout << "\t\t\t\t===========================================\n";
        cout << "\t\t\t\t[1] Show Client List.\n";
        cout << "\t\t\t\t[2] Add New Client.\n";
        cout << "\t\t\t\t[3] Delete Client.\n";
        cout << "\t\t\t\t[4] Update Client Info.\n";
        cout << "\t\t\t\t[5] Find Client.\n";
        cout << "\t\t\t\t[6] Transactions.\n";
        cout << "\t\t\t\t[7] Manage Users.\n";
        cout << "\t\t\t\t[8] Logout.\n";
        cout << "\t\t\t\t===========================================\n";

        _PerformTransactionsMenueOption((enTransactionsMenueOptions)ReadTransactionsMenueOption());
    }


};

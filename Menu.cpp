//
// Created by Moinul Haq on 9/14/2019.
//

#include "Menu.h"

int Menu::displayMain()
{
    system("CLS");
    std::cout << "===================================================="<<std::endl;
    std::cout << "=                                                  ="<<std::endl;
    std::cout << "=  ///////////  //            //          //       ="<<std::endl;
    std::cout << "=  //           //             //       //         ="<<std::endl;
    std::cout << "=  //           //               //   //           ="<<std::endl;
    std::cout << "=  ///////////  //                 //              ="<<std::endl;
    std::cout << "=  //           //                 //              ="<<std::endl;
    std::cout << "=  //           //                 //              ="<<std::endl;
    std::cout << "=  //           ///////////        //              ="<<std::endl;
    std::cout << "=            A Flight Management System            ="<<std::endl;
    std::cout << "===================================================="<<std::endl;
    std::cout<<std::endl;
    std::cout<<"||\t\tSelect The Option:     \t\t  ||"<<std::endl;
    std::cout<<"||\t\t\t(1) Login As Admin   \t  ||"<<std::endl;
    std::cout<<"||\t\t\t(2) Login As Airport \t  ||"<<std::endl;
    std::cout<<"||\t\t\t(3) Use As User      \t  ||"<<std::endl;

    std::cout << "\n\tEnter Your Choice : ";
    int choice;
    std::cin >> choice;
    return choice;
}

void Menu::displayAdmin()
{
    system("CLS");
    std::cout << "==========================================="<<std::endl;
    std::cout << "=\tYou are logging in as an Admin. =\n ";
    std::cout << "=\t\tEnter Your Password: ";
    int password;
    std::cin >> password;
    if(password==admPass)
    {
        std::cout << "******** You are Logged in ********\n";
        system("CLS");
    }
    else{
        std::cout << "Incorrect Password\n Please Try again\n";
        displayAdmin();
    }
}
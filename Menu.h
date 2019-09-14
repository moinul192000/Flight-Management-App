#ifndef ASSIGNMENT_MENU_H
#define ASSIGNMENT_MENU_H

#include <iostream>

class Menu {
private:
    static const int admPass = 12345;
public:
    static int displayMain();
    static void displayAdmin();
};


#endif //ASSIGNMENT_MENU_H

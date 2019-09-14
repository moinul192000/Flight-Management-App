#include "Menu.h"
int main() {
    int t = Menu::displayMain();
    if(t==1)
    {
        Menu::displayAdmin();
    }
    return 0;
}
//TODO: добавить конструкторы(без параметров, с параметрами, копирования) для производных классов, добавить геттеры и сеттеры. Добавить меню

#include <iostream>
#include <fstream>
#include <vector>
#include "base.h"
#include "keeper.h"


int main() {
    std::cout << "Hello World!\n";
    Keeper keeper;
    Hero* hero1 = new Hero("Superman", "Fist", { "Flying", "Laser Eyes" });
    keeper.add(hero1);
    Villain* villain1 = new Villain("Joker", "None", "Caused chaos in Gotham City", "Gotham City", { "Trickery", "Insanity" });
    keeper.add(villain1);
    Monster* rigger = new Monster("Rigger", "Loves dirty places");
    keeper.add(rigger);
    std::cout << keeper.getSize();
    keeper.print();
    keeper.remove(hero1);
    keeper.print();


    return 0;
}
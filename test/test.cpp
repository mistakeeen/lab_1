//TODO: fix deструкторов, конструкторов копирования, добавить перегрузку оператора

#include <iostream>
#include <fstream>
#include <vector>
#include "base.h"
#include "keeper.h"



int main() {
    setlocale(LC_ALL, "Russian");
    int user = 0;
    int user2 = 0;
    Keeper keeper;
    //Hero *kk1 = new Hero("1", "2", {"3"});
    //keeper.add(kk1);
    
    while (true)
    {
        cout << "Меню программы:\n1 - Отобразить данные\n2 - Добавить элемент\n3 - Удалить элемент\n4 - Изменить элемент\n5 - Сохранение в файл\n6 - Загрузка из файла" << endl;;
        cin >> user;
        if (user == 1)
        {
            keeper.print();
        }
        else if (user == 2)
        {
            cout << "1 - Добавить героя\n2 - Добавить злодея\n3 - Добавить монстра\n";
            cin >> user2;
            if (user2 == 1)
            {
                Hero* new_hero = new Hero();
                new_hero->setName();
                new_hero->setWeapon();
                new_hero->setSkills();
                keeper.add(new_hero);
            }
            else if (user2 == 2)
            {
                Villain* new_villain = new Villain();
                new_villain->setName();
                new_villain->setWeapon();
                new_villain->setSkills();
                new_villain->setHabitat();
                new_villain->setEvil();
                keeper.add(new_villain);
            }
            else if (user2 == 3)
            {
                Monster* new_monster = new Monster();
                new_monster->setName();
                new_monster->setDesc();
                keeper.add(new_monster);
            }
        }
        else if (user == 3)
        {
            int index;
            cout << "Выберите удаляемый элемент:" << endl;
            keeper.print();
            cin >> index;
            index--;
            try { keeper.remove(index); }
            catch(exception& e){
                cout << "Invalid index" << endl;
            }
        }
        else if (user == 4)
        {
            int index;
            cout << "Выберите элемент для изменения:" << endl;
            keeper.print();
            cin >> index;
            index--;
            try { keeper.change(index); }
            catch (exception& e) {
                cout << "Invalid index" << endl;
            }
        }
        else if (user == 5)
        {
            keeper.save();
        }
        else if (user == 6)
        {
            keeper.load();
        }
    }


    return 0;
}
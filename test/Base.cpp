#include <iostream>
#include <cstring>
#include <vector>
#include "base.h"

Hero::Hero()
{
    this->name = "0";
    this->weapon_type = "0";
}
Hero::Hero(std::string name_, std::string weapon_type_, std::vector<std::string> skills_) :
    name(name_), weapon_type(weapon_type_), skills(skills_) {}
Hero::~Hero()
{
}
void Hero::print() {
    std::cout << "Hero: " << name << ", Weapon Type: " << weapon_type << ", Skills: ";
    for (const auto& skill : skills) {
        std::cout << skill << ". ";
    }
    std::cout << std::endl;
}

void Hero::change()
{
}

void Hero::removing()
{
}

void Hero::setWeapon()
{

    cout << "������� ������ �����: ";
    cin >> this->weapon_type;
}

void Hero::setSkills()
{
    //���� ������� �����
    //�������� ����� ����������� ����� ������� ������
}

string Hero::getName()
{
    return name;
}

string Hero::getWeapon()
{
    return weapon_type;
}

vector<string> Hero::getSkills()
{
    return skills;
}

void Hero::setName()
{
    cout << "������� ��� �����: ";
    cin >> this->name;
}


Villain::Villain()
{

}
Villain::Villain(std::string name_, std::string weapon_type_, std::string evil_deed_, std::string habitat_, std::vector<std::string> skills_) :
    name(name_), weapon_type(weapon_type_), evil_deed(evil_deed_), habitat(habitat_), skills(skills_) {}

Villain::~Villain()
{
}

void Villain::print(){
    std::cout << "Villain: " << name << ", Weapon Type: " << weapon_type << ", Evil Deed: " << evil_deed
        << ", Habitat: " << habitat << ", Skills: ";
    for (const auto& skill : skills) {
        std::cout << skill << ", ";
    }
    std::cout << std::endl;
}

void Villain::change()
{
}

void Villain::removing()
{
}

void Villain::setName()
{
    cout << "������� ��� ������: ";
    cin >> this->name;
    //name = name_;
}

void Villain::setWeapon()
{
    cout << "������� ������ ������: ";
    cin >> this->weapon_type;
    //weapon_type = weapon_type_;
}

void Villain::setSkills()
{
}

void Villain::setHabitat()
{
    cout << "������� ����� �������� ������: ";
    cin >>this->habitat;
    //habitat = habitat_;
}

void Villain::setEvil()
{
    cout << "������� ����������� ���������: ";
    cin >> this->evil_deed;
    //evil_deed = evil_deed_;
}

string Villain::getName()
{
    return name;
}

string Villain::getWeapon()
{
    return weapon_type;
}

string Villain::getHabitat()
{
    return habitat;
}

string Villain::getEvil()
{
    return evil_deed;
}

vector<string> Villain::getSkills()
{
    return skills;
}



Monster::Monster()
{
}

Monster::Monster(std::string name_, std::string description_) :
    name(name_), description(description_) {}
Monster::~Monster()
{
}
void Monster::print(){
    std::cout << "Monster: " << name << ", Description: " << description << std::endl;
}

void Monster::change()
{
}

void Monster::removing()
{
}

void Monster::setName()
{
    cout << "������� ��� �������: ";
    cin >> this->name;
    //name = name_;
}

string Monster::getName()
{
    return name;
}

string Monster::getDesc()
{
    return description;
}

void Monster::setDesc()
{
    cout << "������� �������� �������: ";
    cin >> this->description;
    //description = description_;
}

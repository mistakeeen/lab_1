#include <iostream>
#include <cstring>
#include <vector>
#include "base.h"


Hero::Hero(std::string name_, std::string weapon_type_, std::vector<std::string> skills_) :
    name(name_), weapon_type(weapon_type_), skills(skills_) {}
Hero::~Hero()
{
}
void Hero::print() {
    std::cout << "Hero: " << name << ", Weapon Type: " << weapon_type << ", Skills: ";
    for (const auto& skill : skills) {
        std::cout << skill << ", ";
    }
    std::cout << std::endl;
}

void Hero::setName(string name_)
{
    name = name_;
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



Monster::Monster(std::string name_, std::string description_) :
    name(name_), description(description_) {}
Monster::~Monster()
{
}
void Monster::print(){
    std::cout << "Monster: " << name << ", Description: " << description << std::endl;
}

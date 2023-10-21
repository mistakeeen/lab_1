#pragma once
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Base {
public:
    virtual void print() = 0;
};


class Hero : public Base {
private:
    string name;
    string weapon_type;
    vector<string> skills;
public:
    Hero();
    Hero(std::string name_, std::string weapon_type_, std::vector<std::string> skills_);
    Hero(const Hero&);
    ~Hero();
    void print() override;
    void setName(string name_);
    void setWeapon(string weapon_type);
    void setSkills(vector<string> skills);

    string getName();
    string getWeapon();
    vector<string> getSkills();
};


class Villain : public Base {
private:
    string name;
    string weapon_type;
    string evil_deed;
    string habitat;
    vector<string> skills;
public:
    Villain();
    Villain(std::string name_, std::string weapon_type_, std::string evil_deed_, std::string habitat_, std::vector<std::string> skills_);
    Villain(const Villain&);
    ~Villain();
    void print() override;
    void setName(string name);
    void setWeapon(string weapon_type);
    void setSkills(vector<string> skills);
    void setHabitat(string habitat);
    void setEvil(string evil_deed);

    string getName();
    string getWeapon();
    string getHabitat();
    string getEvil();
    vector<string> getSkills();
};


class Monster : public Base {
private:
    std::string name;
    std::string description;
public:
    Monster();
    Monster(std::string name_, std::string description_);
    Monster(const Monster&);
    ~Monster();
    void print() override;
    void setName(string name);
    void setDesc(string description);

    string getName();
    string getDesc();
};
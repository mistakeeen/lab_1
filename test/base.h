#pragma once
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Base {
public:
    virtual void print() = 0;
    virtual void change() = 0;
    virtual void removing() = 0;
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
    void change() override;
    void removing() override;
    void setName();
    void setWeapon();
    void setSkills();

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
    void change() override;
    void removing() override;
    void setName();
    void setWeapon();
    void setSkills();
    void setHabitat();
    void setEvil();

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
    void change() override;
    void removing() override;
    void setName();
    void setDesc();

    string getName();
    string getDesc();
};
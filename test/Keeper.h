#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include "base.h"
class Keeper {
public:
    Keeper();
    Keeper(int);
    Keeper(const Keeper&);
    ~Keeper();

    void add(Base* obj);
    void remove(int);
    int getSize() const;
    void change(int);
    void load();
    void save();
    void print();
private:
    struct Node {
        Base* data;
        Node* prev;
        Node* next;
        Node(Base* obj);
    };
    Node* head_;
    Node* tail_;
};
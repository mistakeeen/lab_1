#include <iostream>
#include <cstring>
#include <vector>
#include "base.h"
#include "keeper.h"

Keeper::Keeper() : head_(nullptr), tail_(nullptr) {}
Keeper::~Keeper() {
    while (head_){
        Node* temp = head_;
        head_ = head_->next;
        delete temp;
    }
}

void Keeper::add(Base* obj) {
    Node* node = new Node(obj);
    if (!head_) {
        head_ = node;
        tail_ = node;
    }
    else {
        tail_->next = node;
        node->prev = tail_;
        tail_ = node;
    }
}

void Keeper::remove(Base* obj) {
    Node* curr = head_;
    while (curr) {
        if (curr->data == obj) {
            if (curr == head_) {
                head_ = curr->next;
                if (head_) {
                    head_->prev = nullptr;
                }
            }
            else if (curr == tail_) {
                tail_ = curr->prev;
                tail_->next = nullptr;
            }
            else {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            delete curr;
            break;
        }
        curr = curr->next;
    }
}
int Keeper::getSize() const {
    Node* curr = head_;
    int i = 1;
    if (curr == nullptr) return 0;

    while (curr != tail_) {
        curr = curr->next;
        i++;
    }
    return i;
}
void Keeper::print(){
    Node* curr = head_;
    while (curr != tail_) {
        curr->data->print();
        curr = curr->next;
    }
    curr->data->print();
}
Keeper::Node::Node(Base* obj) : data(obj), prev(nullptr), next(nullptr) {}
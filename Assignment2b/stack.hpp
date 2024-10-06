/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
second homework project
*/
#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
#include <string>
#include <sstream>
class Stack {
private:
    int* y;
    int top;
public:
    Stack(int size);
    ~Stack();
    void add(int x);
    int del();
    int take() const;
};
int calculator( const std::string & input);
#endif

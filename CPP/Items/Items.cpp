#include "Items.h"

Items::Items(std::string ten,long giaban){
    this ->name = ten;
    this ->cost = giaban;
}

std::string Items::getName(){
    return name;
}

long Items::getCost(){
    return cost;
}
#include "Animal.hpp"

void Animal::setPatternAndLength(int *pattern, int size){
    (*this).pattern = pattern;
    patternLength = size;
}

void Animal::setName(std::string name){
    this->name = name;
}
void Animal::setMark(char mark){
    this->mark = mark;
}
void Animal::setPosition(int position){
    this->position = position;
}
int Animal::getPatternLength() const{
    return patternLength;
}
int Animal::getPosition() const{
    return position;
}
std::string Animal::getName() const{
    return name;
}
char Animal::getMark() const{
    return mark;
}
void Animal::move(){
    int index = rand() % patternLength;
    int stepsToMove = pattern[index];
    position += stepsToMove;
}
void Animal::showExcitement() const{
    std::cout << "We have a Winner!!" << std::endl;
}

Animal::Animal(){

}
Animal::~Animal(){
    delete[] pattern;
    pattern = nullptr;
}
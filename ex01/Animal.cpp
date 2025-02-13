#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other){
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal Default destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a generic sound!" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}
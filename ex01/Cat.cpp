#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other){
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Default destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

void Cat::setIdeas(int index, const std::string& idea) {
    brain->setIdeas(index, idea);
}

std::string Cat::getIdeas(int index) const {
    return brain->getIdeas(index);
}
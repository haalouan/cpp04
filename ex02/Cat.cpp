#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat Assignment operator called" << std::endl;
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
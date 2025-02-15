#include "Dog.hpp"

Dog::Dog() : Animal() {
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog Assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Default destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

void Dog::setIdeas(int index, const std::string& idea) {
    brain->setIdeas(index, idea);
}

std::string Dog::getIdeas(int index) const {
    return brain->getIdeas(index);
}
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

    private:
        std::string type;
    
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        std::string getType() const;

        virtual void makeSound() const;


};

#endif
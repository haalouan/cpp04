
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

    std::cout << "-------------------------------------" << std::endl;

    const Animal* animal = new Animal();

    std::cout << "-------------------------------------" << std::endl;

    const Animal* dog = new Dog();

    std::cout << "-------------------------------------" << std::endl;

    const Animal* cat = new Cat();

    std::cout << "-------------------------------------" << std::endl;

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    animal->makeSound();
    cat->makeSound();
    dog->makeSound();

    std::cout << "-------------------------------------" << std::endl;

    delete animal;
    delete dog;
    delete cat;

    std::cout << "-------------------------------------" << std::endl;

    const WrongAnimal* wronganimal = new WrongAnimal();

    std::cout << "-------------------------------------" << std::endl;

    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "-------------------------------------" << std::endl;

    std::cout << wrongCat->getType() << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    wronganimal->makeSound();
    wrongCat->makeSound();

    std::cout << "-------------------------------------" << std::endl;
    
    delete wronganimal;
    delete wrongCat;

    std::cout << "-------------------------------------" << std::endl;

    return 0;
}

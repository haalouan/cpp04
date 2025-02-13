#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    cat->makeSound();
    dog->makeSound();
    animal->makeSound();

    delete animal;
    delete dog;
    delete cat;

    Dog* dogBrain = new Dog();
    dogBrain->setIdeas(0, "Chase the ball!");
    std::cout << "dogBrain Idea : " << dogBrain->getIdeas(0) << std::endl;
    dogBrain->setIdeas(0, "Sleep on the couch.");
    std::cout << "dogBrain New Idea : " << dogBrain->getIdeas(0) << std::endl;
    delete dogBrain;

    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();
    for (int k = 0; k < 2; k++)
        delete animals[k];

    return 0;
}

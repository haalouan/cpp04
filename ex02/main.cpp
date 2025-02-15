#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    std::cout << "-------------------------------------" << std::endl;

    Dog* dogBrain = new Dog();
    dogBrain->setIdeas(0, "Chase the ball!");

    std::cout << "-------------------------------------" << std::endl;

    Dog* dogBrain2 = new Dog(*dogBrain);

    std::cout << "-------------------------------------" << std::endl;

    std::cout << "dogBrain Idea : " << dogBrain->getIdeas(0) << std::endl;
    std::cout << "dogBrain2 Idea : " << dogBrain2->getIdeas(0) << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    dogBrain->setIdeas(0, "Sleep on the couch.");

    std::cout << "dogBrain New Idea : " << dogBrain->getIdeas(0) << std::endl;
    std::cout << "dogBrain2 New Idea : " << dogBrain2->getIdeas(0) << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    delete dogBrain;
    delete dogBrain2;

    std::cout << "-------------------------------------" << std::endl;

    Animal* animals[2];

    animals[0] = new Dog();

    std::cout << "-------------------------------------" << std::endl;

    animals[1] = new Cat();

    std::cout << "-------------------------------------" << std::endl;

    for (int k = 0; k < 2; k++)
        delete animals[k];

    std::cout << "-------------------------------------" << std::endl;

    return 0;
}

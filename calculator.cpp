#include <iostream>
#include <string>

// Base class
class Animal {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

// Derived class Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Dog: Woof woof!" << std::endl;
    }
};

// Derived class Horse
class Horse : public Animal {
public:
    void makeSound() const override {
        std::cout << "Horse: Neigh neigh!" << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Cat: Meow meow!" << std::endl;
    }
};

int main() {
    Dog dog;
    Horse horse;
    Cat cat;

    std::cout << "Dog says: ";
    dog.makeSound();

    std::cout << "Horse says: ";
    horse.makeSound();

    std::cout << "Cat says: ";
    cat.makeSound();

    return 0;
}

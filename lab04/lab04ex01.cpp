#include <iostream>

class Animal
{
public:
    virtual void makeSound() = 0;
    virtual ~Animal() {};
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "Meow!" << std::endl;
    }
};

Animal * chooseAnimal(int number);

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    Animal *animal = chooseAnimal(x);
    animal->makeSound();

    delete animal;

    return 0;
}

Animal * chooseAnimal(int number)
{
    if (number%2 ==0)
    {
        return new Dog();
    }
    else
    {
        return new Cat();
    }
}
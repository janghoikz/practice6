#include <iostream>
#include "Animal.h"

Animal::Animal() : mAge{ 1 }, mWeight{ 1 }
{
	std::cout << "[Animal] Constructor" <<std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] Distructor" << std::endl;
}

int Animal::GetAge() const
{
	return mAge;
}

void Animal::SetAge(int age)
{
	mAge = age;
}

int Animal::GetWeight() const
{
	return mWeight;
}

void Animal::SetWeight(int weight)
{
	mWeight = weight;
}

void Animal::Sound()
{
	std::cout << "Some Sound..." << std::endl;
}
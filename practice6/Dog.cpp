#include <iostream>
#include "Dog.h"

Dog::Dog() : mBreed{ RETRIEVER }
{
	std::cout << "[dog] Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[dog] Distructor" << std::endl;
}

BREED Dog::GetBreed() const
{
	return mBreed;
}

void Dog::SetBreed(BREED breed)
{
	mBreed = breed;
}

void Dog::Roll()
{
	std::cout << "Rollint..." << std::endl;
}
#include <iostream>
#include "Catt.h"

void Catt::speak() {
	if(happy==true){
	
		std::cout << "purrs happily at your feet.\n";
	}
	else
	{
		std::cout << "hisses at you and wants to be left alone.\n";
	}
}
void Catt::make_happy() {
	happy = true;
}
void Catt::make_sad() {
	happy = false;
}


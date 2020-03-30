#include"type.h"
#include <iostream>
void runType()
{
	std::cout <<"TYPE \n" ;

	bolleanType();
	std::cout << "\n";
	deducingAType();

	//characterType();
}

void bolleanType()
{
	std::cout <<" BOLLEAN TYPE\n" ;
	bool b1 = true;
	bool b2 = false;
	bool b3{true};
	bool b4{false};
	bool b5 = 4;
	bool b6 = -12;
	bool b7{0};
	bool b8{1};

	std::cout << "value b1 = true : " << b1 << "\n";
	std::cout << "value b2 = false: " << b2 << "\n";
	std::cout << "value b3{true} : " << b3 << "\n";
	std::cout << "value b4{false} : " << b4 << "\n";
	std::cout << "value b5 = 4 : " << b5 << "\n";
	std::cout << "value b6 = -12: " << b6 << "\n";
	std::cout << "value b7{0} : " << b7 << "\n";
	std::cout << "value b8{1} : " << b8 << "\n";


}

void characterType()
{
	std::cout << "CHARACTER TYPE \n";

	char c1 = 255 ;
	unsigned char c2 = 255 ;
	signed char c3 = 255 ;
	wchar_t c4 = 255 ;
	char16_t c5 = 255 ;
	char32_t c6 = 255 ;


}
void deducingAType()
{
	std::cout << "DEDUCING A TYPE \n";


	int *ip = new decltype(2+2);

	*ip = 12;

	std::cout << *ip << " DEDECTING TYPE IS INT \n";
}
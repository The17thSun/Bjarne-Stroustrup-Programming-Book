#include <iostream>
#include <string>
#include <limits>

void step1();
void step2();

int main()
{

	bool isrunning = true;
	while (isrunning)
	{
		std::cout << "Enter step choice : ";
		std::string input;
		std::cin >> input;
		
		if (input.size() != 1) {
			std::cout << "Please enter one character.\n\n";
			continue;
		}

		char step_choice = '0';
		if (input.size() == 1)
			step_choice = input[0];

		switch (step_choice)
		{
			case '1': 
				step1();
				break;
			case '2': 
				step2(); 
				break;
			case '|': 
				isrunning = false; 
				break;
			default:
				std::cout << "Please enter a valid step number or '|' to exit.\n\n";
				break;
		}
	}
	std::cout << "\nExiting the program.\n";
}
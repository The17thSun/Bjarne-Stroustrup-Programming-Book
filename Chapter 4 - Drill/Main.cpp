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

//void step1()
//{
//	std::cout << "\n[Step 1]";
//	std::cout << "\nThis program allows you to enter integers in pairs.\n";
//	std::cout << "To exit, you can enter the '|' character;\n";
//
//	while (true)
//	{
//		int num1, num2;
//		std::cout << "\nPlease enter two integer numbers : ";
//		while (std::cin >> num1 >> num2)
//		{
//			std::cout << "Values entered : " << num1 << " & " << num2 << std::endl;
//			break;
//		}
//
//		if (std::cin.fail())
//		{
//			std::cin.clear();
//			char temp;
//			std::cin >> temp;
//			if (temp == '|')
//			{
//				break;
//			}
//			else
//			{
//				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//				std::cout << "Invalid input. Please enter integer pairs or '|' to exit.\n";
//			}
//		}
//	}
//	std::cout << "\nExiting step 1.\n\n";
//}
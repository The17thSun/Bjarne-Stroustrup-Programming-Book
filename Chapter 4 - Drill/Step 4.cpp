#include <iostream>
#include <limits>

void printComparison(double smaller_v, double larger_v)
{
	if (smaller_v == larger_v)
		std::cout << "\nThe values are equal!" << std::endl;
	else
	{
		std::cout << "\nThe smaller value is : " << smaller_v;
		std::cout << "\nThe larger value is : " << larger_v << std::endl;
	}
}

void compareTwoNumbers(double num1, double num2)
{
	double smaller_v, larger_v;

	if (num1 > num2)
	{
		larger_v = num1;
		smaller_v = num2;
	}
	else if (num1 < num2)
	{
		larger_v = num2;
		smaller_v = num1;
	}
	else if (num1 == num2)
	{
		larger_v = num1;
		smaller_v = num2;
	}

	printComparison(smaller_v, larger_v);
}

void step4()
{
	std::cout << "\n[Step 4]";
	std::cout << "\nThis program allows you to enter two floating-point numbers;";
	std::cout << "\nThe program compares the two values to display the larger and smaller values.";
	std::cout << "\nTo exit, you can enter the '|' character;\n";

	while (true)
	{
		double num1, num2;
		std::cout << "\nPlease enter two floating-point numbers : ";
		if (std::cin >> num1 >> num2 && std::cin.peek()=='\n')
		{
			compareTwoNumbers(num1, num2);
		}

		else
		{
			std::cin.clear();
			if (std::cin.peek() == '|')
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\nExiting step 4.\n\n";
				break;
			}
			else
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid input. Please enter floating-point pairs or '|' to exit.\n";
			}

		}
	}
	
}
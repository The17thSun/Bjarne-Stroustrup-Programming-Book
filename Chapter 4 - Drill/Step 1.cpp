#include <iostream>
#include <limits>

void step1()
{
	std::cout << "\n[Step 1]";
	std::cout << "\nThis program allows you to enter two integers;";
	std::cout << "\nTo exit, you can enter the '|' character.\n";

    while (true)
    {
        int num1, num2;
        std::cout << "\nPlease enter two integer numbers : ";
        
        if ((std::cin >> num1 >> num2) && std::cin.peek() == '\n')
        {
            std::cout << "Values entered: " << num1 << " & " << num2 << std::endl;
        }
        
        else if (std::cin.peek() == '|')
        {
            std::cout << "\nExiting step 1.\n\n";
            break;
        }
        
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter exactly two integers or '|' to exit.\n";
        }          
    }
}
	

#include <iostream>
#include <iomanip> // Include the necessary header for setprecision

// Function to display the current balance
void showBalance(double balance);

// Function to handle deposit and return the deposited amount
double deposit();

// Function to handle withdrawal and return the withdrawn amount
double withdraw(double balance);

int main(int argc, const char *argv[])
{

    double balance = 0;
    int choice = 0;

    do
    {
        // Display menu options
        std::cout << "*********************************\n";
        std::cout << "        Enter Your Choice        \n";
        std::cout << "*********************************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        // Clear input buffer to avoid issues with non-numeric input
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

// Function to display the current balance
void showBalance(double balance)
{
    // Display the balance with precision
    std::cout << "Your balance is: රු " << std::setprecision(2) << std::fixed << balance << '\n';
}

// Function to handle deposit and return the deposited amount
double deposit()
{
    double amount = 0;

    // Prompt the user to enter the deposit amount
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    // Validate the deposit amount
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "That's not a valid amount: \n";
        return 0;
    }
}

// Function to handle withdrawal and return the withdrawn amount
double withdraw(double balance)
{
    double amount = 0;

    // Prompt the user to enter the withdrawal amount
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    // Validate the withdrawal amount
    if (amount > balance)
    {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
}

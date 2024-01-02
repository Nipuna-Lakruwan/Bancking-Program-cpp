# Banking-Program-cpp
This C++ code represents a simple console-based banking application. Users can interact with the program to check their balance, deposit money, withdraw money, or exit the application. The program uses functions to modularize the code and improve readability.

Here's a breakdown of the main components:

1. Main Function (`main`):
   - Initializes a variable for the balance.
   - Presents a menu to the user with options to:
     - Show balance
     - Deposit money
     - Withdraw money
     - Exit the program
   - Uses a `do-while` loop to repeatedly display the menu until the user chooses to exit.

2. Show Balance Function (`showBalance`):
   - Displays the current balance with a currency symbol (Sri Lankan Rupees - "රු").
   - Uses `std::setprecision` and `std::fixed` to format the balance with two decimal places.

3. Deposit Function (`deposit`):
   - Prompts the user to enter the amount they want to deposit.
   - Validates that the entered amount is positive.
   - Returns the deposited amount or 0 if the input is invalid.

4. Withdraw Function (`withdraw`):
   - Takes the current balance as a parameter.
   - Prompts the user to enter the amount they want to withdraw.
   - Validates that the withdrawal amount is:
     - Not greater than the current balance
     - Not negative
   - Returns the withdrawn amount or 0 if the input is invalid.

The program utilizes a `switch` statement to execute the appropriate functionality based on the user's choice. It includes input validation to handle non-numeric inputs and ensures that the user provides valid amounts for deposit and withdrawal.

The program continues to run until the user chooses to exit by entering the number 4. The provided code is well-structured and user-friendly for basic banking operations.

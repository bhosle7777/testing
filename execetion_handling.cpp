#include <iostream>
#include <exception>

class InsufficientFundsException : public std::exception {
public:
    const char* what() const throw() {
        return "Insufficient funds in the account.";
    }
};

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void transfer(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }

        balance -= amount;
        std::cout << "Transfer successful. Remaining balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account(1000);

    try {
        account.transfer(1000);
    }
    catch (const InsufficientFundsException& e) {
        std::cout << "Transfer failed: " << e.what() << std::endl;
    }

    return 0;
}


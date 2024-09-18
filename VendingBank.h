#ifndef VENDING_BANK_H_
#define VENDING_BANK_H_

#include <string>

class VendingBank {
public:
    // Constructors
    VendingBank(); // Default constructor to initialize a VendingBank with default values.
    VendingBank(int id); // Constructor with id to set a unique identifier upon creation.

    // Getters
    int Id() const; // Returns the unique identifier of the VendingBank.
    double GetCoinsInMachine() const; // Returns the total coins currently in the machine.
    double GetCoinsInserted() const; // Returns the total coins inserted by the current user.
    double GetPriceOfItem() const; // Returns the price of the currently selected item.
    double GetCashInserted() const; // Returns the total cash inserted by the current user.

    // Setters
    void SetPriceOfItem(double price); // Sets the price of the item being purchased.
    
    // Payment Handling Functions
    void InsertCoin(double coin); // Adds a coin to the total coins inserted by the user.
    void InsertCash(double cash); // Adds cash to the total cash inserted, converting it to coin equivalent.
    double CalculateChange(); // Calculates and returns the amount of change due to the user.
    bool MoreCoinNeeded() const; // Checks if more coin is needed for the current transaction.
    void UpdateCoinsInMachine(); // Updates the total coins in the machine after a transaction.

private:
    int _id; // Unique identifier for the VendingBank, acts like a serial number.
    double _coinsInMachine; // Total number of coins in the vending machine.
    double _coinsInserted; // Coins inserted by the user for the current transaction.
    double _priceOfItem; // The price of the item being purchased.
    double _cashInserted; // Cash inserted by the user, converted to its coin equivalent.

    // Helper Function
    double CashToCoin(double cash) const; // Converts cash to its coin equivalent. Private as it's an internal mechanism.
};

#endif

#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include <utility>  // for std::pair instead of tuple
#include <map>

class House {
private:
    std::string propertyName;
    int purchasePrice;
    int rentAmount;
    std::string owner;
    int numHouses;
    bool hasHotel;
    int maxHouses;  // removed const and default initialization
    int houseCost;
    int hotelCost;
    bool isOwned;

public:
    // Constructor
    House(std::string propertyName, int purchasePrice, int rentAmount);

    // public Building management methods
    std::pair<bool, std::string> addHouse();
    std::pair<bool, std::string> removeHouse();
    std::pair<bool, std::string> addHotel();
    std::pair<bool, std::string> removeHotel();
    std::pair<bool, std::string> transferOwnership(const std::string& currentOwner, const std::string& newOwner);
    // public Property management methods
    int calculateRent() const;
    std::pair<bool, std::string> purchase(const std::string& player);
    std::map<std::string, std::string> getPropertyStatus() const;

    // public Getters, helps manipulate house data
    std::string getPropertyName() const { return propertyName; }
    int getPurchasePrice() const { return purchasePrice; }
    std::string getOwner() const { return owner; }
    int getNumHouses() const { return numHouses; }
    bool getHasHotel() const { return hasHotel; }
};

#endif
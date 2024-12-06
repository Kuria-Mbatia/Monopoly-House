<p align="center">
  <img src="https://www.thesprucecrafts.com/thmb/8r74s3U2sZFBzn8o52qmUiuT6qM=/750x0/filters:no_upscale():max_bytes(150000):strip_icc():format(webp)/when-can-i-buy-houses-hotels-411891_buyinghotels_2968-d9702179ea584b9f83239031684918ea.jpg" alt="Monopoly Board" width="600"/>
  <br>
</p>

# Monopoly Property Management System

This serves as a baseline for learning how to implement a property management system for Monopoly in C++, allowing players to purchase properties, build houses/hotels, and manage ownership. The system includes comprehensive testing for all property-related operations, what is not included is the player files as that is a seperate instance that can be built upon but this is a support class for property management.

## Components

### House.h
The header file defines the House class interface with:
- Property attributes (name, price, rent, owner)
- Building management (houses and hotels)
- Ownership management
- Status tracking

Key features:
- Property purchase and transfer methods
- House/hotel addition and removal
- Rent calculation based on development
- Property status reporting

### House.cpp
Implementation file containing all the House class method definitions:
- Constructor initialization
- Building management logic
- Ownership transfer validation
- Rent calculation algorithms
- Property status generation

### Test.cpp
Comprehensive test suite demonstrating:
- Property creation and initialization
- Purchase and ownership management
- Development (houses/hotels)
- Edge cases and invalid operations
- Player portfolio tracking

## Test Cases

1. **Initial Property Status**
   - Verifies proper property initialization
   - Checks initial values and ownership status

2. **Basic Operations and Ownership**
   - Tests property purchases
   - Demonstrates house building
   - Shows rent calculations at different development levels

3. **Player Portfolios**
   - Tracks properties owned by each player
   - Shows total houses built
   - Calculates total collectible rent

4. **Hotel Operations**
   - Tests hotel addition requirements
   - Verifies hotel-related restrictions
   - Demonstrates rent changes with hotels

5. **Edge Cases**
   - Attempts to exceed house limits
   - Tests invalid house removal
   - Checks hotel addition prerequisites

6. **Ownership Transfers**
   - Tests valid and invalid property transfers
   - Verifies ownership restrictions
   - Updates player portfolios

7. **Final Status**
   - Shows final property conditions
   - Displays final player portfolios

8. **Property Development**
   - Demonstrates progressive development
   - Shows rent increases with development

## Compilation and Running

### Using G++
```bash
# Compile the program
g++ -std=c++11 Test.cpp House.cpp -o monopoly

# Run the program
./monopoly
```

### Using GCC
```bash
# Compile the program
gcc -std=c++11 Test.cpp House.cpp -o monopoly -lstdc++

# Run the program
./monopoly
```

## Usage
The test program automatically runs through all test cases. Player names can be modified at the start of main():
```cpp
const std::string player1 = "Alice";
const std::string player2 = "Bob";
const std::string player3 = "Charlie";
```

## Requirements
- C++11 or later
- GCC or G++ compiler

## Output
The program provides detailed output for:
- Property status changes
- Development progress
- Ownership transfers
- Player portfolio updates
- Test case results

## Note
This is a testing framework for the property management system. Property values and rent calculations can be modified in the property constructors to match specific Monopoly editions.

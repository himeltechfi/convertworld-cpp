#include <iostream>

using namespace std;

/*DOCUMENTATION--> To do the another function i took help from shaf. Commanted
 * on 12,03,2019. i have got everything in this exercise  */

// This function validates user input to ensure it is a valid number and handles
// errors
double validateInput() {
  double value;
  while (!(cin >> value)) {
    cout << "Invalid input. Please enter a number: ";
    cin.clear();           // Clear the error flag
    cin.ignore(123, '\n'); // Discard the bad input
  }
  return value;
}

// This function converts Lbs into Ounces and grams
void ConvertLbsToOuncesGrams() {
  double lbs;
  cout << "\n\nConvert Lbs to Ounces & grams" << endl;
  cout << "Please enter a number: ";
  lbs = validateInput();
  cout << lbs << "-Lbs in Ounces and Grams are: " << lbs * 16 << " Ounces"
       << " and " << lbs * 453.592 << " Grams"
       << "\n";
}

// This function converts CM into feet and inches
void ConvertCMToFeetInches() {
  double cm;
  cout << "\n\nConvert CMs to Feet and Inches" << endl;
  cout << "Please enter a number: ";
  cm = validateInput();
  cout << cm << "-CM in CMs to Feet and Inches: " << cm * 0.0328084 << " Feet"
       << " and " << cm * 0.393710 << " Inches"
       << "\n";
}

// This function converts yards into cubic meters
void ConvertYard3ToMeter3() {
  double yards;
  cout << "\n\nConvert yards to cubic meters" << endl;
  cout << "Please enter a number: ";
  yards = validateInput();
  cout << yards << "-Yards to cubic meters: " << yards * 0.764555
       << " cubic meter"
       << "\n";
}

// This function shows the main menu and handles user choice
void ShowMenu() {
  int menu;
  cout << "\nPlease select from the foloowing menu:\n";
  cout << "\t1. Convert Lbs to Ounces & Grams" << endl;
  cout << "\t2. Convert CMs to Feet and Inches" << endl;
  cout << "\t3. Convert Yards to Cubic meter" << endl;
  cout << "Please select 1,2 or 3 followed by enter: ";

  // Using a do-while loop for input validation
  do {
    cin >> menu;
    if (cin.fail() || (menu < 1 || menu > 3)) {
      cout << "Invalid selection. Please enter 1, 2, or 3: ";
      cin.clear();
      cin.ignore(123, '\n');
    }
  } while (cin.fail() || (menu < 1 || menu > 3));

  switch (menu) {
  case 1:
    ConvertLbsToOuncesGrams();
    break;
  case 2:
    ConvertCMToFeetInches();
    break;
  case 3:
    ConvertYard3ToMeter3();
    break;
  }
}

int main() {
  int anotherConversion;
  cout << " Welcome to ConvertWorld!\n";
  do {
    ShowMenu();
    cout << "\n Would you like to do another function?" << endl;
    cout << "\t1. YES" << endl;
    cout << "\t2. NO" << endl;
    cout << "\n Please enter 1 or 2 followed by enter: ";

    // Input validation for the do-while loop
    do {
      cin >> anotherConversion;
      if (cin.fail() || (anotherConversion != 1 && anotherConversion != 2)) {
        cout << "Invalid input. Please enter 1 or 2: ";
        cin.clear();
        cin.ignore(123, '\n');
      }
    } while (cin.fail() || (anotherConversion != 1 && anotherConversion != 2));

  } while (anotherConversion == 1);

  cout << "\n Thank you for choosing conversionworld! " << endl;
  return 0;
}
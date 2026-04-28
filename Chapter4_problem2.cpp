/*
File Name: Chapter4_Problem2.cpp
programmer: Christopher O'Keefe
Date: 04/28/2026
Program objective: "Shipping Charge"
Write a program that asks for the weight of the package and the distance it is to be shipped,
then displays the shipping charge based off of the following information.
< or = 2kg: 1.10 per 500 miles shipped, 2kg < weight < = 6kg: 2.20 per 500 miles shipped,
6kg< weight <= 10kg: 3.70 per 500 miles shipped, 10kg < weight < 20kg: 4.80 per 500 miles shipped.
Do not accept values that are less than 0 kg or more than 20kg
Do not accept values that are less than 10 miles or more than 3000 miles.
*/
#include <iostream>
#include <iomanip>
using namespace std; 
int main() {
    double weight, distance, charge;
    cout << "Enter the weight of the package in kilograms: ";
    cin >> weight;
    if (weight <= 0 || weight > 20) { 
        cout << "Invalid weight, please re-enter the weight of the package: ";
        cin >> weight;

    }
    cout << "Enter the distance the package is to be shipped: "; // Get the distance from the user
    cin >> distance; 
    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance, please re-enter the distance the package is to be shipped: ";
        cin >> distance;
    }
    // Calcaulate the shipping charge based on the weight and distance entered by user
    if (weight <= 2) {
        charge = (distance / 500) * 1.10;
    }
    else if (weight > 2 && weight <= 6) {
        charge = (distance / 500) * 2.20;
    }
    else if (weight > 6 && weight <= 10) {
        charge = (distance / 500) * 3.70;
    }
    else if (weight > 10 && weight < 20) {
        charge = (distance / 500) * 4.80;
    }
    // Display the shipping charge to the user with 2 decimal places.
    cout << fixed << setprecision(2);
    cout << "The shipping charge is: $" << charge << endl;
    return 0;

}
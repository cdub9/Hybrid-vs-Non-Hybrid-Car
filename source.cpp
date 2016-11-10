#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double YEARS_OF_OWNERSHIP = 5;

int main() {
   
    double miles_driven;
    cout << "What is the estimated number of miles driven per year? " << endl;
    cin >> miles_driven;
    if (miles_driven <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the estimated number of miles driven per year: " << endl;
        cin >> miles_driven;
    }

    double gas_price_per_gallon;
    cout << "What is the estimated price per gallon of gas during the 5 years of ownership? " << endl;
    cin >> gas_price_per_gallon;
    if (gas_price_per_gallon <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the estimated price per gallon of gas during the 5 years of ownership: " << endl;
        cin >> gas_price_per_gallon;
    }

    double hybrid_initial_cost;
    cout << "What is the initial cost of the hybrid car? " << endl;
    cin >> hybrid_initial_cost;
    if (hybrid_initial_cost <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the initial cost of the hybrid car: " << endl;
        cin >> hybrid_initial_cost;
    }

    double hybrid_efficiency;
    cout << "What is the fuel efficiency (in miles per gallon) of the hybrid car? " << endl;
    cin >> hybrid_efficiency;
    if (hybrid_efficiency <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the fuel efficiency of the hybrid car: " << endl;
        cin >> hybrid_efficiency;
    }

    double hybrid_resale_value;
    cout << "What is the estimated resale value (in dollars) of the hybrid car after 5 years? " << endl;
    cin >> hybrid_resale_value;
    if (hybrid_resale_value <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the estimate resale value of the hybrid car: " << endl;
        cin >> hybrid_resale_value;
    }

    double non_hybrid_initial_cost;
    cout << "What is the initial cost of the non-hybrid car? " << endl;
    cin >> non_hybrid_initial_cost;
    if (non_hybrid_initial_cost <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the initial cost of the non-hybrid car: " << endl;
        cin >> non_hybrid_initial_cost;
    }

    double non_hybrid_efficiency;
    cout << "What is the fuel efficiency (in miles per gallon) of the non-hybrid car? " << endl;
    cin >> non_hybrid_efficiency;
    if (non_hybrid_efficiency <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the fuel efficiency of the non-hybrid car: " << endl;
        cin >> non_hybrid_efficiency;
    }

    double non_hybrid_resale_value;
    cout << "What is the estimated resale value (in dollars) of the non-hybrid car after 5 years? " << endl;
    cin >> non_hybrid_resale_value;
    if (non_hybrid_resale_value <= 0) {
        cout << "Error: You did not enter a positive number. Please re-enter the estimated resale value of the non-hybrid car: " << endl;
        cin >> non_hybrid_resale_value;
    }

    string user_buying_criterion;
    cout << "What is your primary buying criterion? (\"Gas\" or \"Total\"): " << endl;
    cin >> user_buying_criterion;

    double hybrid_total_gallons_consumed = (miles_driven / hybrid_efficiency) * YEARS_OF_OWNERSHIP;
    cout << "For the hybrid car: " << endl;
    cout << fixed << setprecision(2) << "The total gallons of fuel consumed over 5 years is: " << hybrid_total_gallons_consumed << endl;

    double hybrid_total_cost = (hybrid_total_gallons_consumed * gas_price_per_gallon) + (hybrid_initial_cost - hybrid_resale_value);
    cout << fixed << setprecision(2) << "The total cost of owning the car for 5 years is: " << hybrid_total_cost << endl;

    double non_hybrid_total_gallons_consumed = (miles_driven / non_hybrid_efficiency) * YEARS_OF_OWNERSHIP;
    cout << "For the non-hybrid car: " << endl;
    cout << fixed << setprecision(2) << "The total gallons of fuel consumed over 5 years is: " << non_hybrid_total_gallons_consumed << endl;

    double non_hybrid_total_cost = (non_hybrid_total_gallons_consumed * gas_price_per_gallon) + (non_hybrid_initial_cost - non_hybrid_resale_value);
    cout << fixed << setprecision(2) << "The total cost of owning the car for 5 years is: " << non_hybrid_total_cost << endl;

    if (user_buying_criterion == "Total" && hybrid_total_cost < non_hybrid_total_cost) {
        cout << "** The hybrid car is better than the non-hybrid car when \"Total\" is the user's primary objective." << endl;
    }
    else if (user_buying_criterion == "Total" && hybrid_total_cost > non_hybrid_total_cost) {
        cout << "** The non-hybrid car is better than the hybrid car when \"Total\" is the user's primary objective." << endl;
    }
    else if (user_buying_criterion == "Total" && hybrid_total_cost == non_hybrid_total_cost) {
        cout << "** The total cost of the hybrid car is exactly the same as the total cost of the non-hybrid car." << endl;
    }
    else if (user_buying_criterion == "Gas" && hybrid_total_gallons_consumed < non_hybrid_total_gallons_consumed) {
        cout << "** The hybrid car is better than the non-hybrid car when \"Gas\" is the user's primary objective." << endl;
    }
    else if (user_buying_criterion == "Gas" && hybrid_total_gallons_consumed > non_hybrid_total_gallons_consumed) {
        cout << "** The non-hybrid car is better than the hybrid car when \"Gas\" is the user's primary objective." << endl;
    }
    else {
        cout << "** The total fuel consumption of the hybrid car is exactly the same as the total fuel consumption of the non-hybrid car." << endl;
    }
    system("pause");
    return 0;
}

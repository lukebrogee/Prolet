#include <iostream>

int get_int();
double calculate_per_capita_gdp_estimate(int quarters_from_epoch);
std::string format_money(double money);
std::string quarter_to_ordinal(int quarter);

int main() {

	int year_number{ 0 };
	int quarter_number{ 0 };


	std::cout << "Please enter the year for the calculation: ";
	std::cin >> year_number;
	std::cout << "Please enter the quarter for the calculation: ";
	std::cin >> quarter_number;


	double starter_year_quarter = year_number * 4 + (quarter_number - 1);
	double starter_year_year_number = starter_year_quarter - (1977 * 4);


	std::string final_quarter_number = quarter_to_ordinal(quarter_number);
	std::string money_final = format_money(calculate_per_capita_gdp_estimate(starter_year_year_number));




	std::cout << "In the " << quarter_to_ordinal(quarter_number) <<
		" quarter of " << year_number << ", the projected contribution to GDP per working-age person is $" << money_final << ".\n";



	return 0;
}
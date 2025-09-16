#include <iostream>
#include <fstream>
#include <limits>
#include <sstream>
#include <string>
#include <map>

int fetch_price(std::map<std::string, std::string> *prices){
	std::ifstream data_file("./data.csv");
	std::string line, col, date, date_price;
	std::map<std::string, std::string> price;
	int i;

	if (!data_file.is_open()) throw std::runtime_error("Could not open file");

	while (std::getline(data_file, line)){
		std::stringstream data(line);
		i = 0;
		while (std::getline(data, col, ',')) {
			if (i == 0) date = col;
			if (i == 1) date_price = col; 
			if (i == 2) return 1;
			i++;
		}
		(*prices)[date] = date_price;
	}
	return 0;
}

int output_price(std::map<std::string, std::string> prices, std::string line){
	std::string col, date, ammount;
	std::map<std::string, std::string> price;
	double f_value;
	int i;
	
	std::stringstream data(line);
	i = 0;
	
	while (std::getline(data, col, '|')) {
		if (i == 0) date = col.erase(col.size() - 1);
		if (i == 1) ammount = col; 
		i++;
	}
	
	if (date == "date") return 0;
	if (ammount.empty()) return (std::cout << "Error: bad input => " << date << std::endl, 1);
	if (std::atof(ammount.c_str()) > std::numeric_limits<int>::max()) return (std::cout << "Error: too large a number." << std::endl, 1);
	
	std::map<std::string, std::string>::iterator it = prices.lower_bound(date);

	if (it == prices.end()) {
		--it;
		date = it->first;
	} else if (it == prices.begin()) {
		date = it->first;
	} else {
		std::string after = it->first;
		--it;
		std::string before = it->first;
		date = (after.compare(date) < date.compare(before)) ? after : before;
	}

	/*std::cout << "-------------" << std::endl;
	std::cout << "Date is: " << date;
	std::cout << "| Price is: " << prices.at(date);
	std::cout << "| Ammount is:" << ammount << std::endl;
	*/

	f_value = std::atof(prices.at(date).c_str()) * std::atof(ammount.c_str()); 
	std::cout << date << " =>" << ammount << " = " << f_value << std::endl;

	return 0;
}

int main(int ac, char **av) {
	if (ac != 2) return (std::cout << "Need 1 argument for program to work" << std::endl, 1);

	std::map<std::string, std::string> price;
	if (fetch_price(&price) == 1) return (std::cout << "Invalid data for prices" << std::endl, 1);

	std::ifstream data_file(av[1]);
	std::string line;

	if (!data_file.is_open()) throw std::runtime_error("Could not open file");
	while (std::getline(data_file, line)){
		output_price(price, line);
	}
	
/*	std::map<std::string, std::string>::iterator it;
	for(it = price.begin(); it != price.end(); it++){
		std::cout << "Date is: " << it->first << " | " << it->second <<  std::endl;
	}
*/	
	return 0;

}

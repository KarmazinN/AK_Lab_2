#include <iostream>
#include <ostream>
#include "calculator.h"

using namespace std;

int main() {
	cout << "Main program start";
	Calculator calculator;
	std::cout << calculator.Add(5.4, 3.5) << std::endl;
	cout << "Main program end";
}
#include <iostream>

void product_sum(int product, int sum){
	for (int i = 0; i <= product; i++){
		std::cout << i;
	}
	std::cout << product << ", " << sum;
}

int main(){
	// this is where aour inputs will be stored
	int product;
	int sum;

	// recording inputs for sum and product
	std::cout << "Product Sum Calculator\n";
	std::cout << "Insert Product: ";
	std::cin >> product;
	std::cout << "Insert Sum: ";
	std::cin >> sum;
	product_sum(product, sum);

	return 0;
}
#include <iostream>

void product_sum(int product, int sum){
	for (int i = 0; i <= abs(product); i++){
		int j = sum - i;
		if (i*j == product){
			std::cout << i << ", " << j << "\n";
		}
	}
	
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
/*A customer buys two items from a store.Write a program that prompts the user to enter
the prices of the 2 items.The program then asks the user if they have a “discount
coupon”.The user’s answer is read in a variable of type char.If the answer is ‘Y’, the
program outputs the total price reduced by 10 %, otherwise the program outputs the total
price with no discount.Have the discount rate(10 in this case) declared as a const.
-------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main() {
	double a = 0;
	double b = 0;
	const double discount = 0.1;
	char answer;
	double total = 0;
		cout << "Enter the Price for Item #1: " << endl;
		cin >> a;
		cout << "Enter the Price for Item #2: " << endl;
		cin >> b;

	cout << " Do you have Disocunt Copoun? Type Y for Yes, N for N: "<< endl;
	cin >> answer;
	if (answer == 'Y') {
		total = a + b;
		double total1 = total * discount;
		total = total - total1;
		cout << "Total Price (Disocunt Considered): " << total << endl;
	}else
		cout << "Total Price: " <<total<< endl;

	return 0;
}

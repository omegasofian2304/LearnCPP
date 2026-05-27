#include <iostream>

void verifyWallet(int totalWallet, int totalProduct) {
    if (totalWallet < totalProduct) {
        int difference = totalProduct - totalWallet;

        std::cout << "You are " << difference << " francs short." << std::endl;
    }
    else
    {
        int difference = totalWallet - totalProduct;
        std::cout << "You can buy it" << std::endl;
        std::cout << difference << ".- remaining in your Wallet";
    }
}

int main() {
    int broWallet = 5;
    int myWallet = 10;
	int totalWallet = broWallet + myWallet;
	int productPrice = 7;

    verifyWallet(totalWallet, productPrice);

    return 0;
}
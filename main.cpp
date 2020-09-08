#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback;


    const int RIGHT_WIDTH = 8, LEFT_WIDTH = 17;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >>  hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << std::string(15, '*') << " OUTPUT " << std::string(15, '*') << "\n\n";

    std::cout << name << '\n';
    std::cout << std::left << std::setfill('.') << std::setw(LEFT_WIDTH) << "Price:";
    std::cout << std::right << std::hex << std::uppercase
        << std::setfill('0') << std::setw(RIGHT_WIDTH) << price << '\n';
    std::cout << std::left << std::setfill('.') << std::setw(LEFT_WIDTH) << "Has cash-back:";
    std::cout << std::right << std::setw(RIGHT_WIDTH) << std::boolalpha << hasCashback << '\n';
    std::cout << std::left << std::setw(LEFT_WIDTH) << "Max temperature:";
    std::cout << std::right << std::setw(RIGHT_WIDTH) << std::dec << std::showpos << temperature;
    return 0;
}

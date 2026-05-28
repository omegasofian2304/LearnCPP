#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(10000);
    for (int i = 0; i < 10000; i++) {
        numbers[i] = i;
    }
    int numberToFind = 7285;
    int pivot = (numbers.size() / 2);
    int max = numbers.size();
    int min = 0;
    uint8_t step = 0;

    while (numbers[pivot] != numberToFind) {
        if (numbers[pivot] < numberToFind) {
            min = pivot + 1;
            pivot = (min + max) / 2;
        }
        else if (numbers[pivot] > numberToFind) {
            max = pivot - 1;
            pivot = (min + max) / 2;
        }

        if (min > max) 
            return 0;
        std::cout << "min :   " << min << std::endl;
        std::cout << "max:    " << max << std::endl;
        std::cout << "pivot : " << pivot << std::endl;
        step++;
    }
    std::cout << "step : " << (int)step << std::endl;
    std::cout << "Number found, the position is : " << pivot << std::endl;
    return 0;
}

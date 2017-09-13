#include <iostream>
#include <cstdlib>
 
int get_max(int list[], int length) {
    int guess = list[0];
    for (int i = 1; i < length; i++) {
        int candidate = list[i];
        if (candidate > guess) {guess = candidate;}
    }
    return guess;
}
 
int main(int argc, char* argv[]) {
    int *numbers = new int[argc];
    for (int i = 1; i < argc; i++) {
        numbers[i] = atoi(argv[i]);
    }
    int max = get_max(numbers, argc);
    std::cout << max;
    std::cout << std::endl;
    return 0;
}
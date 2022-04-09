#include <iostream>
#include <array>

#define ACTION_NUM 3
#define STATE_NUM 3

enum State {
    STABLE = 0, TOO_MUCH_PRESSURE, TOO_LITTLE_PRESSURE
};
enum Action {
    WAIT = 0, ADD_WATER, RELEASE_WATER
};
std::array<std::array<float, ACTION_NUM>, STATE_NUM> LM = {{0}};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

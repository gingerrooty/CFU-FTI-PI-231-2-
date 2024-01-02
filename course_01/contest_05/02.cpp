#include <iostream>
#include <deque>

class Water {
public:
    int temperature;
    Water() {
        this->temperature = 0;
    }
    Water(int temperature) {
        this->temperature = temperature;
    }
};

class Teapot {
public:
    Water water;

    Teapot(Water water) {
        this->water = water;
    }

    void heat_up(int t) {
        this->water.temperature += t;
    }

    bool is_boiling() {
        if (this->water.temperature >= 100 ) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() 
{
    int temperature, count;
    std::cin >> temperature >> count;
    std::deque<int> heat(count);
    for (auto& t : heat) std::cin >> t;

    Water water(temperature);
    Teapot teapot(water);

    while (not teapot.is_boiling()) {
        teapot.heat_up(heat.front());
        heat.pop_front();
    }

    for (auto t : heat) std::cout << t << ' ';
}
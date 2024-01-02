#include<iostream>
#include<string>
#include<map>

std::map<std::string, double> bonuses;

class Employee {
public:
    std::string name;
    std::string post;
    int money;
    Employee(std::string name, std::string post, int money) {
        this->name = name;
        this->post = post;
        this->money = money
    }

    double bonus(int x) {
        return money * x;
    }

    double salary() {

    }
};

class Manager : class Employee {

};

class Boss : public Employee {
public:
    Boss(std::string name, int money = 16242)
        :Employee(name, "boss", money) {
    }
};

int main() {
    double boss_bonus, manager_bonus;
    std::cin >> boss_bonus >> manager_bonus;
    bonuses["manager"] = manager_bonus;
    bonuses["boss"] = boss_bonus;

    int john_money, bob_money, alice_money;
    std::cin >> john_money >> bob_money >> alice_money;
    Boss john("John", john_money);
    Manager bob("Bob", bob_money);
    Manager alice("Alice", alice_money);

    std::cout << john << '\n' << bob << '\n' << alice << std::endl;
}
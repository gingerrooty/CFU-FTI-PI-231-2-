#include <iostream>

class Cat {
public:
	bool open;
	bool alive;

	Cat() {
		this->open = false;
		this->alive = rand() % 2;
	}
	bool is_alive() {
		if (this->open) {
			this->alive;
		}
		else {
			this->alive = rand() % 2;
		}
		return this->alive;
	}
};

class Box {
public:
	Cat open() {
		Cat cat;
		cat.open = true;
		return cat;
	}
};

int main() 
{
	Box box;
	Cat cat = box.open();
	if (cat.is_alive()) {
		std::cout << "alive";
	}
	else {
		std::cout << "dead";
	}
	return 0;
}
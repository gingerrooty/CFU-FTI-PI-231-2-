#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct Passenger {
    std::string name;
    int age;
};

int main()
{
    int pclass, age;            
    string a, b, c, line;
    std::vector<std::string> t; 
    std::vector<Passenger> v;    
    Passenger p;                 
 
    std::cin >> pclass >> age;
    std::ifstream file("train.csv");

    while (not file.eof()) {
        std::getline(file, line, '\r');

        std::istringstream ss(line);
        while (std::getline(ss, a, ',')) {
            if (a.size() == 0)
                a = "0";
            t.push_back(a);
        }

        if (t[5] == "female" && std::stoi(t[6]) > age && std::stoi(t[2]) == pclass) {
            b = t[3] + ',' + t[4];
            c = "";
            for (int i = 1; i < b.size() - 1; i++)
                if (!(b[i - 1] == '\"' && b[i] == '\"'))
                    c += b[i];
            p = { c, std::stoi(t[6]) };
            v.push_back(p);
        }
        t.clear();
    }
    file.close();

    for (int i = 0; i < v.size(); i++)
        for (int j = i + 1; j < v.size(); j++)
            if (v[i].age > v[j].age || (v[i].age == v[j].age && v[i].name > v[j].name)) {
                p = v[i];
                v[i] = v[j];
                v[j] = p;
            }

    for (auto& i : v)
        std::cout << i.name << "\n";
}

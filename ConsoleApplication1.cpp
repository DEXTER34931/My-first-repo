#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <thread>
#include <chrono>
#include <sstream>

            
using namespace std;


class GG {
public:
    int age = 21;
    string name;
    int hp = 100;
    int mana = 200;
    int lvl = 1;
    double exp = 0;
void ShowInfo () {
    cout << "Info about character ----" <<endl;
        cout << "name  " << name << "\nage  " << age << "\nhp  " << hp << "\nmana  " << mana << "\nLevel  " << lvl;
    }
void typeText(const std::string& s, unsigned ms = 100) {
    for (char c : s) {
        std::cout << c;
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(ms));
    }
}

void ShowInfo2() {
    std::ostringstream oss;
    oss << "Info about character ------\n"
        << "                                               Your experience  " << exp << endl
        << "name  " << name << "\n"
        << "age   " << age << "\n"
        << "hp    " << hp << "\n"
        << "mana  " << mana << "\n"
        << "Level " << lvl;

    typeText(oss.str(), 50);
}


protected:
    int maxHp = 100;
    int MaxMana = 200;
    int damage = 20;

    

};





class Enemy1 {
public:
        int hp = 100;
        string name;
protected:
    int damage = 5;
    int exp = 50;
};





int main()
{
    setlocale(LC_ALL, "RUSSIAN");   
    GG hero;
    hero.name = "EBLAN";
    
    cout << "Welcome to the game, player! ";
    cout << "";
    cout << "Enter Y to start...";



   /* string text = "Пример чтобюы не забыть! ";
    for (char c : text) {
       cout << c;
       cout.flush();                     
       this_thread::sleep_for(chrono::milliseconds(50));
    }

    cout << endl;
    return 0;
    */


}



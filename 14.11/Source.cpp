/*
1. Аналіз (виділити щонайменше 7 об'єктів)
Процессор
Оперативная память
Жесткий диск / SSD
Дисплей
Клавиатура
Аккумулятор
Операционная система


2. Об'єктна декомпозиція. Подати у вигляді списку або малюнка
з урахуванням відносин між об'єктами.
Ноутбук
Процессор
Оперативная память
Жесткий диск / SSD
Дисплей
Клавиатура
Аккумулятор
Операционная система
*/

#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Processor 
{
public:
    string model;
    double frequency;

    Processor(string m, double f) : model(m), frequency(f) {}
};

class RAM 
{
public:
    int size;
    string type;

    RAM(int s, string t) : size(s), type(t) {}
};

class Storage
{
public:
    int capacity; 
    string type;

    Storage(int c, string t) : capacity(c), type(t) {}
};

class Display 
{
public:
    double size;
    string resolution;

    Display(double s, string r) : size(s), resolution(r) {}
};

class Keyboard 
{
public:
    string layout;
    bool backlit;

    Keyboard(string l, bool b) : layout(l), backlit(b) {}
};

class Battery
{
public:
    int capacity;
    int cells;

    Battery(int c, int ce) : capacity(c), cells(ce) {}
};

class OperatingSystem 
{
public:
    string name;
    string version;

    OperatingSystem(string n, string v) : name(n), version(v) {}
};

class Laptop 
{
private:
    Processor processor;
    RAM ram;
    Storage storage;
    Display display;
    Keyboard keyboard;
    Battery battery;
    OperatingSystem os;

public:
    Laptop(Processor p, RAM r, Storage s, Display d, Keyboard k, Battery b, OperatingSystem o)
        : processor(p), ram(r), storage(s), display(d), keyboard(k), battery(b), os(o) {}

    void displaySpecifications() 
    {
        cout << "Processor: " << processor.model << " " << processor.frequency << " GHz" << endl;
        cout << "RAM: " << ram.size << " GB " << ram.type << endl;
        cout << "Storage: " << storage.capacity << " GB " << storage.type << endl;
        cout << "Display: " << display.size << " inches, " << display.resolution << endl;
        cout << "Keyboard: " << keyboard.layout << ", " << (keyboard.backlit ? "Backlit" : "Non-backlit") << endl;
        cout << "Battery: " << battery.capacity << " mAh, " << battery.cells << " cells" << endl;
        cout << "Operating System: " << os.name << " " << os.version << endl;
    }
};

int main() 
{
    Processor p("Intel Core i5", 2.8);
    RAM r(12, "DDR3");
    Storage s(256, "SSD");
    Display d(15.2, "1920x1080");
    Keyboard k("QWERTY", true);
    Battery b(5000, 4);
    OperatingSystem o("Windows", "10");

    Laptop laptop(p, r, s, d, k, b, o);
    laptop.displaySpecifications();

    return 0;
}

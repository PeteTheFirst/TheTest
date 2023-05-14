#include <iostream>
using namespace std;

// Hier sind Umlaute öäüßäö und noch eins Ü

class Person {
private:
    int alter; // Alter der Person
public:
    // Konstruktor, der das Alter der Person initialisiert
    Person(int a) {
        alter = a;
    }
    // Methode zum Ändern des Alters der Person
    void setAlter(int a) {
        alter = a;
    }
    // Methode zum Abrufen des Alters der Person
    int getAlter() {
        return alter;
    }
};

class Test {
public:
    void testMethode1() {
        cout << "Test Methode 1" << endl;
    }
    void testMethode2() {
        cout << "Test Methode 2" << endl;
    }
};

int main() {
    Person p(20); // Erstelle eine Person mit dem Alter 20
    cout << "Das Alter der Person ist: " << p.getAlter() << endl;
    p.setAlter(25); // Ändere das Alter der Person auf 25
    cout << "Das Alter der Person wurde auf " << p.getAlter() << " geändert." << endl;
    return 0;
}

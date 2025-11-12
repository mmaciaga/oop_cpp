#include <iostream>
#include "human.h"
#include "Worker.h"
#include "Books.h"
#include "CD.h"
#include "Magasine.h"
#include "Reader.h"
using namespace std;


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Human h = Human();

    cout << "\n----CLASS WORKER----\n" << endl;

    Worker w = Worker();

    w.firstName = "Edgar Allan";
    w.lastName = "Poe";
    w.jobTitle = "librarian";

    w.pesel = 5;
    w.salary = 4000;
    w.setAge(33);

    cout << "worker " << w.firstName << ' ' << w.lastName << " (" << w.jobTitle << ')' << " is adult: " << w.isAdult() << endl;

    cout << "\n----CLASS READER----\n" << endl;

    Reader r = Reader();
    r.firstName = "Franz";
    r.lastName = "Kafka";
    r.cardNumber = 12345;
    r.booksRead = 15;

    cout << "reader " << r.firstName << ' ' << r.lastName << "\ncard number: " << r.cardNumber << "\nbooks read: " << r.booksRead << endl;

    Location l = Location();

    cout << "\n----CLASS MAGASINE----\n" << endl;

    Magasine m = Magasine();
    m.numPages = 137;
    m.getTitle = "Vogue";
    m.ID = "CD22";
    m.location = "shelf 54, row 3";
    cout << "ID: " << m.ID << "\ntitle: " << m.getTitle << "\nlocation: " << m.location << "\nnumber of pages: " << m.numPages << endl;


    cout << "\n----CLASS BOOKS----\n" << endl;
    Books b = Books();
    b.getTitle = "Into thin air";
    b.author = "Jon Krakauer";
    b.ID = "AB11";
    b.location = "shelf 11, row 16";
    b.numPages = 413;
    cout << "ID: " << b.ID << "\nlocation: " << b.location << "\ntitle: " << b.getTitle << "\nauthor: " << b.author << "\nnumber of pages: " << b.numPages << endl;

    cout << "\n----CLASS CD----\n" << endl;

    CD c = CD();
    c.lengthCD = 37;
    c.ID = "GH53";
    c.location = "shelf 23, row 16";
    c.getTitle = "The Queen is Dead";
    c.author = "The Smiths";
    cout << "ID: " << c.ID << "\nlocation: " << c.location << "\ntitle: " << c.getTitle << "\nauthor: " << c.author << "\nlength of the record in minutes: " << c.lengthCD << endl;

    return 0;
}


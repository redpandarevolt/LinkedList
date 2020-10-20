#include <iostream>
#include <cstdlib>

#include "List.h"

using namespace std;

int main() {
    cout << "Linked List Practice Project" << endl;

    List numbers;
    numbers.addNode(3);
    numbers.addNode(5);
    numbers.addNode(8);
    numbers.addNode(12);
    numbers.addNode(15);
    numbers.addNode(19);
    numbers.addNode(43);

    cout << "Entire number list: " << endl;
    numbers.printList();
    cout << endl;

    cout << "Remove first node and print: " << endl;
    numbers.deleteNode(3);
    numbers.printList();
    cout << endl;

    cout << "Remove last node and print: " << endl;
    numbers.deleteNode(43);
    numbers.printList();
    cout << endl;

    cout << "Remove an inner node and print:" << endl;
    numbers.deleteNode(12);
    numbers.printList();
    cout << endl;

    numbers.reverse();
    numbers.printList();
    return 0;
}
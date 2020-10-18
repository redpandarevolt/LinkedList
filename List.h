//
// Created by marcela gomez on 2020-10-17.
// Technical Interview Study UW Bothell
//

#ifndef LINKEDLISTCLASS_LIST_H
#define LINKEDLISTCLASS_LIST_H

class List {

private:

    typedef struct node {
        int data;
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;

public: //functions go here

    List();
    void addNode(int addData);
    void deleteNode(int deleteData);
    void printList();

};

#endif //LINKEDLISTCLASS_LIST_H

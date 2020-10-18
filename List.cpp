//
// Created by marcela gomez on 2020-10-17.
// Technical Interview Study UW Bothell
//

#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

List::List() {

    head = NULL;
    curr = NULL;
    temp = NULL;

}

void List::addNode(int addData) {

    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if(head != NULL){

        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;

    }
    else
    {
        head = n;
    }
}


//delete node
void List::deleteNode(int deleteData) {

    nodePtr delPtr = NULL;
    temp = head;
    curr = head;

    while(curr != NULL && curr->data != deleteData){
        temp = curr;        //one step behind curr ptr
        curr = curr->next;
    }

    if(curr == NULL){

        cout << deleteData << " was not found." << endl;
        delete delPtr;

    } else {

        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }

        delete delPtr;
        cout << "The value " << deleteData << " was removed." << endl;
    }
}

void List::printList() {

    curr = head;

    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
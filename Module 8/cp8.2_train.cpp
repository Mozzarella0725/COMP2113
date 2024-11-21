/*
A railway train is usually formed by coupling multiple carriages. 
You are given a skeleton program that will store and print the IDs of carriages of a train.
Consider the following struct Car.

struct Car {
    string id;
    Car *next;
};

A Car represents a carriage and its property *next is a pointer pointing to the next carriage of the train. 
If the object is the last car of the train, the *next pointer would have the value NULL.

An empty train is defined in the main function as follows:

Car *head = NULL;

The functionality of handling user input and program output has been done for you. 
You are required to build the function appendCar() with the declaration as follow.

void appendCar(Car *&head, string id);

The function appends a new car with its id to the last car of the train and the head of the train is pointed by the head pointer head.
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


struct Car {
	string id;
	Car *next;
};

void appendCar(Car *&head, string id);
void printTrain(Car *&head);

int main() {
	Car *head = NULL;
	int n;
	cin >> n;
	string id;
	for (int i = 0; i < n; i++) {
		cin >> id;
		appendCar(head, id);
	}
	printTrain(head);

	return 0;
}

// Please implement the function appendCar() here.
void appendCar(Car *&head, string id) {
    Car *newCar = new Car;

    newCar->id = id;
    newCar->next = NULL;
	
    if (head == NULL) {
        head = newCar;
    } else {
        Car *current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newCar;
    }
}

void printTrain(Car *&head) {
	Car *current = head;
	while (current != NULL) {
		if (current->next != NULL) {
			cout << current->id << ", ";
		}
		else {
			cout << current->id;
		}
		current = current->next;
	}
}


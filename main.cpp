#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

#include "struct.h"
#include "deleteNodes.h"
#include "read_original_record.h"
#include "edit.h"
#include "search.h"
#include "searchSalary.h"
#include "insertEmployee.h"
#include "display.h"
 #include "buildSortedList.h"
#include "deleteEmployee.h"
#include "writeFile.h"
#include "deleteHead.h"
#include "findTail.h"



int main() {
    // initialize varuables
    string userInput = "";
    string attribute_name = "No_attribute";
    Node * head = NULL;
    Node * tail = NULL;
    Node * sorted_salary_head = NULL;
    Node * sorted_salary_tail = NULL;

    // read record from text file to linked list
    read_original_record(head, tail, attribute_name);

    // get user input
    cout << "Please select your action (Exit, Display, Search, Edit, Delete, searchSalary, addAttribute, insertEmployee, sortBySalary): ";
    cin >> userInput;
    cout << "\n\n";


    while (userInput != "Exit") { //check if user wants to exit or not
        if (userInput == "insertEmployee") { // insert a new employee at the tail of the list
            insertEmployee(tail, attribute_name);
        } else
        if (userInput == "Display") { // display the record on screen
            Node *current = head;
            if (attribute_name == "No_attribute") {
                cout << "ID" << "\t" << "Name" << "\t\t" << "Age" << "\t" << "Salary" << "\t" << "Role\t" << "Fired\t" << "\n";
            } else  cout << "ID" << "\t" << "Name" << "\t\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\t" << "Fired\t" << attribute_name << "\n";

            while (current != NULL) {
                display(attribute_name, current);
                current = current->next;
            }
        } else
        if (userInput == "Search") { //Search for a target value, display information of satisfying employees
            string para = "", target;
            cout << "Please enter required parameter: ";
            cin >> para;
            cout << "Please enter target: ";
            cin >> target;
            Node *current = head;
            while (current != NULL) {
                if (search(para,target,current) != NULL)
                    display(attribute_name, search(para,target,current));
                current = current->next;
            }
            cout << "\n";
        } else
        if (userInput == "Delete") { // Delete an employee record
            Node *current = head;
            Node *temp = head;
            string employeeName;
            cout << "Please enter required name: ";
            cin >> employeeName;
            while (current != NULL) {
                if (search("name", employeeName, current) != NULL) {
                  if (search("name", employeeName, current) == head) {
                    deleteHead(head);
                  }
                  else {
                    cout << temp->name << endl;
                    deleteEmployee(temp);
                  }
                }
              temp = current;
            current = current->next;
            }
        } else
        if (userInput == "Edit") { // Edit an employee record
            string para = "", target;
            cout << "Please enter required parameter: ";
            cin >> para;
            cout << "Please enter target ID: ";
            cin >> target;
            Node *current = head;
            while (current != NULL) {
                if (search("id",target,current) != NULL) {
                    edit(para,current, attribute_name);
                }
                current = current->next;
            }
            cout << "\n";
        } else
        if (userInput == "searchSalary") { // Sesarch and Display record of employees with a higher or lower income
            string choice;
            int target;
            cout << "Please enter \"larger\" or \"smaller\": ";
            cin >> choice;
            cout << "Please enter target amount: ";
            cin >> target;
            Node *current = head;
            while (current != NULL) {
                if (searchSalary(choice,target,current) != NULL) {
                    display(attribute_name, searchSalary(choice,target,current));
                }
                current = current->next;
            }
            cout << "\n";

        } else
        if (userInput == "addAttribute") { // Add a custom attribute
            cin >> attribute_name;
            Node *current = head;
            while (current != NULL) {
                current->attributes = "";
                current = current->next;
            }
        } else
        if (userInput == "sortBySalary") { // Sort the linked list according Salary
          sorted_salary_head = NULL;
          sorted_salary_tail = NULL;
          buildSortedList(sorted_salary_head, sorted_salary_tail,head);
          findTail(sorted_salary_head, tail);
        }
        else cout << "Invalid input!" << "\n";  // Alert for invalid input


        cout << "Please select your action (Exit, Display, Search, Edit, Delete, searchSalary, addAttribute, insertEmployee, sortBySalary): ";
        cin >> userInput;
        cout << "\n\n";
    }

    // write record to text file for storage
    writeFile(head, "employOut.txt", attribute_name);
    rename("employ.txt", "employBackup.txt");
    rename("employOut.txt", "employ.txt");

    // Free dynamic memory
    deleteNodes(head);


    return 0;
}

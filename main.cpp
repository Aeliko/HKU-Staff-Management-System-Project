#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

#include "struct.h"
// #include "cipher.h"
// #include "createEmployee.h"
#include "deleteNodes.h"
#include "read_original_record.h"
#include "edit.h"
#include "search.h"
#include "searchSalary.h"
#include "insertEmployee.h"
#include "display.h"
 #include "buildSortedList.h"
#include "deleteEmployee.h"
// #inlcude "sort.h"
// #include "bubbleSort.h"
#include "writeFile.h"
#include "deleteHead.h"



int main() {
    string userInput = "";
    string attribute_name = "No_attribute";
    Node * head = NULL;
    Node * tail = NULL;
    Node * sorted_salary_head = NULL;
    Node * sorted_salary_tail = NULL;
    read_original_record(head, tail, attribute_name);
    cout << "Please select your action (Exit, Display, Search, Edit, Delete, searchSalary, addAttribute, insertEmployee, sortBySalary): ";
    cin >> userInput;
    cout << "\n\n";
    while (userInput != "Exit") {
        if (userInput == "insertEmployee") {
            insertEmployee(tail, attribute_name);
        } else
        if (userInput == "Display") {
            Node *current = head;
            if (attribute_name == "No_attribute") {
                cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "Fired\t" << "\n";
            } else  cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\t" << "Fired\t" << attribute_name << "\n";

            while (current != NULL) {
                display(attribute_name, current);
                current = current->next;
            }
        } else
        if (userInput == "Search") {
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
        if (userInput == "Delete") {
            Node *current = head;
            Node *temp = head;
            string employeeName;
            cout << "Please enter required name: ";
            cin >> employeeName;
            while (current != NULL) {
              cout << "GAY" << endl;
                if (search("name", employeeName, current) != NULL) {
                  if (search("name", employeeName, current) == head) {
                    deleteHead(head);
                  }
                  else {
                    cout << temp->name << endl;
                    deleteEmployee(temp);
                  }
                  cout << "HI" << endl;
                }
              temp = current;
            current = current->next;
            cout << "Nigga" << endl;
            }
        } else
        if (userInput == "Edit") {
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
        if (userInput == "searchSalary") {
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
                    // cout << searchSalary(choice,target,current)->id << "\n";
                }
                current = current->next;
            }
            cout << "\n";

        } else
        if (userInput == "addAttribute") {
            cin >> attribute_name;
            Node *current = head;
            while (current != NULL) {
                current->attributes = "";
                current = current->next;
            }
        } else
        if (userInput == "sortBySalary") {
          buildSortedList(sorted_salary_head, sorted_salary_tail,head);
        }
        else cout << "Invalid input!" << "\n";


        cout << "Please select your action (Exit, Display, Search, Edit, Delete, searchSalary, addAttribute, insertEmployee, sortBySalary): ";
        cin >> userInput;
        cout << "\n\n";
    }
    cout << "Bye~" << endl;
    writeFile(head, "employOut.txt", attribute_name);
    deleteNodes(head);


    return 0;
}

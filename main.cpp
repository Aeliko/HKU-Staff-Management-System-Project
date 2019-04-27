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
// #include "insert.h"
// #include "head_insert.h"
// #include "find_prev.h"
// #include "build_sorted.h"
// #include "delete.h"
// #inlcude "sort.h"
// #include "bubbleSort.h"
#include "writeFile.h"



int main() {
    string userInput = "";
    string attribute_name = "No_attribute";
    Node * head = NULL;
    Node * tail = NULL;
    Node * sorted_salary_head = NULL;
    Node * sorted_salary_tail = NULL;
    read_original_record(head, tail, attribute_name);
    cout << "Please select your action: ";
    cin >> userInput;
    cout << "\n\n";
    while (userInput != "exit") {
        if (userInput == "insertEmployee") {
            insertEmployee(tail, attribute_name);
        } else
        if (userInput == "Display") {
            Node *current = head;
            if (attribute_name == "No_attribute") {
                cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\n";
            } else  cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\t" << attribute_name << "\n";

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
        // if (userInput == "delete") {
        //     Node *current = head;
        //     while (current != NULL) {
        //         if (search("name","trevor",current) != NULL)
        //             delete_node((search("name","trevor",current)));
        //     current = current->next;
        //     }
        // }
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
        } else cout << "Invalid input!" << "\n";


        cout << "Please select your action: " << endl;
        cin >> userInput;
        cout << "\n\n";
    }
    cout << "Bye~";
    writeFile(head, "employOut.txt", attribute_name);
    deleteNode(head);


    return 0;
}

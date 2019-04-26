#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

#include "struct.h"
// #include "cipher.h"
// #include "createEmployee.h"
// #include "deleteNodes.h"
#include "read_original_record.h"
#include "edit.h"
#include "search.h"
#include "searchSalary.h"
#include "insertEmployee.h"
#include "insert.h"
#include "head_insert.h"
#include "find_prev.h"
#include "build_sorted.h"
#include "delete.h"
// #inlcude "sort.h"
// #include "bubbleSort.h"
// #include "writeFile.h"



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
    while (userInput != "exit") {
        if (userInput == "insertEmployee") {
            insertEmployee(tail, attribute_name);
        } else
        if (userInput == "Display") {
            Node * current = head;
            cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\n";
            while (current != NULL) {
                cout << current -> id << "\t";
                cout << current -> name << "\t";
                cout << current -> age << "\t";
                cout << current -> salary << "\t";
                cout << current -> role << "\n\n";
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
                    cout << (search(para,target,current))->id << "\n";
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
        if (userInput == "edit") {
            string para = "", target;
            cout << "Please enter required parameter: ";
            cin >> para;
            cout << "Please enter target: ";
            cin >> target;
            Node *current = head;
            while (current != NULL) {
                if (search(para,target,current) != NULL) {
                    edit(para,current, attribute_name);
                }
                current = current->next;
            }
            cout << "\n";
        } else
        if (userInput == "searchSalary") {
            string choice;
            int target;
            cin >> choice >> target;
            Node *current = head;
            while (current != NULL) {
                if (searchSalary(choice,target,current) != NULL) {
                    cout << searchSalary(choice,target,current)->id << "\n";
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
        }


        cout << "Please select your action: ";
        cin >> userInput;
        cout << "\n";
    }
    cout << "Bye~";
    
    return 0;
}

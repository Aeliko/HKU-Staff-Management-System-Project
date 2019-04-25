#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;



#include "struct.h"
#include "read_original_record.h"
#include "search.h"
#include "edit.h"
#include "searchSalary.h"


// struct Node {
//   int id;
//   string name;
//   float age;
//   float salary;
//   string role;
//   Node *next;
//   string attributes[100];
// };

// void read_origianal_record(Node * & head, Node * & tail) {
//     ifstream fin;
//     fin.open("employ.txt");
//     int n = 0;
//     while (fin >> n) {
//         Node * p = new Node;
//         p->id = n;
//         fin >> p->name;
//         fin >> p->age;
//         fin >> p->salary;
//         fin >> p->role;
//
//     	p->next = NULL;
//
//     	if (head == NULL) {
//     		head = p;
//     		tail = p;
//     	}
//     	else {
//     		tail->next = p;
//     		tail = p;
//     	}
//         n++;
//         cout << tail->id << " ";
//     }
//     // tail->next = NULL;
//     fin.close();
// }
//
// Node *search(string choice, string target, Node *head) {
//     string parm;
//     Node *current = head;
//
//
//     if (choice == "name") {
//         parm = "name";
//         while (current != NULL) {
//             if ((current->name) == target) {
//                 return current;
//             } else
//                 current = current->next;
//         }
//
//     }   else if (choice == "age") {
//         parm = "age";
//         while (current != NULL) {
//             if (to_string(current->age) == target) {
//                 return current;
//             } else
//                 current = current->next;
//         }
//
//     }   else if (choice == "role") {
//         parm = "role";
//         while (current != NULL) {
//             if ((current->role) == target) {
//                 return current;
//             } else
//                 current = current->next;
//         }
//
//     }
//
//     // while (current != NULL) {
//     //     if ((current->parm) == target) {
//     //         return current;
//     //     } else
//     //         current = current->next;
//     // }
//     return NULL;
// }
//
// Node *edit(string choice, Node *current) {
//     string parm;
//
//     if (choice == "name") {
//         cin >> current->name;
//     }   else if (choice == "age") {
//         cin >> current->age;
//
//     }   else if (choice == "role") {
//         cin >> current->role;
//
//     }
//
//     // while (current != NULL) {
//     //     if ((current->parm) == target) {
//     //         return current;
//     //     } else
//     //         current = current->next;
//     // }
//     return NULL;
// }
//
// void searchSalary(string choice, int target, Node *head) {
//   Node *current = head;
//   if (choice == "larger") {
//       while (current != NULL) {
//         if ((int) (current->salary) >= target) {
//           cout << current->name << "\n";
//         }
//         current = current->next;
//       }
//   }
//   else if (choice == "smaller") {
//     while (current != NULL) {
//       if ((int) (current->salary) <= target) {
//         cout << current->name << "\n";
//       }
//       current = current->next;
//     }
//   }
// }
//
int main() {
    Node * head = NULL;
    Node * tail = NULL;
    read_origianal_record(head, tail);
    Node * current = head;
    while (current != NULL) {
        cout << current -> id << " ";
        current = current->next;
    }

    cout <<"\n"<< search("name", "tre", head)->role;
    searchSalary("larger", 6000, head);
    // edit("role", search("name", "tre", head));
    // cout <<"\n"<< search("name", "tre", head)->role;



    return 0;
}

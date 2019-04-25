#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;



#include "struct1.h"
#include "read_original_record1.h"
#include "search1.h"
#include "edit1.h"
#include "searchSalary1.h"



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

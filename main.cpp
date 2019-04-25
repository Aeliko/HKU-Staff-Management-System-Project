#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;



#include "struct.h"
#include "read_original_record.h"
#include "search.h"
#include "edit.h"
#include "searchSalary.h"



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
    deleteNode(*head);
    return 0;
}

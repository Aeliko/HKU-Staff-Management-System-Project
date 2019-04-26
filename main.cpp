#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;


#include "cipher.h"
#include "createEmployee.h"
#include "deleteNodes.h"
#include "edit.h"
#include "read_original_record.h"
#include "search.h"
#include "searchSalary.h"
#inlcude "sort.h"
#include "struct.h"
#include "writeFile.h"



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

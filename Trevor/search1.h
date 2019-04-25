Node *search(string choice, string target, Node *head) {
    string parm;
    Node *current = head;


    if (choice == "name") {
        parm = "name";
        while (current != NULL) {
            if ((current->name) == target) {
                return current;
            } else
                current = current->next;
        }

    }   else if (choice == "age") {
        parm = "age";
        while (current != NULL) {
            if (to_string(current->age) == target) {
                return current;
            } else
                current = current->next;
        }

    }   else if (choice == "role") {
        parm = "role";
        while (current != NULL) {
            if ((current->role) == target) {
                return current;
            } else
                current = current->next;
        }

    }

    // while (current != NULL) {
    //     if ((current->parm) == target) {
    //         return current;
    //     } else
    //         current = current->next;
    // }
    return NULL;
}

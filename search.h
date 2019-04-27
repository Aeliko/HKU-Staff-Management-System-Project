Node *search(string choice, string target, Node *current) {
    // Node *current = head;


    if (choice == "name") {
        // while (current != NULL) {
            if ((current->name) == target) {
                return current;
            }
        //         current = current->next;
        // }

    }   else if (choice == "age") {
        // while (current != NULL) {
            if (to_string(current->age) == target) {
                return current;
            }
        //         current = current->next;
        // }

    }   else if (choice == "role") {
        // while (current != NULL) {
            if ((current->role) == target) {
                return current;
            }
        //         current = current->next;
        // }

    }   else if (choice == "id") {
        if (to_string(current->id) == target) {
            return current;
        }
    }   else if (choice == "fired") {
        if (current->fired == ((int) target)) {
            return current;
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

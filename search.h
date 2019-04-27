Node *search(string choice, string target, Node *current) {


    if (choice == "name") {
            if ((current->name) == target) {
                return current;
            }

    }   else if (choice == "age") {
            if (to_string(current->age) == target) {
                return current;
            }

    }   else if (choice == "role") {
            if ((current->role) == target) {
                return current;
            }

    }   else if (choice == "id") {
        if (to_string(current->id) == target) {
            return current;
        }
    }   else if (choice == "fired") {
        if (current->fired == stoi(target)) {
            return current;
        }
    }

    return NULL;
}

Node *edit(string choice, Node *current) {
    string parm;

    if (choice == "name") {
        cin >> current->name;
    }   else if (choice == "age") {
        cin >> current->age;

    }   else if (choice == "role") {
        cin >> current->role;

    }

    // while (current != NULL) {
    //     if ((current->parm) == target) {
    //         return current;
    //     } else
    //         current = current->next;
    // }
    return NULL;
}

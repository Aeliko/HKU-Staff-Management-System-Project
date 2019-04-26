void sort(string attr, Node *head, Node *tail, string attribute_name) {
    Node *current = head;
    Node *end = tail;
    Node *temp = tail;
    int swapped = 1;    //flag
    while (swapped) {
      swapped = 0;
      if (attr == "id") {

          while (current->next != end) {
              cout << "adf";

            if (current->next->id < current->id) {
                cout <<"iugkdfj";
              swap(current, current->next);
              swapped = 1;
            }
            if (current->next->next == end) {
              temp = current->next;
            }
            current = current->next;
        }
    } else if (attr == "name") {
        while (current->next != end) {
          if (current->next->name < current->name) {
            swap(current, current->next);
            swapped = 1;
          }
          if (current->next->next == end) {
            temp = current->next;
          }
          current = current->next;
      }
  } else if (attr == "salary") {
        while (current->next != end) {
          if (current->next->salary < current->salary) {
            swap(current, current->next);
            swapped = 1;
          }
          if (current->next->next == end) {
            temp = current->next;
          }
          current = current->next;
    }
    } else if (attr == "role") {
          while (current->next != end) {
            if (current->next->role < current->role) {
              swap(current, current->next);
              swapped = 1;
            }
            if (current->next->next == end) {
              temp = current->next;
            }
            current = current->next;
        }
    } else if (attr == "age") {
        while (current->next != end) {
          if (current->next->age < current->age) {
            swap(current, current->next);
            swapped = 1;
          }
          if (current->next->next == end) {
            temp = current->next;
          }
          current = current->next;
      }
  } else if (attr == attribute_name) {
        while (current->next != end) {
          if (current->next->attributes < current->attributes) {
            swap(current, current->next);
            swapped = 1;
          }
          if (current->next->next == end) {
            current = current->next;
          }
          
      }
    }
      // while (current->next != end) {
      //   if (current->next->attr > current->attr) {
      //     swap(current, current->next);
      //     swapped = 1;
      //   }
      //   if (current->next->next == end) {
      //     temp = current->next;
      //   }
      //   current = current->next;
      // }
      end = temp;
    }
}




//two, one, three
void swap(Node *one, Node *two) {
    cout << "wqer";
  two->next = one->next;    //three
  one->next = two;
}

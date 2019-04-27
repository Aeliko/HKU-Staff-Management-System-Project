//Converts boolean to understandable string
string convertBool(int num) {
  if(num)
  return "True";
  else
  return "False";
}

void display(string attribute_name, Node *current) {
    if (attribute_name == "No_attribute") {
            cout << current -> id << "\t";
            cout << current -> name << "\t";
            cout << current -> age << "\t";
            cout << current -> salary << "\t";
            cout << current -> role << "\t";
            cout << convertBool(current->fired) << endl << endl;
    }
    else {
            cout << current -> id << "\t";
            cout << current -> name << "\t";
            cout << current -> age << "\t";
            cout << current -> salary << "\t";
            cout << current -> role << "\t";
            cout << convertBool(current->fired) << "\t";
            cout << current -> attributes << endl << endl;
    }
}

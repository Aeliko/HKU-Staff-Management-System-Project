// convertBool: converting 1 or 0 to TURE or FALSE for "fired"
// input: int - value of fired
//  output: "Ture" or "False" as string
string convertBool(int num) {
  if(num)
  return "True";
  else
  return "False";
}

// priint_list: print the list on screen
// input:  current - the current pointer to the list
//         attribute_name - name of custom attribute
void display(string attribute_name, Node *current) {
    if (attribute_name == "No_attribute") {
        // cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\n";
            cout << current -> id << "\t";
            cout << current -> name << "\t";
            cout << current -> age << "\t";
            cout << current -> salary << "\t";
            cout << current -> role << "\t";
            cout << convertBool(current->fired) << endl << endl;
    }
    else {
        // cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\t" << attribute_name << "\n";
            cout << current -> id << "\t";
            cout << current -> name << "\t";
            cout << current -> age << "\t";
            cout << current -> salary << "\t";
            cout << current -> role << "\t";
            cout << convertBool(current->fired) << "\t";
            cout << current -> attributes << endl << endl;
    }
}

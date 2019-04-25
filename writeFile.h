#include <fstream>


int writeFile(Node *head, string file) {
  fstream fout;
  fout.open(file);
  Node *current = head;
  if (fout.fail()) {
    return 1;
  }
  while (current->next != NULL) {
    fout << current->id << endl;
    fout << current->name << endl;
    fout << current->age << endl;
    fout << current->salary << endl;
    fout << current->role << endl;
    fout << current->next << endl;
    fout << current->attributes << endl;
  }
  fout.close();
}

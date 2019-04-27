#include <fstream>


int writeFile(Node *head, string file, string attributeName) {
  fstream fout;
  fout.open(file);
  Node *current = head;
  if (fout.fail()) {
    return 1;
  }
  fout << attributeName << endl;
  while (current != NULL) {
    fout << current->id << endl;
    fout << current->name << endl;
    fout << current->age << endl;
    fout << current->salary << endl;
    fout << current->role << endl;
    fout << current->fired << endl;
    // fout << current->next << endl;
    fout << current->attributes << endl;
    current = current->next;
  }
  fout.close();
  return 0;
}

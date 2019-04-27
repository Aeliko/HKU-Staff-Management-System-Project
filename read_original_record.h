// read_original_record: read the information from the .txt file to the linked list
// input: head - the head of the linked list
//        tail - the tail of the linked list
//        attribute_name - name of custom attribute


void read_original_record(Node * & head, Node * & tail, string &attributeName)
{
    ifstream fin;
    fin.open("employ.txt");
    int n = 0;
    fin >> attributeName;
    if (attributeName != "No_attribute") {
        while (fin >> n) {
            Node * p = new Node;
            p->id = n;
            fin >> p->name;
            fin >> p->age;
            fin >> p->salary;
            fin >> p->role;
            fin >> p->fired;
            fin >> p->attributes;

        	p->next = NULL;

        	if (head == NULL) {
        		head = p;
        		tail = p;
        	}
        	else {
        		tail->next = p;
        		tail = p;
        	}
            n++;
        }
    }
    else {
        while (fin >> n) {
            Node * p = new Node;
            p->id = n;
            fin >> p->name;
            fin >> p->age;
            fin >> p->salary;
            fin >> p->role;
            fin >> p->fired;

            p->next = NULL;

            if (head == NULL) {
                head = p;
                tail = p;
            }
            else {
                tail->next = p;
                tail = p;
            }
            n++;
        }

    }
    // tail->next = NULL;
    fin.close();
}

void read_origianal_record(Node * & head, Node * & tail)
{
    ifstream fin;
    fin.open("employ.txt");
    int n = 0;
    while (fin >> n) {
        Node * p = new Node;
        p->id = n;
        fin >> p->name;
        fin >> p->age;
        fin >> p->salary;
        fin >> p->role;

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
        cout << tail->id << " ";
    }
    // tail->next = NULL;
    fin.close();
}

int read_origianal_record(Node * & head, Node * & tail, string &attributeName)
{
    ifstream fin;
    fin.open("employ.txt");
    if (fin >> attributeName)
    while (fin >> n) {
        Node * p = new Node;
        fin >> p->id;
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
    if (attributeName != "")
    return 1;
    else
    return 0;
}

//Modified function from ENGG1340
void head_insert(Node * & head, Node *current)
{
	Node * p = new Node;

  p->id = current->id;
  p->name = current->name;
  p->age = current->age;
  p->salary = current->salary;
  p->role = current->role;
  p->attributes = current->attributes;
	p->next = head;
	head = p;
}

// assume that after points to a node
// i.e., after not equals null
void insert( Node * after, Node *current)
{
	Node * p = new Node;
  p->id = current->id;
  p->name = current->name;
  p->age = current->age;
  p->salary = current->salary;
  p->role = current->role;
  p->attributes = current->attributes;
	p->next= after->next;
	after->next = p;
}

// return the node which is the last one in
// the list that is smaller than num
Node * find_prev( Node * head, float salary)
{
	if (head == NULL || head->salary >= salary )
		return NULL;

	// at least one node in the list now
	Node * current = head;

	while (current->next != NULL) {
		if (current->next->salary >= salary)
			return current;
		else
			current = current->next;
	}

	return current;
}

void print_list(Node * head)
{
    Node * current = head;
	while (current != NULL)
	{
		// process the current node, e.g., print the content
		cout << current->salary << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}

void buildSortedList(Node *&sorted_salary_head, Node *&sorted_salary_tail, Node *&head)
{
    Node *current = head, * after_this;

    // build sorted linked list
    while ( current != NULL ) {
        after_this = find_prev(sorted_salary_head, current->salary);

		if (after_this == NULL)
			head_insert(sorted_salary_head, current);
		else
			insert(after_this, current);

		//print_list(sorted_salary_head);

    current = current->next;
    }

    deleteNodes(head);
    head = sorted_salary_head;
}

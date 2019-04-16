void edit(string choice, employee *current) {
  string parm;
  switch (choice) {
  case "name":
    parm = "name";
    break;
  
  case "age":
    parm = "age";
    break;
  case "role":
    parm = "role";
    break;
  default:
    break;
  }
  cin >> current->parm;
}
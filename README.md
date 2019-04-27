# Staff Management System
## Problem statement and setting

  This software is a Staff Management System for a small start-up business with multiple departments. Start up companies usually do not have capital for a large scale human resources department and one manager is responsible for all workers in the company. An effective labour management system is crucial for its operation.<br/>
  The system aims to efficiently manage and organize human resources of a company and speed up the labour management process. This system provides user friendly environment for manager to read, add, amend and delete information of staff in the business. 


## Program features

1) Create a new employee with employee ID, name, age, role, and salary (Done)
2) Search for and delete an employee via their ID, name, age or role (Done)
3) Fire an employee (Done)
4) Edit the details of an existing employee (Done)
5) Search for all employees with a salary higher than or lower than a user input (Done)
6) Allow adding user-defined attributes, the value of a new attribute of the existing employee should be empty or undefined. (Done)
7) Set target performance for workers and compare it of each staff
8) Keep track of annual leave available for individual employees, and return the ability of a worker to apply for a leave.
9) Sort the employment list according to name, age, departments, year of employment, etc. 


## User Instruction

  This programme requires employ.txt and employOut.txt in the same path to function properly
  When the programme starts, it reads information from employ.txt in the background, which stores the name of the custom attribute and employee ID, name, age, monthly salary, role, state of employment and value of custom attribute (if applicable) of each employees respectively. 
  After the reading the initial information, the program asks for a user input. The user can choose Exit, Display, Search, Edit, Delete, searchSalary, addAttribute.
  When Exit selected, the programme ends. The programme will then write the updated information into a .txt file named employOut.txt, and free all dynamic memory used in the programme.
  When Display is selected, the programme display the information of each employees.
  When Search is selected, the programme search and display information of employees having the same value of the targeted attribute entered by the user. The user is then asked to enter the attribute name the user wants to search for, followed by the targeted value. Employee ID, name, age, salary and role of satisfying employees will then be displayed on screen.
  When Edit is selected, the program will change the existing information to the user input. The user will be asked to enter the parameter to be changed, followed by the ID of the employee to be edited, and the new value



## Assumptions

Length of name, role and attributes is shorter than std::string::max_size<br/>
The ID and salary is larger or equal to 0 and smaller than std::numeric_limits<int>::max()<br/>
The edits made satisfy the above assumptions

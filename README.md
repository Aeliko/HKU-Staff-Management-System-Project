# Staff Management System
## Problem statement and setting

  <p>This software is a Staff Management System for a small start-up business with multiple departments. Start up companies usually do not have capital for a large scale human resources department and one manager is responsible for all workers in the company. An effective labour management system is crucial for its operation.</p>
  <p>The system aims to efficiently manage and organize human resources of a company and speed up the labour management process. This system provides user friendly environment for manager to read, add, amend and delete information of staff in the business. </p>


## Program features

1) Create a new employee with employee ID, name, age, role, and salary
2) Search for and delete an employee via their ID, name, age or role
3) Fire an employee
4) Edit the details of an existing employee
5) Search for all employees with a salary higher than or lower than a user input
6) Allow adding user-defined attributes, the value of a new attribute of the existing employee should be empty or undefined.
7) Sort the employment list according to salary.
8) Display the list of employees with their information.
9) Read information from text file and write to a text file.


## User Instruction

  <p>This program requires employ.txt and employOut.txt in the same path to function properly</p>
  <p>When the program starts, it reads information from employ.txt in the background, which stores the name of the custom attribute and employee ID, name, age, monthly salary, role, state of employment and value of custom attribute (if applicable) of each employees respectively. </p>
  <p>After the reading the initial information, the program asks for a user input. The user can choose Exit, Display, Search, Edit, Delete, searchSalary, addAttribute.</p>
  <p>When Exit is selected, the program ends. The program will then write the updated information into a .txt file named employOut.txt, and free all dynamic memory used in the program.</p>
  <p><p>When Display is selected, the program display the information of each employees.</p>
  <p>When Search is selected, the program search and display information of employees having the same value of the targeted attribute entered by the user. The user is then asked to enter the attribute name the user wants to search for, followed by the targeted value. Employee ID, name, age, salary and role of satisfying employees will then be displayed on screen.</p>
  <p>When Edit is selected, the program will change the existing information to the user input. The user will be asked to enter the parameter to be changed, followed by the ID of the employee to be edited, and the new value. The attribute will then be edited to a new one.</p>
  <p>When Delete is selected, the Node of an employee will be deleted. All information of that employee will be removed.</p>
  <p>When searchSalary is selected, all employees having a higher or lower income than a target will be displayed. the program will ask for a value of "larger" or "smaller", followed by the targeted amount of salary, to determine whether to search for a higher or lower salary.</p>
  <p>When addAttribute is selected, the user can add at most one custom attribute. The program will ask for the name of the attribute. The value of the new attribute will be set to an empty string.</p>
  <p>When insertEmployee is selected, a new employee will be added to the tail of the linked list. The user will be asked to enter the ID, Name, Age, Salary, Role, and custom attribute (if applicable).</p>
  <p>When sortBySalary is selected, the list of employee will be sorted according to their salary in ascending order.</p>

## Assumptions

Length of name, role and attributes is shorter than std::string::max_size<br/>
The ID and salary is larger or equal to 0 and smaller than std::numeric_limits<int>::max()<br/>
The edits made satisfy the above assumptions

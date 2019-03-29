## Problem statement and setting

  This software is a Staff Management System for a small start-up business with multiple departments. Start up companies usually do not have capital for a large scale human resources department and one manager is responsible for all workers in the company. An effective labour management system is crucial for its operation.<br/>
  The system aims to efficiently manage and organize human resources of a company and speed up the labour management process. This system provides user friendly environment for manager to read, add, amend and delete information of staff in the business. 


## Program feature

1) create a new employee with employee ID, name, age, role, and salary
2) search for and delete an employee via their ID, name, age or role
3) fire an employee
4) edit the details of an existing employee
5) search for all employees with a salary higher than or lower than a user input
6) allow adding user-defined attributes, the value of a new attribute of the existing employee should be empty or undefined.


## Assumptions

Length of name, role and attributes is shorter than std::string::max_size
The ID and salary is larger or equal to 0 and smaller than std::numeric_limits<int>::max()
The edits made satisfy the above assumptions

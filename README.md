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



## Assumptions

Length of name, role and attributes is shorter than std::string::max_size<br/>
The ID and salary is larger or equal to 0 and smaller than std::numeric_limits<int>::max()<br/>
The edits made satisfy the above assumptions

/*
================================================================================
                        SQL LEARNING GUIDE
================================================================================

SQL (Structured Query Language) is a standard language for accessing and 
manipulating databases.

RDBMS (Relational Database Management System) is the basis for SQL, and for 
all modern database systems such as:
- MS SQL Server
- IBM DB2
- Oracle
- MySQL
- Microsoft Access

================================================================================
                    1. DATABASE BASICS
================================================================================
*/

-- Create a new database
CREATE DATABASE SchoolDB;
CREATE DATABASE collegeDB;

-- Drop (delete) a database
DROP DATABASE SchoolDB;

-- Select database to work with
USE collegeDB;

/*
================================================================================
                    2. DATA TYPES IN SQL
================================================================================

NUMERIC DATA TYPES:
- INT:        Stores integers
- FLOAT:      Stores floating-point numbers
- DOUBLE:     Stores large floating-point numbers
- DECIMAL:    Stores fixed-point decimal numbers

STRING DATA TYPES:
- CHAR(n):         Fixed-length string (n characters)
- VARCHAR(n):      Variable-length string (max n characters)
- TEXT:            Large text data
  * Difference: CHAR is fixed length, VARCHAR is variable length

BLOB (BINARY LARGE OBJECT):
- Used for storing large amounts of binary data (images, audio, video files)

OTHER NUMERIC TYPES:
- BIGINT:    Stores very large integer values
- BIT:       Stores binary values (0 or 1)
- BOOLEAN:   Stores TRUE or FALSE values

DATE AND TIME DATA TYPES:
- DATE:       Stores date in 'YYYY-MM-DD' format
- TIME:       Stores time
- DATETIME:   Stores date and time
- TIMESTAMP:  Stores timestamp values

SIGNED VS UNSIGNED:
- SIGNED:     Can store both positive and negative values (default)
- UNSIGNED:   Can store only positive values

================================================================================
                    3. SQL COMMANDS CLASSIFICATION
================================================================================

DDL (DATA DEFINITION LANGUAGE) - Define structure:
├── CREATE:   Create databases and tables
├── ALTER:    Modify structure of existing tables
├── DROP:     Delete databases and tables
├── TRUNCATE: Delete all records (keep table structure)
└── RENAME:   Rename tables

DML (DATA MANIPULATION LANGUAGE) - Manipulate data:
├── INSERT:   Insert records into a table
├── UPDATE:   Modify existing records
└── DELETE:   Delete records from a table

DQL (DATA QUERY LANGUAGE) - Retrieve data:
└── SELECT:   Retrieve records from tables ⭐ IMPORTANT

DCL (DATA CONTROL LANGUAGE) - Control access:
├── GRANT:    Give privileges to users
└── REVOKE:   Take back privileges from users

TCL (TRANSACTION CONTROL LANGUAGE) - Manage transactions:
├── COMMIT:      Save transactions
├── ROLLBACK:    Undo transactions
├── SAVEPOINT:   Set point for rollback
└── SET TRANSACTION: Set transaction properties

================================================================================
                    4. SQL CONSTRAINTS
================================================================================

Constraints are rules that can be applied to data in a table:

NOT NULL:      Ensures a column cannot have NULL values
UNIQUE:        Ensures all values in a column are unique
PRIMARY KEY:   Uniquely identifies each record in a table
FOREIGN KEY:   References the primary key of another table
CHECK:         Ensures values in a column satisfy a condition
DEFAULT:       Sets a default value for a column

================================================================================
                    5. BASIC TABLE CREATION & OPERATIONS
================================================================================
*/

-- Create table with basic structure
CREATE TABLE STUDENT (
    ID INT PRIMARY KEY,              -- PRIMARY KEY uniquely identifies each record
    Name VARCHAR(50),                -- VARCHAR(50) - max 50 characters
    Age INT NOT NULL                 -- NOT NULL - value must be provided
);

-- Insert single records
INSERT INTO STUDENT(ID, Name, Age) VALUES(1, 'Rehan', 22);
INSERT INTO STUDENT(ID, Name, Age) VALUES(2, 'Arafat', 23);

-- Insert multiple records at once
INSERT INTO STUDENT(ID, Name, Age) VALUES
(3, 'Sakib', 24),
(4, 'Rafi', 22),
(5, 'Jahid', 23);

-- Select all records from a table
SELECT * FROM STUDENT;

-- Create database if not exists
CREATE DATABASE IF NOT EXISTS COLLAGEDB;

/*
================================================================================
                    6. KEYS IN SQL
================================================================================
*/

-- PRIMARY KEY: Uniquely identifies each record
-- Can be SINGLE (one column) or COMPOSITE (multiple columns)

-- Single Primary Key Example
CREATE TABLE EMPLOYEE (
    ID INT PRIMARY KEY,
    NAME VARCHAR(255),
    SALARY INT
);

INSERT INTO EMPLOYEE(ID, NAME, SALARY) VALUES
(1, 'ADAM', 25000),
(2, 'BOB', 30000);

SELECT * FROM EMPLOYEE;

-- COMPOSITE PRIMARY KEY (Multiple columns as key)
CREATE TABLE DEPARTMENT (
    DEPT_ID INT,
    DEPT_NAME VARCHAR(255),
    PRIMARY KEY(DEPT_ID, DEPT_NAME)  -- Combination must be unique
);

-- FOREIGN KEY: References primary key of another table
CREATE TABLE PROJECT (
    DEPT_ID INT,
    FOREIGN KEY(DEPT_ID) REFERENCES DEPARTMENT(DEPT_ID)
);

/*
================================================================================
                    7. CONSTRAINTS - DETAILED EXAMPLES
================================================================================
*/

-- CHECK Constraint: Ensure values meet condition
CREATE TABLE EMPLOYEE_CHECK (
    ID INT PRIMARY KEY,
    NAME VARCHAR(255),
    SALARY INT CHECK(SALARY >= 0)  -- Salary cannot be negative
);

-- Multiple constraints
CREATE TABLE EMPLOYEE_FULL (
    ID INT PRIMARY KEY,
    NAME VARCHAR(255),
    SALARY INT,
    CONSTRAINT chk_salary CHECK(SALARY >= 0)
);

-- Foreign Key with Cascade Delete/Update
CREATE TABLE EMPLOYEE_CASCADE (
    EMP_ID INT PRIMARY KEY,
    EMP_NAME VARCHAR(255),
    DEPT_ID INT,
    FOREIGN KEY(DEPT_ID) REFERENCES DEPARTMENT(DEPT_ID)
    ON DELETE CASCADE        -- Delete employee if department deleted
    ON UPDATE CASCADE        -- Update DEPT_ID if updated in DEPARTMENT
);

/*
================================================================================
                    8. SELECT STATEMENT
================================================================================
*/

-- Select all columns and all rows
SELECT * FROM STUDENT;

-- Select specific columns
SELECT NAME, MARK FROM STUDENT;

-- Select distinct (unique) values
SELECT DISTINCT CITY FROM STUDENT;

-- Select with WHERE clause (filtering)
SELECT * FROM STUDENT WHERE AGE > 20;
SELECT * FROM STUDENT WHERE MARK >= 53;

-- Combine conditions with AND
SELECT * FROM STUDENT WHERE CITY = 'PATUAKHALI' AND MARK > 53;

/*
================================================================================
                    9. OPERATORS IN SQL
================================================================================
*/

-- ARITHMETIC OPERATORS: +, -, *, /, %
-- Find students with even marks
SELECT * FROM STUDENT WHERE MARK % 2 = 0;

-- COMPARISON OPERATORS: =, !=, <, >, <=, >=
SELECT * FROM STUDENT WHERE AGE >= 21;

-- LOGICAL OPERATORS: AND, OR, NOT
SELECT * FROM STUDENT WHERE CITY = 'DHAKA' OR CITY = 'CHITTAGONG';

-- NOT operator
SELECT * FROM STUDENT WHERE NOT CITY = 'DHAKA';
SELECT * FROM STUDENT WHERE NOT IN ('DHAKA', 'CHITTAGONG');

-- BETWEEN operator: Values within a range
SELECT * FROM STUDENT WHERE MARK BETWEEN 50 AND 60;

-- IN operator: Match values from a list
SELECT * FROM STUDENT WHERE CITY IN('DHAKA', 'CHITTAGONG', 'PATUAKHALI');

-- LIMIT clause: Limit number of results
SELECT * FROM STUDENT LIMIT 5;

/*
================================================================================
                    10. ORDER BY CLAUSE - SORTING
================================================================================
*/

-- Sort by mark in descending order (highest first)
SELECT * FROM STUDENT ORDER BY MARK DESC;

-- Sort by name in ascending order (alphabetical)
SELECT * FROM STUDENT ORDER BY NAME ASC;
-- Sort by name in ascending order (alphabetical)
SELECT * FROM STUDENT ORDER BY NAME ASC;

/*
================================================================================
                    11. AGGREGATE FUNCTIONS
================================================================================

Aggregate functions perform calculations on a set of values and return a 
single value.
*/

-- COUNT(): Returns number of rows matching a condition
SELECT COUNT(*) FROM STUDENT;                    -- Total number of students
SELECT COUNT(DISTINCT CITY) FROM STUDENT;        -- Number of distinct cities

-- SUM(): Returns sum of numeric column
SELECT SUM(MARK) FROM STUDENT;                   -- Total of all marks

-- AVG(): Returns average value of numeric column
SELECT AVG(MARK) FROM STUDENT;                   -- Average mark of students

-- MAX(): Returns maximum value in column
SELECT MAX(MARK) FROM STUDENT;                   -- Highest mark

-- MIN(): Returns minimum value in column
SELECT MIN(MARK) FROM STUDENT;                   -- Lowest mark

/*
================================================================================
                    12. GROUP BY CLAUSE
================================================================================

GROUP BY groups rows with same values in specified columns into summary rows.
Typically used with aggregate functions.
*/

-- Count students in each city
SELECT CITY, COUNT(*) FROM STUDENT GROUP BY CITY;

-- Average mark in each city
SELECT CITY, AVG(MARK) FROM STUDENT GROUP BY CITY;

-- More complex example with multiple aggregates
SELECT 
    CITY, 
    COUNT(*) AS student_count, 
    AVG(MARK) AS average_mark 
FROM STUDENT 
GROUP BY CITY;

-- Practice Problem: Find average mark in each city, sorted by average
SELECT CITY, AVG(MARK) 
FROM STUDENT 
GROUP BY CITY 
ORDER BY AVG(MARK) ASC;

/*
================================================================================
                    13. HAVING CLAUSE
================================================================================

HAVING clause filters records after GROUP BY execution.
Works like WHERE clause but specifically for aggregate functions.
(WHERE cannot be used with aggregate functions)
*/

-- Find cities with more than 5 students
SELECT CITY, COUNT(*) 
FROM STUDENT 
GROUP BY CITY 
HAVING COUNT(*) > 5;

-- Find cities where average mark is greater than 50
SELECT CITY, AVG(MARK) 
FROM STUDENT 
GROUP BY CITY 
HAVING AVG(MARK) > 50;

-- Why HAVING instead of WHERE?
-- BECAUSE WHERE cannot filter on aggregate functions
-- HAVING is specifically designed for aggregate function conditions

/*
================================================================================
                    14. CLAUSE EXECUTION ORDER
================================================================================

The order in which SQL clauses are executed:

1. FROM       - Select table
2. WHERE      - Filter rows before grouping
3. GROUP BY   - Group rows
4. HAVING     - Filter grouped results
5. SELECT     - Select columns
6. ORDER BY   - Sort results
7. LIMIT      - Limit number of results

Example:
*/

SELECT 
    CITY, 
    AVG(MARK) 
FROM STUDENT
WHERE AGE > 20                    -- Filter before grouping
GROUP BY CITY                     -- Group by city
HAVING AVG(MARK) > 50             -- Filter groups
ORDER BY AVG(MARK) DESC           -- Sort results
LIMIT 5;                          -- Get first 5 results

/*
================================================================================
                    15. UPDATE STATEMENT
================================================================================

Modify existing records in a table.
*/

-- Set safe mode off (to allow updates without WHERE clause)
SET SQL_SAFE_UPDATES = 0;

-- Update specific record
UPDATE STUDENT
SET GRADE = 'A'
WHERE MARK >= 90;

-- Update based on name
UPDATE STUDENT
SET MARK = 90
WHERE NAME = 'REHAN';

-- Update multiple records with condition
UPDATE STUDENT
SET MARK = MARK + 5
WHERE MARK BETWEEN 50 AND 60;

/*
================================================================================
                    16. DELETE STATEMENT
================================================================================

Delete records from a table.
*/

-- Delete specific record
DELETE FROM STUDENT
WHERE ID = 5;

-- Delete multiple records
DELETE FROM STUDENT
WHERE MARK < 40;

-- Delete all records (use TRUNCATE instead - more efficient)
-- DELETE FROM STUDENT;  -- This would delete all records

/*
================================================================================
                    17. TRUNCATE VS DELETE
================================================================================

TRUNCATE: Delete all records but keep table structure
- Faster and uses less resources
- Cannot be rolled back in most databases
- Cannot use WHERE clause

DELETE: Delete specific or all records
- Slower, uses transaction log
- Can be rolled back
- Can use WHERE clause
*/

-- Truncate all records (keep table structure)
TRUNCATE TABLE STUDENT;

/*
================================================================================
                    18. FOREIGN KEY RELATIONSHIPS
================================================================================
*/

-- Department table (referenced table)
CREATE TABLE DEPARTMENT (
    DEPT_ID INT PRIMARY KEY,
    DEPT_NAME VARCHAR(255)
);

-- Employee table with foreign key
CREATE TABLE EMPLOYEE_DEPT (
    EMP_ID INT PRIMARY KEY,
    EMP_NAME VARCHAR(255),
    DEPT_ID INT,
    FOREIGN KEY(DEPT_ID) REFERENCES DEPARTMENT(DEPT_ID)
);

-- Foreign key with CASCADE options
CREATE TABLE EMPLOYEE_WITH_CASCADE (
    EMP_ID INT PRIMARY KEY,
    EMP_NAME VARCHAR(255),
    DEPT_ID INT,
    FOREIGN KEY(DEPT_ID) REFERENCES DEPARTMENT(DEPT_ID)
    ON DELETE CASCADE        -- Auto-delete employees if department deleted
    ON UPDATE CASCADE        -- Auto-update DEPT_ID if updated in DEPARTMENT
);

/*
================================================================================
                    19. ALTER TABLE
================================================================================

Modify table structure after creation.
*/

-- Add a new column
ALTER TABLE STUDENT
ADD COLUMN GRADE VARCHAR(2);

-- Drop (remove) a column
ALTER TABLE STUDENT
DROP COLUMN GRADE;

-- Modify column data type
ALTER TABLE STUDENT
MODIFY COLUMN NAME VARCHAR(100);

-- Rename a table
ALTER TABLE STUDENT
RENAME TO PUPIL;

-- Rename a column
ALTER TABLE STUDENT
CHANGE COLUMN MARK SCORE INT;

/*
================================================================================
                    20. SQL JOINS
================================================================================

JOINS combine rows from two or more tables based on related columns.
Different types of joins retrieve different combinations of rows.
*/

-- INNER JOIN: Returns only matching records from both tables
SELECT *
FROM STUDENT
INNER JOIN DEPARTMENT
ON STUDENT.DEPT_ID = DEPARTMENT.DEPT_ID;

-- LEFT JOIN: Returns all rows from left table + matching from right
SELECT *
FROM STUDENT
LEFT JOIN DEPARTMENT
ON STUDENT.DEPT_ID = DEPARTMENT.DEPT_ID;

-- RIGHT JOIN: Returns all rows from right table + matching from left
SELECT *
FROM STUDENT
RIGHT JOIN DEPARTMENT
ON STUDENT.DEPT_ID = DEPARTMENT.DEPT_ID;

-- FULL JOIN: Returns all rows from both tables
-- (Simulate FULL JOIN using LEFT JOIN + RIGHT JOIN with UNION)
SELECT *
FROM STUDENT
LEFT JOIN DEPARTMENT
ON STUDENT.DEPT_ID = DEPARTMENT.DEPT_ID
UNION
SELECT *
FROM STUDENT
RIGHT JOIN DEPARTMENT
ON STUDENT.DEPT_ID = DEPARTMENT.DEPT_ID;

-- LEFT EXCLUSIVE JOIN: Rows in left table with no match in right
SELECT *
FROM STUDENT
LEFT JOIN DEPARTMENT
ON STUDENT.DEPT_ID = DEPARTMENT.DEPT_ID
WHERE DEPARTMENT.DEPT_ID IS NULL;

-- RIGHT EXCLUSIVE JOIN: Rows in right table with no match in left
SELECT *
FROM STUDENT
RIGHT JOIN DEPARTMENT
ON STUDENT.DEPT_ID = DEPARTMENT.DEPT_ID
WHERE STUDENT.DEPT_ID IS NULL;

/*
================================================================================
                    21. SELF JOIN
================================================================================

A table is joined with itself to combine rows with related data.
Useful when data relationships are within the same table.
*/

-- Example: Find employees and their managers (both in EMPLOYEE table)
SELECT 
    A.EMP_NAME AS Employee,
    B.EMP_NAME AS Manager
FROM EMPLOYEE AS A
INNER JOIN EMPLOYEE AS B
ON A.MANAGER_ID = B.EMP_ID;

-- Use case: When employees and managers are stored in same table

/*
================================================================================
                    22. UNION
================================================================================

UNION combines result sets from two or more SELECT statements.
*/

-- Combine results from two queries
SELECT NAME, MARK 
FROM STUDENT 
WHERE CITY = 'DHAKA'
UNION
SELECT NAME, MARK 
FROM STUDENT 
WHERE CITY = 'CHITTAGONG';

/*
================================================================================
                    23. SUBQUERIES
================================================================================

A subquery is a query within another query.
Used to return data that will be used by main query.
*/

-- Find students with marks greater than average
SELECT NAME, MARK 
FROM STUDENT
WHERE MARK > (SELECT AVG(MARK) FROM STUDENT);

-- Complex subquery with multiple conditions
SELECT NAME, MARK 
FROM STUDENT
WHERE CITY = 'DHAKA' 
  AND MARK > (SELECT AVG(MARK) FROM STUDENT WHERE CITY = 'DHAKA');

-- Find students with even roll numbers
SELECT NAME, ROLL_NO 
FROM STUDENT
WHERE ROLL_NO % 2 = 0;

-- Subquery with IN operator
SELECT NAME, MARK 
FROM STUDENT
WHERE MARK IN (
    SELECT MARK 
    FROM STUDENT 
    WHERE CITY = 'DHAKA' AND MARK > 70
);

-- Find students with odd roll numbers
SELECT NAME, MARK 
FROM STUDENT
WHERE ROLL_NO IN (
    SELECT ROLL_NO 
    FROM STUDENT 
    WHERE ROLL_NO % 2 = 1
);

/*
================================================================================
                    24. PRACTICE PROBLEMS
================================================================================

Problem 1: Create Employee Database
*/

CREATE DATABASE XYZ;
USE XYZ;

CREATE TABLE EMPLOYEE (
    ID INT PRIMARY KEY,
    NAME VARCHAR(255),
    SALARY INT
);

INSERT INTO EMPLOYEE(ID, NAME, SALARY) VALUES
(1, 'ADAM', 25000),
(2, 'BOB', 30000);

SELECT * FROM EMPLOYEE;

/*
================================================================================
                    QUICK REFERENCE SUMMARY
================================================================================

CONSTRAINT TYPES:
✓ NOT NULL      - Ensures column has a value
✓ UNIQUE        - All values must be different
✓ PRIMARY KEY   - Uniquely identifies each row
✓ FOREIGN KEY   - Links to primary key in another table
✓ CHECK         - Ensures values meet a condition
✓ DEFAULT       - Sets default value if none provided

KEY AGGREGATE FUNCTIONS:
✓ COUNT()   - Count rows
✓ SUM()     - Sum values
✓ AVG()     - Average values
✓ MAX()     - Maximum value
✓ MIN()     - Minimum value

JOIN TYPES:
✓ INNER JOIN         - Common records only
✓ LEFT JOIN          - All from left + matching from right
✓ RIGHT JOIN         - All from right + matching from left
✓ FULL JOIN          - All from both tables
✓ LEFT EXCLUSIVE     - Only left records with no right match
✓ RIGHT EXCLUSIVE    - Only right records with no left match

================================================================================
*/

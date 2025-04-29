
# C Programming - Conditionals (`if`, `else`, `else if`, `switch`)

## 1. What are Conditionals?

Conditionals are used to make decisions in a C program. They allow a program to execute different blocks of code depending on whether a condition is **true** or **false**.

---

## 2. `if` Statement

Executes a block of code if a specified condition is true.

```c
if (condition) {
    // code to be executed if condition is true
}
```

**Example:**
```c
int number = 10;
if (number > 0) {
    printf("The number is positive.\n");
}
```

---

## 3. `if-else` Statement

Executes one block if the condition is true, another if it is false.

```c
if (condition) {
    // code if condition is true
} else {
    // code if condition is false
}
```

**Example:**
```c
int number = -5;
if (number >= 0) {
    printf("Non-negative number.\n");
} else {
    printf("Negative number.\n");
}
```

---

## 4. `else if` Ladder

Tests multiple conditions sequentially.

```c
if (condition1) {
    // code if condition1 is true
} else if (condition2) {
    // code if condition2 is true
} else {
    // code if none of the conditions are true
}
```

**Example:**
```c
int marks = 85;
if (marks >= 90) {
    printf("Grade A\n");
} else if (marks >= 80) {
    printf("Grade B\n");
} else if (marks >= 70) {
    printf("Grade C\n");
} else {
    printf("Grade F\n");
}
```

---

## 5. Nested `if`

An `if` statement inside another `if` or `else` block.

```c
if (condition1) {
    if (condition2) {
        // code if both conditions are true
    }
}
```

**Example:**
```c
int age = 20;
int hasID = 1;
if (age >= 18) {
    if (hasID) {
        printf("You can enter.\n");
    } else {
        printf("ID is required.\n");
    }
} else {
    printf("You are underage.\n");
}
```

---

## 6. `switch` Statement

Simplifies choosing between many possible values of a variable.

```c
switch (expression) {
    case value1:
        // code to execute if expression == value1
        break;
    case value2:
        // code to execute if expression == value2
        break;
    default:
        // code if expression doesn't match any case
}
```

**Example:**
```c
int day = 3;
switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Invalid day\n");
}
```

---

## 📌 Important Tips

- **Comparison Operators**:  
  `==` (equal), `!=` (not equal), `>` (greater), `<` (less), `>=` (greater or equal), `<=` (less or equal)
  
- **Logical Operators**:  
  `&&` (AND), `||` (OR), `!` (NOT)
  
- Always use `break;` in `switch` cases to prevent *fall-through* (unless fall-through is intended).
- Be careful:  
  `=` is assignment,  
  `==` is comparison.

---

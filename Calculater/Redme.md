# Simple Calculator Program

A beginner-friendly C calculator that performs basic arithmetic operations.

## Features

- ✅ **Addition (+)** - Add two numbers
- ✅ **Subtraction (-)** - Subtract two numbers
- ✅ **Multiplication (*)** - Multiply two numbers
- ✅ **Division (/)** - Divide two numbers
- ✅ **Division by Zero Handling** - Prevents errors when dividing by zero
- ✅ **User-Friendly Interface** - Clear prompts and formatted output
- ✅ **Switch-Case Implementation** - Clean code structure using switch statements

## Program Structure

```
calculator.c
├── Variable declarations (num1, num2, result, operation)
├── User input prompts
├── Switch-case for operations
│   ├── Addition
│   ├── Subtraction
│   ├── Multiplication
│   ├── Division (with zero check)
│   └── Invalid operation handling
└── Output display
```

## How to Use

### Prerequisites
You need a C compiler installed. Download one of the following:
- **MinGW** (Windows): https://www.mingw-w64.org/
- **GCC** (Linux/Mac)
- **Online Compiler**: https://www.onlinegdb.com/

### Compilation

```bash
gcc calculator.c -o calculator.exe
```

### Running the Program

```bash
./calculator.exe
```

Or simply:

```bash
calculator.exe
```

### Example Run

```
======================================
   WELCOME TO SIMPLE CALCULATOR
======================================

Enter the first number: 10
Enter the second number: 5

Choose an operation:
  + for Addition
  - for Subtraction
  * for Multiplication
  / for Division
Enter your choice: +

10.00 + 5.00 = 15.00
======================================
       Thank you for using Calculator
======================================
```

## Code Features

- **Clear Comments** - Every section is well-commented for beginners
- **Input Validation** - Handles division by zero and invalid operations
- **Formatted Output** - Results displayed with 2 decimal places
- **Switch-Case Statement** - Demonstrates proper use of switch for multiple choices

## Supported Operations

| Operation | Symbol | Example |
|-----------|--------|---------|
| Addition | + | 5 + 3 = 8 |
| Subtraction | - | 5 - 3 = 2 |
| Multiplication | * | 5 * 3 = 15 |
| Division | / | 15 / 3 = 5 |

## Error Handling

- **Division by Zero**: Program displays error message and prevents calculation
- **Invalid Operation**: Program shows error if user enters an unsupported operation

## Author

Created as a beginner C programming exercise

## License

Free to use and modify

# Simplelang

## Language Description

**SimpleLang**: A Basic High-Level Language for an 8-bit CPU 

**Introduction**: SimpleLang is a minimalistic high-level language designed to run on an 8-bit CPU. It includes basic constructs such as variable declarations, assignments, arithmetic operations, and conditional statements, but it does not include loops. This language aims to be easy to understand and implement for educational purposes. 

**Language Constructs**:

1. Variable Declaration 
• Syntax: int ; 
• Example: int a; 

2. Assignment 
• Syntax: = ; 
• Example: a = b + c; 

3. Arithmetic Operations 
• Supported operators: +, - 
• Example: a = b - c; 
 
4. Conditionals 
• Syntax: if () { } 
• Example: if (a == b) { a = a + 1; } 


**Example Program in SimpleLang**

// Variable declaration 
int a;
int b; 
int c; 

// Assignment 
a = 10; 
b = 20; 
c = a + b; 

// Conditional 
if (c == 30) { 
 c = c + 1; 
} 

## Objective

Create a compiler that translates SimpleLang code into assembly code for the 8-bit CPU. 

## Task List

1. Setup the 8-bit CPU Simulator 
• Clone the 8-bit CPU repository from https://github.com/lightcode/8bit-computer. 
• Read through the README.md to understand the CPU architecture and its instruction set. 
• Run the provided examples to see how the CPU executes assembly code. 

2. Understand the 8-bit CPU Architecture 
• Review the Verilog code in the rtl/ directory, focusing on key files such as machine.v. 
• Identify the CPU’s instruction set, including data transfer, arithmetic, logical, branching, machine control, I/O, and stack operations. 

3. Design a Simple High-Level Language (SimpleLang) 
• Define the syntax and semantics for variable declarations, assignments, arithmetic operations, and conditionals. 
• Document the language constructs with examples. 

4. Create a Lexer 
• Write a lexer in C/C++ to tokenize SimpleLang code. 
• The lexer should recognize keywords, operators, identifiers, and literals. 

5. Develop a Parser 
• Implement a parser to generate an Abstract Syntax Tree (AST) from the tokens. 
• Ensure the parser handles syntax errors gracefully. 

6. Generate Assembly Code 
• Traverse the AST to generate the corresponding assembly code for the 8-bit CPU. 
• Map high-level constructs to the CPU’s instruction set (e.g., arithmetic operations to add, sub). 

7. Integrate and Test 
• Integrate the lexer, parser, and code generator into a single compiler program. 
• Test the compiler with SimpleLang programs and verify the generated assembly code by running it on the 8-bit CPU simulator. 

8. Documentation and Presentation 
• Document the design and implementation of the compiler. 
• Prepare a presentation to demonstrate the working of the compiler and explain design choices. 

## Task Status

- [ ] Lexer
- [ ] Parser
- [ ] Code Generation


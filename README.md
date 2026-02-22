# Number Base Converter (Qt + C++)

## Overview

Number Base Converter is a desktop application developed using C++ and the Qt framework.  
The application converts numbers between four major number systems:

- Decimal (Base 10)
- Binary (Base 2)
- Octal (Base 8)
- Hexadecimal (Base 16)

The project was initially implemented as a terminal-based C++ program and later redesigned as a GUI-based Qt application. This demonstrates both algorithmic implementation and event-driven interface development.

---

## 📸 Application Preview

<!-- INSERT SCREENSHOT BELOW -->
<!-- Save your screenshot inside a folder named "screenshots" -->
<!-- Example path: screenshots/app_preview.png -->

![Application Screenshot](screenshots/app_preview.png)

---

## Features

- Conversion between Decimal, Binary, Octal, and Hexadecimal
- Dropdown-based base selection
- Button-triggered conversion using Qt signal–slot mechanism
- Read-only output field to prevent modification
- Input validation for invalid base entries
- Modular helper functions for conversion logic
- Built using C++17 and Qt Widgets

---

## Application Architecture

### Design Approach

The application follows a normalized conversion model:

1. The input value is first converted to **Decimal** (internal representation).
2. The Decimal value is then converted to the selected target base.

This approach avoids redundant conversion combinations and simplifies logic design.

---

### Event Flow

1. User enters a value in the input field.
2. User selects input base and output base.
3. Clicking the **Convert** button triggers a slot function.
4. Input is validated.
5. Conversion is performed.
6. Result is displayed in the output field.

The application uses Qt’s signal–slot mechanism to handle user interaction.

---

## Conversion Logic

### Manual Algorithm

Binary conversion from Decimal uses the classical division–remainder method:

- Repeated division by 2
- Remainder prepended to result string
- Continues until quotient becomes zero

This demonstrates understanding of fundamental base conversion logic.

---

### Base-Aware Parsing

For Octal and Hexadecimal conversions, Qt’s built-in base conversion functions are used:

- `QString::toInt(&ok, base)`
- `QString::number(value, base)`

Validation is handled using the boolean status flag.

---

## Project Structure

- `main.cpp` – Application entry point
- `mainwindow.h` – Main window class declaration
- `mainwindow.cpp` – GUI logic and conversion implementation
- `mainwindow.ui` – Interface layout designed using Qt Designer
- `NumberConverter.pro` – Qt project configuration file

---

## Terminal Version (Core Implementation)

The file `conversion.cpp` contains the original console-based implementation of the number base converter.

This version:

- Runs in the terminal
- Uses menu-driven interaction
- Implements separate classes for Decimal, Binary, Octal, and Hexadecimal
- Includes manual input validation
- Demonstrates object-oriented structuring of conversion logic

Note:  
`conversion.cpp` is a standalone program and is not directly integrated with the Qt GUI version. It represents the core algorithmic foundation from which the GUI version was developed.

---

## Technologies Used

- C++
- Qt Framework (Qt Widgets)
- Object-Oriented Programming
- Event-Driven Programming
- C++17 Standard

---

## How to Run

### Running the Qt Version

1. Open the project in Qt Creator.
2. Build the project.
3. Run the application.
4. Enter value, select bases, and click Convert.

---

### Running the Terminal Version

1. Compile the program:
   g++ conversion.cpp -o converter
2. Run:
   ./converter
3. Follow the menu prompts.

---

## Learning Outcomes

- Implementation of number system conversion algorithms
- Understanding of division–remainder conversion method
- Input validation techniques
- GUI development using Qt Designer
- Signal–slot based event handling
- Transition from console-based to GUI-based architecture

---

## Future Enhancements

- Support for negative numbers
- Support for larger integer ranges (long long)
- Real-time conversion without button click
- Improved UI styling and layout design
- Exception-based error handling

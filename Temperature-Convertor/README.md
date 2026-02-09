# Temperature Converter

A menu-driven temperature conversion program written in C that converts values between Celsius, Fahrenheit, and Kelvin.

## Features
- Celsius → Fahrenheit
- Fahrenheit → Celsius
- Celsius → Kelvin
- Kelvin → Celsius
- Clear menu-based user interaction
- Accurate results with floating-point precision

## How It Works
The program displays a menu of conversion options.  
Based on the user’s choice, it takes the temperature input and uses dedicated functions to perform the selected conversion.

Each conversion logic is implemented using separate functions for better readability and modularity.

## How to Run

```bash
gcc temperature_converter.c -o temp_converter
```
```bash
./temp_converter
```

## Concepts Used
- Functions
- `switch` case
- Floating-point calculations
- User input with `scanf`
- Modular programming
- Mathematical formulas

## Learning Outcome
- This project helped me understand how to:
- Break logic into reusable functions
- Work with real-world formulas
- Build clean, menu-driven programs in C

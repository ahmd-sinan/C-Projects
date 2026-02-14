# Password Strength Checker

A simple Password Strength Checker built using C language to evaluate how strong a password is based on common security rules

## Features
- Checks password length
- Detects:
- Lowercase letters
- Uppercase letters
- Digits
- Special characters
- Identifies common/weak passwords
- Calculates a strength score
- Classifies password as: ❌ Weak or ⚠️ Medium or ✅ Strong

## Strength Rules (Logic Used)
| Condition |	Effect |
| :--- | :--- |
| Length ≥ 8 | +1 |
| Length ≥ 12	| +1 |
| Contains lowercase | +1 |
| Contains uppercase | +1 |
| Contains digit | +1 |
| Contains special character | +1 |
| Common password detected | −2 |

## Concepts Used
- `fgets()` for safe input
- `strlen()` for length checking
- `ctype.h` functions: `islower()`, `isupper()`, `isdigit()`, `isalnum()`
- `strcmp()` for detecting common passwords
- Loops & conditional logic

## How to Run
```bash
gcc password_checker.c -o password_checker
./password_checker
```

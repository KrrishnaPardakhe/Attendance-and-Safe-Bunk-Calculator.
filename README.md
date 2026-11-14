# 75% College Attendance & Safe Bunk Calculator

A simple program written in C that helps students track their attendance percentage against the mandatory 75% university requirement. Based on total and attended classes, it calculates either how many upcoming classes can be safely skipped or how many consecutive classes must be attended to recover from low attendance.

## How to Run
1. Download `attendanceandsafebunkcalc.c`.
2. Compile the program using GCC:
   ```bash
   gcc attendanceandsafebunkcalc.c -o attendance_calculator
   
 Run the executable:
 ./attendance_calculator
 ```

## What Broke & How I Fixed It
Initially, dividing `attendedClasses / totalClasses` performed integer division in C, which truncated the result to `0` and always printed `0.00%` attendance. I fixed this by multiplying by `100.0` (a floating-point literal) before dividing so C evaluates the exact decimal percentage accurately.

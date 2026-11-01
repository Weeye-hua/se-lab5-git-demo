# Student Score Demo

A small C project for Software Engineering Lab 5 Git exercises.

The initial program prints the report title, student count and average score.
The helper module also provides maximum, minimum and passing-count functions
for later changes to main.c.

## Files

- main.c: program entry point and report output
- score.c: score calculation functions
- score.h: declarations shared by the source files
- notes.txt: a tracked file to remove during the deletion exercise

## Build and run in PowerShell

```powershell
New-Item -ItemType Directory -Force -Path .\build | Out-Null
gcc -std=c11 -Wall -Wextra -pedantic .\main.c .\score.c -o .\build\score_demo.exe
.\build\score_demo.exe
```

Input scores: 78, 92, 85, 46, 90.
Initial expected count: 5. Initial expected average: 78.20.

Generated executables and object files are excluded from version control.

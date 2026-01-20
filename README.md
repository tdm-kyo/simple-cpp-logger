# Simple C++ Logger

A simple **C++ logger** that saves to a `.txt` file the **last access date and time**
(day and hour) of a PC.

The program is designed to run **automatically at system startup** on Windows.

---

## Features

- Logs date and time of each access
- Saves data to a `.txt` file
- Lightweight and simple
- Runs at Windows startup

---

## How to Run at Startup (Windows)

You can add the executable to Windows startup using the **Command Prompt**.

Open **CMD as Administrator** and run:

```cmd
reg add HKCU\Software\Microsoft\Windows\CurrentVersion\Run ^
 /v NomeApp ^
 /t REG_SZ ^
 /d "PATH" ^
 /f

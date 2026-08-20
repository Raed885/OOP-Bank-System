# Project — Bank System (OOP)

## Description

The **Bank System (OOP)** project is a console-based banking application written in C++. It models common banking operations through a structured object-oriented design rather than a single procedural program.

The project was developed as a practical exercise in converting programming concepts into a maintainable application. Its classes separate people, users, bank clients, screens, validation, and file-based persistence so that new features can be added without rewriting the entire system.

## Project Objectives

The main objectives of this project are to:

- Apply the four pillars of object-oriented programming: encapsulation, abstraction, inheritance, and polymorphism.
- Build a reusable domain model for users and bank clients.
- Separate presentation screens from business operations and data storage.
- Implement practical CRUD operations for users and clients.
- Practice validation, file handling, permissions, and transaction workflows.
- Design a console application that can be extended incrementally.

## System Overview

The application provides a simple banking workflow with the following capabilities:

- User login and authentication.
- User management with permission flags.
- Adding, listing, finding, updating, and deleting bank clients.
- Depositing and withdrawing money.
- Displaying client balances and total balances.
- Recording login activity in an audit file.
- Reusing common date, string, input-validation, and screen functionality.

All bundled records are **fictional demo data** created for this public repository. The demonstration login is `demo.admin` with password `demo123`.

## Architecture

```text
Bank System
├── Domain Model
│   ├── clsPerson
│   ├── clsUser
│   └── clsBankClient
├── Presentation Layer
│   ├── clsLoginScreen
│   ├── clsMainScreen
│   ├── clsManageUsersScreen
│   ├── clsClientListScreen
│   └── Transaction and client screens
├── Shared Utilities
│   ├── clsDate
│   ├── clsString
│   ├── clsInputValidate
│   └── clsUtil
└── File-Based Storage
    ├── Users.txt
    ├── Clients.txt
    └── LoginRegister.txt
```

The base classes provide shared behavior, while specialized screen classes handle individual user interactions. The application stores its demonstration data in text files using a delimiter-based record format.

## Technologies Used

- **C++** for the application implementation.
- **Object-oriented design** using inheritance, encapsulation, and reusable classes.
- **File-based persistence** using standard C++ streams.
- **Visual Studio solution and project files** for building the console application.
- **Console-based user interface** with validation and menu-driven navigation.

## Features Implemented

| Feature | Description | Main concepts practiced |
| --- | --- | --- |
| Authentication | Login workflow with repeated login attempts and audit logging. | Encapsulation, file handling |
| User management | Add, list, find, update, and delete system users. | CRUD, permissions |
| Client management | Add, list, find, update, and delete bank clients. | Classes, persistence |
| Deposits and withdrawals | Update client balances through transaction screens. | Business rules, validation |
| Total balances | Calculate and display aggregate client balances. | Collections, aggregation |
| Shared screens | Reuse common display behavior through base screen classes. | Inheritance, abstraction |

## Key Takeaways

This project demonstrates how an application becomes easier to maintain when responsibilities are divided between focused classes. The `clsPerson` base class provides common identity information, while `clsUser` and `clsBankClient` extend it with role-specific behavior.

The screen classes keep user interaction separate from the domain model. File-handling methods encapsulate persistence details, allowing the rest of the application to work with objects instead of raw text records.

## How to Run

1. Open `Lesson #01 - Find Client.sln` in Visual Studio on Windows.
2. Build the solution using the available C++ configuration.
3. Run the console application from the project directory so that the relative data files can be found.
4. Use the demo credentials `demo.admin` and `demo123` to enter the system.

## Final Notes

This repository represents a practical OOP banking application built around incremental learning. It is intentionally educational and uses local text files rather than a production database or real authentication service. The demo data must not be treated as real financial information.

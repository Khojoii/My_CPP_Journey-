<div align="center">

#  C++ Learning Path — Day 03

**Author:** M.Khojoii

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/status-in%20progress-yellow?style=for-the-badge)
![Day](https://img.shields.io/badge/day-03-blue?style=for-the-badge)

</div>

---

## 📌 Table of Contents
- [Function Structure](#-function-structure)
- [Types](#-types)
- [Variables](#-variables)
- [Executing a C++ Program](#-executing-c-program)
- [Input / Output](#-input--output)
- [iostream Objects](#-iostream-objects)
- [Namespace](#-namespace)

---

> [!IMPORTANT]
> Every C++ program contains one or more functions, one of which must be named
> `main`. The operating system runs a C++ program by calling `main`.

---

## 🔧 Function Structure

A function in C++ is made up of **4 core parts**:

| # | Part | Description |
|---|------|-------------|
| 1️⃣ | Return type | The type of value the function gives back |
| 2️⃣ | Function name | The identifier used to call the function |
| 3️⃣ | Parameters | Inputs to the function (can be empty `()`) |
| 4️⃣ | Function body | The code block `{ }` that does the work |

Here's a simple function that does nothing but return a value to the OS:

```cpp
int main()
{
    return 0;
}
```

> `return` is a statement that **terminates** the function and passes the given value back to the caller.

> [!NOTE] **Semicolon**
> Note the semicolon at the end of the `return` statement. Semicolons mark
> the end of most statements in C++. They're easy to overlook but, when
> forgotten, can lead to mysterious compiler error messages. 🐛

---

## 🧩 Types

Types (data types) are one of the most important concepts in every programming language.
A type defines **two things**:

1. The **content** of a piece of data
2. The **operations** that can be performed on that data

### Common C++ Types

| Type     | Description                                                                 |
|----------|-------------------------------------------------------------------------------|
| `int`    | Stores integers (whole numbers), without decimals — e.g. `123` or `-123`      |
| `double` | Stores floating point numbers, with decimals — e.g. `19.99` or `-19.99`       |
| `char`   | Stores a single character — e.g. `'a'` or `'B'` (single quotes)               |
| `string` | Stores text — e.g. `"Hello World"` (double quotes)                            |
| `bool`   | Stores two possible states: `true` or `false`                                 |

---

##  Variables

The data we work with in a program is stored in **variables**, and every variable has a type.

**Pattern:** `type` → `name` → `=` → `value`

```cpp
int my_number = 222;
```

---

##  Executing a C++ Program

C++ is a **compiled language** — the code we write must be compiled into a language
the computer understands. Because of this, we need a compiler such as **GCC**.

---

##  Input / Output

> [!INFO]
> There's no built-in I/O syntax in C++ itself. Instead, C++ uses the standard
> library header:
> ```cpp
> #include <iostream>
> ```

`iostream` provides two streams:

- **Input stream** (`istream`)
- **Output stream** (`ostream`)

A *stream* is a sequence of characters read from or written to an I/O device.
The term suggests that characters are generated, or consumed, **sequentially over time**.

---

##  iostream Objects

This library defines **4 objects**:

| Object | Purpose |
|--------|---------|
| `cin`  | Standard **input** |
| `cout` | Standard **output** |
| `cerr` | Warning & **error** messages |
| `clog` | General program **logging/info** |

###  Example — Adding Two Numbers

```cpp
#include <iostream>

int main() {
    std::cout << "adding 2 numbers" << std::endl;

    int n1 = 0;
    int n2 = 0;

    std::cout << "enter the first number: ";
    std::cin >> n1;

    std::cout << "enter the second number: ";
    std::cin >> n2;

    std::cout << "the sum of " << n1 << " and " << n2
               << " is : " << n1 + n2 << std::endl;
}
```

- `cout << "value"` → prints the value to the console
- `std::endl` → a **manipulator** that ends the line (so the next input/output starts fresh)
- `cin >> variable` → reads a value from the user and stores it in the variable (here: `n1`, `n2`)

**🖥️ Output:**

```text
adding 2 numbers
enter the first number: 12345
enter the second number: 54321
the sum of 12345 and 54321 is : 66666
```

---

##  Namespace

> [!NOTE]
> Namespaces allow us to avoid inadvertent collisions between the names we
> define and uses of those same names inside a library. All the names defined
> by the standard library live inside the `std` namespace.

---

<div align="center">

⬅️ [Day 02](#) &nbsp;|&nbsp; [Day 04](#) ➡️

</div>

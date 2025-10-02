/*
Data Types in C++

In C++ in order to use a vraible you need to declare it first using its datatype and you cannot declare one variable twice in C++.
Also remember every block has its own scope. so variable defined inside a lower block will not work in upper block.

There are give main data types with their notion and memory allocation : 

Perfect 👍 You want a **compact reference table** for C++ built-in data types: their **name**, **syntax (symbol)**, **typical memory size**, and **purpose**.
(Remember: sizes can vary by system & compiler, but I’ll give the most common on modern 32/64-bit systems using GCC/Clang/MSVC).

---

## 🔹 **C++ Fundamental Data Types**

| **Data Type** | **Declaration Symbol** | **Typical Size** | **Purpose / Usage**                                                                          |
| ------------- | ---------------------- | ---------------- | -------------------------------------------------------------------------------------------- |
| `bool`        | `bool flag;`           | 1 byte           | Stores `true` or `false`.                                                                    |
| `char`        | `char c;`              | 1 byte (8 bits)  | Stores a single character (ASCII value). Range: −128 to 127 (signed) or 0 to 255 (unsigned). |
| `wchar_t`     | `wchar_t wc;`          | 2 or 4 bytes     | Wide character set (Unicode).                                                                |
| `char16_t`    | `char16_t c16;`        | 2 bytes          | UTF-16 characters.                                                                           |
| `char32_t`    | `char32_t c32;`        | 4 bytes          | UTF-32 characters.                                                                           |

---

### 🔹 **Integer Types**

| **Data Type**        | **Symbol**                | **Typical Size** | **Purpose**                                            |
| -------------------- | ------------------------- | ---------------- | ------------------------------------------------------ |
| `short`              | `short s;`                | 2 bytes          | Small integers (−32,768 to 32,767).                    |
| `unsigned short`     | `unsigned short us;`      | 2 bytes          | Small positive integers (0 to 65,535).                 |
| `int`                | `int i;`                  | 4 bytes          | General integer (−2.1B to 2.1B). Default integer type. |
| `unsigned int`       | `unsigned int ui;`        | 4 bytes          | Non-negative integers (0 to 4.2B).                     |
| `long`               | `long l;`                 | 4 or 8 bytes     | Larger integer (system-dependent).                     |
| `unsigned long`      | `unsigned long ul;`       | 4 or 8 bytes     | Non-negative large integers.                           |
| `long long`          | `long long ll;`           | 8 bytes          | Very large integer (±9 quintillion).                   |
| `unsigned long long` | `unsigned long long ull;` | 8 bytes          | Non-negative very large integers.                      |

---

### 🔹 **Floating-Point Types**

| **Data Type** | **Symbol**        | **Typical Size**                         | **Purpose**                                                                  |
| ------------- | ----------------- | ---------------------------------------- | ---------------------------------------------------------------------------- |
| `float`       | `float f;`        | 4 bytes                                  | Single precision decimal (~7 digits accuracy).                               |
| `double`      | `double d;`       | 8 bytes                                  | Double precision decimal (~15 digits accuracy). Default floating-point type. |
| `long double` | `long double ld;` | 8, 12, or 16 bytes (depends on compiler) | Extended precision decimals.                                                 |

---

### 🔹 **Other Important Types**

| **Data Type** | **Symbol**            | **Size**            | **Purpose**                                        |
| ------------- | --------------------- | ------------------- | -------------------------------------------------- |
| `void`        | `void func();`        | N/A                 | Means “no value” (used in functions).              |
| `auto`        | `auto x = 10;`        | Depends             | Compiler deduces type automatically.               |
| `decltype`    | `decltype(expr) var;` | Depends             | Declares variable with type of another expression. |
| `nullptr_t`   | `nullptr`             | 8 bytes (on 64-bit) | Represents the type of `nullptr`.                  |

---

## ✅ Key Notes

* **Signed vs Unsigned:**

  * `signed` = can hold negative + positive values.
  * `unsigned` = only non-negative, larger maximum value.

* **Sizes are not fixed by standard**, only minimums are guaranteed. Use `sizeof(type)` to check actual size on your system.

* **Best practice in modern C++:**

  * Use `int` for general integers.
  * Use `long long` for very large integers.
  * Use `double` for floating-point.
  * Use fixed-width types from `<cstdint>` (`int32_t`, `uint64_t`) when exact size matters (portable code).

---

⚡ Do you want me to also make you a **single cheatsheet diagram** (like a chart showing types, their range, and size) so you can keep it handy for exams or coding?
*/

/*

if you assign a negative number to unsigend it gives you number modulo 2^N where N is size of your data type in bits*/
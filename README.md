# 🛠️ C++ Memory Management & Resource Safety

A deep-dive into low-level C++ memory architecture, exploring the mechanics of Smart Pointers, the Stack/Heap lifecycle, and the differences between Pointers and References.

---

## 🧠 1. Custom Smart Pointer (RAII & Ownership)
In this exercise, I built a custom smart pointer by creating a template class that acts as a secure wrapper for heap memory, ensuring that resources are managed automatically through the principle of RAII. 

* **Automatic Cleanup:** By implementing a destructor that calls `delete`, I guaranteed that memory is freed the moment the pointer goes out of scope, preventing leaks.
* **Exclusive Ownership:** To maintain exclusive ownership, I "killed" the copy constructor to block dangerous duplicates.
* **Move Semantics:** I implemented move semantics via the **&& operator**, which allows me to "steal" the memory address from an old pointer and set it to **nullptr**. 
* **High Performance:** This strategic hand-off ensures that only one object ever owns the data, preventing the "double-free" crash that occurs when the same memory is deleted twice, ultimately turning a risky raw pointer into a safe, high-performance tool.



---

## 📍 2. Pointers vs. References
In this exercise, I went through the core differences between pointers and references:

* **Pointers:** You can have a sum or null, and you can change the value or address the pointer is holding.
* **References:** You must have a value; it cannot be null and it cannot be changed or reassigned once initialized.



---

## 🏗️ 3. Stack vs. Heap
I analyzed the performance and behavior of the two primary memory segments:

* **Stack:** It is faster because it is physically closer in the architecture. I created stack pointers to return the address of the variable, but demonstrated that once a function reaches its closing brace `}`, you can no longer access the data in that place.
* **Heap:** It is slower, but after the function is done, the value can still be reached. 
* **Safety & Risks:** You must manually **delete** heap memory; otherwise, you face memory leaks and eventual crashes. I also explored the "double delete" error where the same memory is freed twice.



---

## 📂 Project Structure
* `SmartPointer/` - Template class with Move Semantics and RAII.
* `PointersRefs/` - Exercises on nullability and reassignment logic.
* `StackHeap/` - Demonstrations of memory scope, lifecycles, and leak prevention.

---
*C++ Systems Programming & Memory Safety Study*

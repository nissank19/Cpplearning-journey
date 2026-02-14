1.
In this exercise, I built a custom smart pointer by creating a template class that acts as a secure wrapper for heap memory, ensuring that resources are managed automatically through the principle of RAII. By implementing a destructor that calls delete, I guaranteed that memory is freed the moment the pointer goes out of scope, preventing leaks. To maintain exclusive ownership, I "killed" the copy constructor to block dangerous duplicates and implemented move semantics via the && operator, which allows me to "steal" the memory address from an old pointer and set it to nullptr. This strategic hand-off ensures that only one object ever owns the data, preventing the "double-free" crash that occurs when the same memory is deleted twice, ultimately turning a risky raw pointer into a safe, high-performance tool.


2.   //POINTERS VS REFERENCES
   in this exercises i went throught the differences between pointers and references, for pointers u can have sum or null and u can change the value, but for references you have to have a value and it cant be null or be changed

3.STACK VS HEAP
stack is faster cz closer heap is slower, created stack pointer to return address of the variable,in stack once function } is reached u cant acess stufff in that place again , but for heap after function is done value still can be reached BUT you have to delete otherwise memory leak and crash eventually, you can also get double delete error!

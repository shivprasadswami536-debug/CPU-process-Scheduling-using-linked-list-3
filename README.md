CPU Process Scheduling Using Queue with Linked List

1. Problem Statement

Design and implement a CPU Process Scheduling system using a Queue data structure implemented with a Linked List. The system processes CPU tasks in First Come, First Serve (FCFS) order.

2. Objective

To implement queue operations using a linked list and demonstrate FIFO (First In, First Out) scheduling.

3. Data Structure

- Queue: Stores processes in arrival order.
- Linked List: Each node stores a process ID, burst time, and pointer to the next node.

4. Scheduling Algorithm

FCFS (First Come, First Serve): The process added first is executed first.

5. Features

1. Add a process to the queue.
2. Execute the process at the front of the queue.
3. Display all pending processes.
4. Exit the program.

6. Requirements

- C++ Compiler (GCC or any compatible compiler)
- Basic knowledge of Queue and Linked List
- C++ programming environment

7. How to Compile and Run

Save the program as "cpu_scheduling.cpp".

Compile the program:

g++ cpu_scheduling.cpp -o cpu_scheduling

Run the program on Linux:

./cpu_scheduling

On Windows:

g++ cpu_scheduling.cpp -o cpu_scheduling.exe
cpu_scheduling.exe

8. Example

Add Process P1 with burst time 10 ms.

Add Process P2 with burst time 5 ms.

The queue will display:

P1 -> Burst Time: 10 ms
P2 -> Burst Time: 5 ms

When Execute Process is selected, P1 is executed first because it arrived before P2.

9. Queue Operations

- Enqueue: Adds a new process at the rear of the queue.
- Dequeue: Removes and executes the process at the front.
- Display: Displays all pending processes.
- Exit: Terminates the program.

10. Time Complexity

Operation| Time Complexity
Enqueue| O(1)
Dequeue| O(1)
Display| O(n)

Here, n represents the number of processes in the queue.

11. Advantages

- Dynamic memory allocation.
- Efficient insertion and deletion.
- No fixed queue size.
- Processes are handled in FIFO order.

12. Conclusion

The CPU Process Scheduling system demonstrates how a Queue can be implemented using a Linked List. The FCFS algorithm processes tasks in their arrival order and helps understand basic CPU scheduling concepts.

Note: This project is an educational simulation. It does not schedule actual operating-system processes.

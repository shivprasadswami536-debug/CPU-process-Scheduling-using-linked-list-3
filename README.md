CPU Process Scheduling Using Queue with Linked List
Problem Statement
Design and implement a CPU Process Scheduling system using a Queue data structure implemented with a Linked List. The system processes CPU tasks in First Come, First Serve (FCFS) order.
Objective
To implement queue operations using a linked list and demonstrate FIFO (First In, First Out) scheduling.
Data Structure
Queue: Stores processes in arrival order.
Linked List: Each node stores a process ID, burst time, and pointer to the next node.
Scheduling Algorithm
FCFS (First Come, First Serve): The process added first is executed first.
Features
Add a process to the queue.
Execute the process at the front of the queue.
Display all pending processes.
Exit the program.
Requirements
C++ compiler (such as GCC)
Basic understanding of queues, linked lists, and pointers
How to Compile and Run
Save the program as cpu_scheduling.cpp.
g++ cpu_scheduling.cpp -o cpu_scheduling
./cpu_scheduling
On Windows, run:
g++ cpu_scheduling.cpp -o cpu_scheduling.exe
cpu_scheduling.exe
Example
Add process P1 with burst time 10 ms, then add process P2 with burst time 5 ms.
The queue will display:
P1 -> Burst Time: 10 ms
P2 -> Burst Time: 5 ms
When Execute Process is selected, P1 is removed and executed first because it arrived before P2.
Queue Operations
Enqueue: Adds a new process at the rear of the queue.
Dequeue: Removes and executes the process at the front.
Display: Shows all processes currently waiting in the queue.
Time Complexity
Enqueue: O(1)
Dequeue: O(1)
Display: O(n)
Note
This is an educational simulation of FCFS scheduling. It models the order in which processes are selected; it does not actually schedule operating-system CPU processes.

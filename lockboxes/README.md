<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/lockboxes/images/Lockboxes.png" width="900" height="300">

# **Lockboxes** :computer:

## **Description**:speech_balloon:

* The lockboxes work by allowing only one thread at a time to acquire the lock and proceed with the operation, while others wait their turn, thus preventing concurrent modifications. However, they require careful management to avoid deadlocks, where two or more threads wait indefinitely for each other to release locks. Used wisely, lockboxes are powerful tools in maintaining the integrity and reliability of data in complex, multi-threaded applications.

## **Tasks** :books:

#### **0. Lockboxes**

You have n number of locked boxes in front of you. Each box is numbered sequentially from 0 to n - 1 and each box may contain keys to the other boxes.

Write a method that determines if all the boxes can be opened.

* Prototype: def canUnlockAll(boxes)
    boxes is a list of lists
* A key with the same number as a box opens that box
* You can assume all keys will be positive integers
    There can be keys that do not have boxes
* The first box boxes[0] is unlocked
* Return True if all boxes can be opened, else return False

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Queise Oliveira](https://github.com/Qcarvalhooliveira)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).

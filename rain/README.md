<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/rain/image/rain.png" width="1000" height="400">

# **Rain** :computer:

## **Description** :speech_balloon:

*The exercise involves calculating the amount of rainwater that can be trapped between walls of varying heights after it rains. Given a list of non-negative integers representing the heights of the walls, where each integer corresponds to the height of a wall with a unit width of 1, the goal is to determine the total number of square units of water that would be retained between the walls after rainfall. The walls are represented as a cross-sectional view of a relief map, and water can only be trapped between taller walls, with the amount dependent on the shorter of the two bounding walls. The function should return the total water retained or 0 if the list is empty.

## **Task** :books:

#### **0. Rain**

Given a list of non-negative integers representing the heights of walls with unit width 1, as if viewing the cross-section of a relief map, calculate how many square units of water will be retained after it rains.

* Prototype: def rain(walls)
* walls is a list of non-negative integers.
* Return: Integer indicating total amount of rainwater retained.
* Assume that the ends of the list (before index 0 and after index walls[-1]) are not walls, meaning they will not retain water.
* If the list is empty return 0.

```
jesse@ubuntu:~/$ cat 0_main.py
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))

jesse@ubuntu:~/$ 
jesse@ubuntu:~/$ ./0_main.py
6
6
jesse@ubuntu:~/$ 
```

Visual representation of the walls [0, 1, 0, 2, 0, 3, 0, 4]

<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/rain/image/rain1.png">

Visual representation of the walls [2, 0, 0, 4, 0, 0, 1, 0]

<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/rain/image/rain2.png">


## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).

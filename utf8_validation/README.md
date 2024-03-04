# **UTF-8 Validation** :computer:

## **Description:** :speech_balloon:

UTF-8 validation is the process of ensuring that a byte sequence accurately represents a series of valid UTF-8 encoded characters. UTF-8, which stands for 8-Bit Unicode Transformation Format, is a widely used character encoding scheme capable of encoding all 1,114,112 valid Unicode characters using 1 to 4 bytes per character. The importance of validation stems from the fact that corrupted, malformed, or intentionally deceptive byte sequences can lead to interpretation errors, security vulnerabilities (like injection attacks), crashes, or unexpected behavior in software expecting valid UTF-8 input. The validation process checks that each byte in a sequence forms part of a valid UTF-8 character, follows the correct byte order, does not use more bytes than necessary for a character, and represents characters within the allowed Unicode range. This is crucial when handling data from external sources, such as files, network streams, or user inputs, to ensure data integrity and security.

## **Tasks** :books:

#### **0. UTF-8 Validation**

Write a method that determines if a given data set represents a valid UTF-8 encoding.

* Prototype: def validUTF8(data)
* Return: True if data is a valid UTF-8 encoding, else return False
* A character in UTF-8 can be 1 to 4 bytes long
* The data set can contain multiple characters
* The data will be represented by a list of integers
* Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer

```
carrie@ubuntu:~/utf8_validation$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))

data = [229, 65, 127, 256]
print(validUTF8(data))

carrie@ubuntu:~/utf8_validation$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Queise Oliveira](https://github.com/Qcarvalhooliveira)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).


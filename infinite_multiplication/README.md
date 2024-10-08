<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/infinite_multiplication/image/infinite_miltiplication.png" width="1000" height="400">

# **Infinite Multiplication** :computer:

## **Description** :speech_balloon:

* This exercise involves implementing a C program that multiplies two positive numbers passed as command-line arguments. The program must handle large numbers efficiently and provide proper error handling. Specifically, it should check if exactly two arguments are provided and ensure that both arguments are valid non-negative integers. If any errors occur—such as incorrect argument count, invalid input, or memory allocation failure—the program should output "Error" to stderr and exit with the status code 98. If the multiplication succeeds, it should display the result. The program utilizes functions for string length calculation, digit checking, and multiplication of large numbers, managing memory dynamically to handle results of potentially large sizes.

## **Task** :books:

#### **0. Infinite Multiplication**

Write a program that multiplies two positive numbers:

* Usage: mul num1 num2
* num1 and num2 will be passed in base 10
* Print the result, followed by a new line
* If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
* num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
* You are allowed to use more than 5 functions in your file

You can use bc (man bc) to check your results.

```
alexa@ubuntu:~/infinite_multiplication$ gcc -Wall -pedantic -Werror -Wextra 0-mul.c _putchar.c -o mul
alexa@ubuntu:~/infinite_multiplication$ ./mul 10 98
980
alexa@ubuntu:~/infinite_multiplication$ ./mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708
6741363923575589187997046452422615907476091498993541335055687577080701989306920124712185512283638941702255216631601001307425878158314387046118270789357784940867204055508948216034308548261234814532268988302522598879945232929028116992753216059081057377926651337612618248332113256902485974371969385156015068813868274000683912187818601667058605418678284322237297213673482412392922068159291496274311170208689056585352782844484721140846367741649962638649229509281867896067208474178402156294978940712959518351846413859141792380853313812015295333546716634344284086426775480775747808150030732119704867805688704303461042373101473485092019906795014369069932
alexa@ubuntu:~/infinite_multiplication$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).

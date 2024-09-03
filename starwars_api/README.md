# **Star Wars API** :computer:

## **Description** :speech_balloon:

* This programming exercise involves writing a script to print the names of all characters from a specified Star Wars movie using the Star Wars API. The script requires a Movie ID as a positional argument to identify which film's characters to retrieve. The characters must be displayed one per line, following the order presented in the "characters" list from the /films/ endpoint of the API. The requests module is used to fetch this data. 

## **Task** :books:

**Install Node 10**
```
$ curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
$ sudo apt-get install -y nodejs
```

**Install semi-standard**
```
$ sudo npm install semistandard --global
```

**Install request module and use it**
```
$ sudo npm install request --global
$ export NODE_PATH=/usr/lib/node_modules
```

#### **0. Star Wars Characters**

Write a script that prints all characters of a Star Wars movie:

* The first positional argument passed is the Movie ID - example: 3 = “Return of the Jedi”
* Display one character name per line in the same order as the “characters” list in the /films/ endpoint
* You must use the Star wars API
* You must use the request module

```
alexa@ubuntu:~/$ ./0-starwars_characters.js 3
Luke Skywalker
C-3PO
R2-D2
Darth Vader
Leia Organa
Obi-Wan Kenobi
Chewbacca
Han Solo
Jabba Desilijic Tiure
Wedge Antilles
Yoda
Palpatine
Boba Fett
Lando Calrissian
Ackbar
Mon Mothma
Arvel Crynyd
Wicket Systri Warrick
Nien Nunb
Bib Fortuna
alexa@ubuntu:~/$ 
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).

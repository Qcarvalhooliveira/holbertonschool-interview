<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/count_it/image/count_it.png" width="1000" height="400">

# **Count it!** :computer:

## **Description** :speech_balloon:

* This exercise involves creating a recursive Python function that interacts with the Reddit API to retrieve and analyze the titles of hot articles from a specified subreddit. The function counts the occurrences of a given list of keywords in these titles, normalizing them to be case-insensitive. The results are then sorted by the frequency of occurrences in descending order, with ties broken alphabetically, and printed out. The solution requires handling API pagination through recursion and managing edge cases such as invalid subreddits or keywords with no matches. The challenge emphasizes the use of recursion rather than iterative loops.

## **Task** :books:

#### **0. Count it!**

Write a recursive function that queries the Reddit API, parses the title of all hot articles, and prints a sorted count of given keywords (case-insensitive, delimited by spaces. Javascript should count as javascript, but java should not).

Requirements:

* Prototype: def count_words(subreddit, word_list)
* Note: You may change the prototype, but it must be able to be called with just a subreddit supplied and a list of keywords. AKA you can add a counter or anything else, but the function must work without supplying a starting value in the main.
* If word_list contains the same word (case-insensitive), the final count should be the sum of each duplicate (example below with java)
* Results should be printed in descending order, by the count, and if the count is the same for separate keywords, they should then be sorted alphabetically (ascending, from A to Z). Words with no matches should be skipped and not printed. Words must be printed in lowercase.
* Results are based on the number of times a keyword appears, not titles it appears in. java java java counts as 3 separate occurrences of java.
* To make life easier, java. or java! or java_ should not count as java
* If no posts match or the subreddit is invalid, print nothing.
* NOTE: Invalid subreddits may return a redirect to search results. Ensure that you are NOT following redirects.

Your code will NOT pass if you are using a loop and not recursively calling the function! This /can/ be done with a loop but the point is to use a recursive function. :)

Disclaimer: number presented in this example cannot be accurate now - Reddit is hot articles are always changing.

```
bob@dylan $ cat 0-main.py 
#!/usr/bin/python3
"""
0-main
"""
import sys

if __name__ == '__main__':
    count_words = __import__('0-count').count_words
    if len(sys.argv) < 3:
        print("Usage: {} <subreddit> <list of keywords>".format(sys.argv[0]))
        print("Ex: {} programming 'python java javascript'".format(sys.argv[0]))
    else:
        result = count_words(sys.argv[1], [x for x in sys.argv[2].split()])
bob@dylan $             
bob@dylan $ python3 0-main.py programming 'react python java javascript scala no_results_for_this_one'
java: 27
javascript: 20
python: 17
react: 17
scala: 4
bob@dylan $ python3 0-main.py programming 'JavA java'
java: 54
bob@dylan $ python3 0-main.py not_a_valid_subreddit 'python java javascript scala no_results_for_this_one'
bob@dylan $ python3 0-main.py not_a_valid_subreddit 'python java'
bob@dylan $ 
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).

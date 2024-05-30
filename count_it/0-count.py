#!/usr/bin/python3
"""Module that Queries the Reddit API"""

import requests

def count_words(subreddit, word_list, after='', counts={}):
    """Recursive function that queries the Reddit API"""
    headers = {'User-Agent': 'Mozilla/5.0'}
    url = f'https://www.reddit.com/r/{subreddit}/hot.json'
    
    params = {'after': after, 'limit': 100}
    response = requests.get(url, headers=headers, params=params)
    
    if response.status_code != 200:
        return
    
    data = response.json()
    articles = data['data']['children']
    after = data['data']['after']
    
    # Normalize word list and counts dictionary
    word_list = [word.lower() for word in word_list]
    counts = {word: 0 for word in word_list} if not counts else counts
    
    for article in articles:
        title = article['data']['title'].lower().split()
        for word in word_list:
            counts[word] += title.count(word)
    
    if after:
        count_words(subreddit, word_list, after, counts)
    else:
        sorted_counts = sorted(counts.items(), key=lambda item: (-item[1], item[0]))
        for word, count in sorted_counts:
            if count > 0:
                print(f"{word}: {count}")

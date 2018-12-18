#!/usr/bin/python
import sys



filename = sys.argv[1]

wordsFreq = {}
featureFreq = {}

with open(filename,'r') as file:
    for word in file.readlines():
        print(word)



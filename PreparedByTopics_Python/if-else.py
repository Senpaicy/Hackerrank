#!/bin/python3 

# Web Problem: https://www.hackerrank.com/challenges/py-if-else/problem?isFullScreen=true

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    
    if (n % 2 == 0 and (2 <= n <= 5 or n > 20)): print("Not Weird")
    else: print("Weird")
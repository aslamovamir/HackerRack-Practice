#!/bin/python3

import math
import os
import random
import re
import sys

def method(n):
    if n%2 == 1:
        print("Weird")
    else:
        if 2<=n<=5:
            print("Not Weird")
        elif 6<=n<=20:
            print("Weird")
        elif n>20:
            print("Not Weird")



n = int(input())
method(n)

import re
import json
import os

RED_SPEED = 3
BLUE_SPEED = 2
GREEN_SPEED = 1 # and up

def main(src):
    res = "bloon_rounds.txt"
    
    data = json.loads(open(src))

if __name__ == '__main__':
    src = "bloon_registry.json"
    main(src)
import os
import glob
import re

def main():
    res = 'mb.txt'
    data = []
    
    # go through every file in the sprites folder
    for f in glob.glob('sprites/monkey_bar/*.txt'):
        with open(f, 'r') as ff:
            data.append(ff.read())

    with open(res, 'w') as f:
        f.write('\n'.join(data))
        
    # strip everything from string that doesn't match "BG<DIGIT>_SPRITE"
    data = [re.match(r'(BAR(\d+)_SPRITE)', d).group(0) for d in data]
    
    # sort by number in BG<DIGIT>_SPRITE
    data.sort(key=lambda x: int(re.match(r'BAR(\d+)_SPRITE', x).group(1)))
    
    with open('mb_registry.txt', 'w') as f:
        f.write(f'dw ')
        for i, d in enumerate(data):
            f.write(f'OFFSET {d}, ')
            if i % 8 == 0:
                f.write('\ndw ')
            
            
    
if __name__ == '__main__':
    main()
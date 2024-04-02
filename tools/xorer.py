import os
import glob
import re

# XOR each byte with background (02h), replace the byte with the result
bg = int('8', 16)
def main():   
    for f in glob.glob('../sprites/lives.txt'):
        print(f'File {f}')
        with open(f, 'r+') as ff:
            # overwrite every string matching the regex with another string
            data = ff.read()
            data = re.sub(r'(\d\w+h)', lambda x: f'{(hex(int(x.group(0)[:-1], 16) ^ bg))}h', data)
            # remove all x's in the data
            data = re.sub(r'x', '', data)
            # overwrite with new data
            ff.seek(0)
            ff.write(data)
            
if __name__ == '__main__':
    main()
    # create 89 in hex
    # x = int('89', 16)
    # y = int('2', 16)
    # print(x ^ y)
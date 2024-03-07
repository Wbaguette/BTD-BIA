from PIL import Image
from sys import argv
from pathlib import Path

def rgb_to_8(r, g, b):
    return (int((r*6/256)*36 + (g*6/256)*6 + (b*6/256)))

def save_map(f, data, w):
    var_name = f"{f.stem}_sprite".upper()
    counter = 0
    with open(f"{f.stem}.txt", "w+") as fw:
        fw.write(var_name)
        for d in data:
            if counter == 0:
                fw.write(" db ")
            fw.write(f'{d:0>3X}h')
            counter += 1
            if counter == w:
                counter = 0
                fw.write(f"\n{' ' * len(var_name)}")
                continue
            
            fw.write(", ")

def main(src):
    img = Image.open(src)
    img = img.resize((32, 32))
   #  data = img.convert(mode="P", colors=256)
    w, h = img.size
   #  data = [d for d in data.getdata()]
    data = [rgb_to_8(*v) for v in img.getdata()]
    save_map(src, data, w)

if __name__ == '__main__':
    files = argv[1:] # The first element and subsequent are files to convert
    for f in files:
        main(Path(f))
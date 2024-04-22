import json
import os

# https://topper64.co.uk/nk/btd6/rounds/regular 

speed = {
    "RED": 3,
    "BLUE": 2,
    "GREEN": 1,
    "YELLOW": 1,
    "PINK": 1,
    "BLACK": 1,
    "WHITE": 1,    
}
damage = {
    "RED": 1,
    "BLUE": 2,
    "GREEN": 3,
    "YELLOW": 4,
    "PINK": 5,
    "BLACK": 6,
    "WHITE": 7,
}
default_state = 1

def main(src):
    res = "bloon_rounds.txt"
    
    # clear res if it exists
    if os.path.exists(res):
        os.remove(res)
    
    with open(src, "r") as f:
        data = json.load(f)
    
    print("Generating bloon_rounds.txt")
    for round in data.keys():
        waves = data[round] # a round consists of a list of waves
        bloons = [] 
        
        print("Round: " + round)
        for wave in waves:
            bloon, amt, frame = wave
            # print(f"Wave: {bloon} {amt} at frame {frame}")
            
            for i in range(1, int(amt) + 1):              
                # subsequent bloons will be spawned after the last bloon has finished
                timeout = frame + (i * speed[bloon]) 
                bloons.append(f'<BLOON_{bloon}, 0, {speed[bloon]}, {timeout}, {damage[bloon]}, {default_state}>')
                        
        # save bloons as new line in res, create if not exists
        with open(res, "a") as f:
            f.write(f'r{round}_queue_length dw {len(bloons)}\n')
            f.write(f'r{round}_queue BLOON ')
            
            # write every bloon, 8 per line
            for i, bloon in enumerate(bloons):
                f.write(bloon)
                if i % 8 == 7:
                    f.write("\n\t")
                elif i != len(bloons) - 1:
                    f.write(", ")
                    
            f.write("\n\n")

if __name__ == '__main__':
    src = "bloon_registry.json"
    main(src)
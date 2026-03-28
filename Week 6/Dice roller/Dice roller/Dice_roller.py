import random

# Dice ASCII Art Mapping
dice_art = {
    1: ("┌─────────┐", "│         │", "│    ●    │", "│         │", "└─────────┘"),
    2: ("┌─────────┐", "│  ●      │", "│         │", "│      ●  │", "└─────────┘"),
    3: ("┌─────────┐", "│  ●      │", "│    ●    │", "│      ●  │", "└─────────┘"),
    4: ("┌─────────┐", "│  ●   ●  │", "│         │", "│  ●   ●  │", "└─────────┘"),
    5: ("┌─────────┐", "│  ●   ●  │", "│    ●    │", "│  ●   ●  │", "└─────────┘"),
    6: ("┌─────────┐", "│  ●   ●  │", "│  ●   ●  │", "│  ●   ●  │", "└─────────┘")
}

def play_dice():
    try:
        # Get input and handle potential conversion errors
        user_input = input("How many dice?: ")
        num_of_dice = int(user_input)

        if num_of_dice <= 0:
            print("Please enter a positive number.")
            return

        dice = []
        total = 0

        # Roll the dice
        for _ in range(num_of_dice):
            result = random.randint(1, 6)
            dice.append(result)
            total += result

        # PRINT HORIZONTALLY
        # We iterate through the 5 rows of the ASCII strings
        for line_index in range(5):
            for die in dice:
                # Get the tuple for the die value, then the specific line
                print(dice_art.get(die)[line_index], end="  ")
            print() # Move to the next row

        print(f"\nTotal: {total}")

    except ValueError:
        print("Error: Please enter a valid whole number.")

# Execute the logic
play_dice()

# Keep process alive so the window doesn't close
input("\nPress Enter to exit...")

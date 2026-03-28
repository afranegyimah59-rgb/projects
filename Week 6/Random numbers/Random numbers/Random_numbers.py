import random

# --- SETTINGS ---
low = 1
high = 100
guesses = 0
number = random.randint(low, high)

print("--- NUMBER GUESSING GAME ---")

# --- GAME LOOP ---
while True:
    try:
        # Get input as a string first to handle potential errors
        user_input = input(f"Enter a number between ({low} - {high}): ")

        # Convert to integer
        guess = int(user_input)
        guesses += 1

        if guess < number:
            print(f"{guess} is too low")
        elif guess > number:
            print(f"{guess} is too high")
        else:
            print(f"CORRECT! {guess} is the number!")
            break  # Exits the while loop

    except ValueError:
        # This catches errors if the user types 'abc' or leaves it blank
        print("Invalid input! Please enter a whole number.")

# --- FINAL SCORE ---
print(f"This round took you {guesses} guesses.")

# --- KEEP PROCESS ALIVE ---
# This prevents the terminal from closing immediately
input("\nPress Enter to exit the program...")

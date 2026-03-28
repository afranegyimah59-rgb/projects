# Iterables = Objects that can return elements one at a time.

my_list = [1, 2, 3, 4, 5]
my_tuple = (1, 2, 3, 4, 5)
my_set = {"apple", "orange", "banana", "coconut"}
my_name = "Bro Code"
my_dictionary = {'A': 1, 'B': 2, 'C': 3}

# --- Iterating through a List ---
print("--- List ---")
for item in my_list:
    print(item, end=" ")
print()

# --- Iterating through a String ---
print("\n--- String ---")
for char in my_name:
    print(char, end="-")
print()

# --- Iterating through a Set ---
# Note: Sets are unordered; the order may change every time you run this!
print("\n--- Set ---")
for fruit in my_set:
    print(fruit)

# --- Iterating through a Dictionary ---
print("\n--- Dictionary ---")
# Direct iteration (Keys)
for key in my_dictionary:
    print(f"Key: {key}")

# Key-Value pairs
for key, value in my_dictionary.items():
    print(f"{key} = {value}")

# --- KEEP ALIVE ---
# Prevents the terminal from closing immediately
input("\nProcess complete. Press Enter to exit...")

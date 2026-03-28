
# Membership operators = used to test whether a value is found in a sequence

# --------------------
# EXAMPLE 1: String Search
# --------------------
word = "APPLE"
# .strip() removes accidental spaces, .upper() matches "APPLE"
letter = input("Guess a letter in the secret word: ").strip().upper()

if letter in word:
   print(f"There is a {letter}")
else:
   print(f"{letter} was not found")

# --------------------
# EXAMPLE 2: Set Search
# --------------------
students = {"Spongebob", "Patrick", "Sandy"}
student = input("Enter the name of a student: ").strip().capitalize()

if student in students:
   print(f"{student} is in this class")
else:
   print(f"{student} is NOT in this class")

# --------------------
# EXAMPLE 3: Dictionary Lookup
# --------------------
grades = {
   "Sandy": 'A',
   "Squidward": 'B',
   "Spongebob": 'C',
   "Patrick": 'D'
}

# Key error prevention: Checking the key before accessing the value
name = input("Enter a student to see their grade: ").strip().capitalize()

if name in grades:
   print(f"{name}'s grade is {grades[name]}.")
else:
   print(f"{name} is not in the dictionary")

# --------------------
# EXAMPLE 4: Validation
# --------------------
email = "BroCode@gmail.com"

# Using 'in' to check for substrings
if "@" in email and "." in email:
    print("Valid email")
else:
    print("Invalid email")

# --- KEEP ALIVE ---
input("\nPress Enter to exit...")

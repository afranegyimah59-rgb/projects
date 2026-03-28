
# List comprehension = A concise way to create lists in Python
# [expression for value in iterable if condition]

# ---------- MATH OPERATIONS ----------
doubles = [x * 2 for x in range(1, 11)]
triples = [y * 3 for y in range(1, 11)]
squares = [z * z for z in range(1, 11)]

print(f"Doubles: {doubles}")
print(f"Triples: {triples}")
print(f"Squares: {squares}")

# ---------- STRING TRANSFORMATIONS ----------
fruits = ["apple", "orange", "banana", "coconut"]
uppercase_words = [fruit.upper() for fruit in fruits]
fruit_chars = [fruit[0] for fruit in fruits]

print(f"\nUppercase Fruits: {uppercase_words}")
print(f"Fruit Initials: {fruit_chars}")

# ---------- FILTERING NUMBERS ----------
numbers = [1, -2, 3, -4, 5, -6, 8, -7]
positive_numbers = [x for x in numbers if x >= 0]
negative_numbers = [x for x in numbers if x < 0]
even_numbers = [x for x in numbers if x % 2 == 0]
# Using != 0 is safer for negative odd numbers
odd_numbers = [x for x in numbers if x % 2 != 0]

print(f"\nPositive Numbers: {positive_numbers}")
print(f"Negative Numbers: {negative_numbers}")
print(f"Even Numbers:     {even_numbers}")
print(f"Odd Numbers:      {odd_numbers}")

# ---------- FILTERING GRADES ----------
grades = [85, 42, 79, 90, 56, 61, 30]
passing_grades = [grade for grade in grades if grade >= 60]

print(f"\nPassing Grades: {passing_grades}")

# --- KEEP ALIVE ---
input("\nProcess complete. Press Enter to exit...")

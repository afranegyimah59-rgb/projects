# --- 1. ARITHMETIC & AUGMENTED ASSIGNMENT ---
friends = 5

# Augmented assignment operators
friends += 1    # Addition (friends = friends + 1)
friends -= 2    # Subtraction
friends *= 3    # Multiplication
friends /= 2    # Division (returns float)
friends **= 2   # Exponentiation (power of 2)
remainder = friends % 2  # Modulus (remainder of division)

print(f"Final friends count: {friends}")
print(f"Remainder: {remainder}")

# --- 2. BUILT-IN MATH FUNCTIONS ---
x = 3.14
y = -4
z = 5

print(f"Round x: {round(x)}")
print(f"Absolute y: {abs(y)}")
print(f"Power (4^3): {pow(4, 3)}")
print(f"Max value: {max(x, y, z)}")
print(f"Min value: {min(x, y, z)}")

# --- 3. THE MATH MODULE ---
x_val = 9.9
print(f"Pi: {math.pi}")
print(f"E: {math.e}")
print(f"Square root of 9.9: {math.sqrt(x_val)}")
print(f"Ceil (round up): {math.ceil(x_val)}")
print(f"Floor (round down): {math.floor(x_val)}")

# --- 4. PRACTICAL EXAMPLES (Uncomment to test) ---

# Example A: Circumference of a circle
# radius = float(input("Enter the radius of a circle: "))
# circumference = 2 * math.pi * radius
# print(f"The circumference is: {round(circumference, 2)}cm")

# Example B: Area of a circle
# area = math.pi * pow(radius, 2)
# print(f"The area of the circle is: {round(area, 2)}cm^2")

# Example C: Hypothenuse (Pythagorean theorem)
# a = float(input("Enter side A: "))
# b = float(input("Enter side B: "))
# c = math.sqrt(pow(a, 2) + pow(b, 2))
# print(f"Side C = {c}")

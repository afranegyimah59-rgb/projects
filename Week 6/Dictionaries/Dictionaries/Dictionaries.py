# dictionary =  a collection of {key:value} pairs
#               ordered and changeable. No duplicates

capitals = {"USA": "Washington D.C.",
            "India": "New Delhi",
            "China": "Beijing",
            "Russia": "Moscow"}

# --- 1. Basic Access & Verification ---
# Using .get() is safe; it won't crash if the key is missing
if capitals.get("Russia"):
    print("That capital exists")
else:
    print("That capital doesn't exist")

# --- 2. Updating and Deleting ---
capitals.update({"Germany": "Berlin"})
capitals.update({"USA": "Detroit"}) # Overwrites "Washington D.C."
capitals.pop("China")               # Removes China/Beijing

# --- 3. Iteration (Displaying Data) ---
print("\n--- Current Keys ---")
for key in capitals.keys():
    print(key)

print("\n--- Current Values ---")
for value in capitals.values():
    print(value)

print("\n--- Full Items (Key: Value) ---")
for key, value in capitals.items():
    print(f"{key}: {value}")

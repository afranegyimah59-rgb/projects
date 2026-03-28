# ----- *ARGS Example 1: Summing Numbers -----
def add(*nums):
   total = 0
   for num in nums:
       total += num
   return total

print(f"Total: {add(1, 2, 3, 4)}")

# ----- *ARGS Example 2: Name Builder -----
def display_name(*args):
   # Print Hello, then all names in the tuple
   print("Hello", end=" ")
   for arg in args:
       print(arg, end=" ")
   print() # New line to reset terminal position

display_name("Dr.", "Spongebob", "Harold", "Squarepants", "III")

# ----- **KWARGS: Address Lookup -----
def print_address(**kwargs):
    for value in kwargs.values():
        print(value, end=" ")
    print()

print_address(street="123 Fake St.",
              pobox="P.O Box 777",
              city="Detroit",
              state="MI",
              zip="54321")

# ----- FINAL EXERCISE: Shipping Label -----
def shipping_label(*args, **kwargs):
    # 1. Handle names (*args is a tuple)
    for arg in args:
        print(arg, end=" ")
    print()

    # 2. Logic for address using .get() to prevent KeyErrors
    # We provide an empty string "" as a default if the key is missing
    street = kwargs.get('street', '')
    apt = kwargs.get('apt', '')
    pobox = kwargs.get('pobox', '')
    city = kwargs.get('city', 'Unknown City')
    state = kwargs.get('state', 'XX')
    zip_code = kwargs.get('zip', '00000')

    if apt:
        print(f"{street} {apt}")
    elif pobox:
        print(f"{street}\n{pobox}")
    else:
        print(f"{street}")

    print(f"{city}, {state} {zip_code}")

# Testing the final function
print("\n--- GENERATED SHIPPING LABEL ---")
shipping_label("Dr.", "Spongebob", "Squarepants",
               street="123 Fake St.",
               pobox="PO box #1001",
               city="Detroit",
               state="MI",
               zip="54321")

# --- KEEP ALIVE ---
# This prevents the terminal from exiting immediately
input("\nPress Enter to exit...")

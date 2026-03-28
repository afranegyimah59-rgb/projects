# ----------  EXAMPLE 1  ----------
def display_invoice(username, amount, due_date):
    # These print statements must be indented (4 spaces)
    print(f"Hello {username}")
    print(f"Your bill of ${amount:.2f} is due: {due_date}")
    print("-" * 30)

# These calls were commented out; now they are active:
display_invoice("BroCode", 42.50, "01/01")
display_invoice("JoeSchmo", 100.01, "01/02")

# ----------  EXAMPLE 2  ----------
def create_name(first, last):
    first = first.capitalize()
    last = last.capitalize()
    # return sends the data back to the caller
    return first + " " + last

# This line must NOT be indented, as it's outside the function
full_name = create_name("spongebob", "squarepants")
print(full_name)

# --- KEEP ALIVE ---
# Prevents the window from closing instantly
input("\nPress Enter to exit...")

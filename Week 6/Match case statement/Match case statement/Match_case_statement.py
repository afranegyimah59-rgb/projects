# Match-case statement: An alternative to using many 'elif' statements
# Introduced in Python 3.10

def is_weekend(day):
    # Standardizing the input to handle lowercase or extra spaces
    day = day.strip().capitalize()

    match day:
        case "Saturday" | "Sunday":
            return True
        case "Monday" | "Tuesday" | "Wednesday" | "Thursday" | "Friday":
            return False
        case _:
            # The underscore _ is the "wildcard" or "default" case
            return "Not a valid day!"

# ---------- TESTING THE FUNCTION ----------
print(f"Is Monday a weekend? {is_weekend('Monday')}")
print(f"Is Sunday a weekend? {is_weekend('sunday')}")  # Testing case-insensitivity
print(f"Is Pizza a weekend? {is_weekend('Pizza')}")    # Testing the wildcard (_)

# --- KEEP ALIVE ---
input("\nPress Enter to exit...")

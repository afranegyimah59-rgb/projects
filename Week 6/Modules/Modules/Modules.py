import time


# 1. Function with Default Parameters (Matches your 'net_price' example)
def calculate_total(price, tax=0.05, shipping=5.0):
    """Calculates total using tax and shipping defaults."""
    return price * (1 + tax) + shipping


# 2. Function for f-string formatting (Matches your 'get_phone' exercise)
def show_result(name, amount):
    """Prints a formatted message using f-strings."""
    return f"Receipt for {name}: Total Amount = ${amount:.2f}"


def start_program():
    print("--- SYSTEM START ---", end="\n\n")

    # 3. Using Keyword Arguments (Matches your 'hello' example)
    # Note: Order doesn't matter when we use names!
    final_amt = calculate_total(shipping=10.0, tax=0.08, price=100)

    # 4. Using 'sep' to style the output (Matches your 'print' example)
    print("Processing Data", "Please Wait", sep="... ")
    time.sleep(2)  # Keeps the screen active for 2 seconds

    # Display the result
    message = show_result(name="James John", amount=final_amt)
    print("\n" + message)

    print("\n" + "=" * 30)
    print("PROGRAM EXECUTION COMPLETE")

    # 5. THE STAY-OPEN TRICK:
    # This prevents the window from closing until you press Enter.
    input("\nPress ENTER to finish and close the window...")


if __name__ == "__main__":
    start_program()

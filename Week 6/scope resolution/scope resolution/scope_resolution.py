# ----- 1. LOCAL SCOPE -----
# Variables declared inside a function are only accessible there.
def func1_local():
    x = 1
    print(f"Local Scope (func1): {x}")


def func2_local():
    x = 2
    print(f"Local Scope (func2): {x}")


func1_local()
func2_local()


# ----- 2. ENCLOSED SCOPE -----
# A nested function can see variables in its parent function.
def parent_func():
    x = "Enclosed Variable"

    def child_func():
        # child_func looks in its Local scope, fails, then finds 'x' in Enclosed scope
        print(f"Enclosed Scope: {x}")

    child_func()


parent_func()

# ----- 3. GLOBAL SCOPE -----
# Variables declared in the main body are visible to all functions.
z = 3  # This is global


def print_global_1():
    print(f"Global Scope (1): {z}")


def print_global_2():
    print(f"Global Scope (2): {z}")


print_global_1()
print_global_2()

# ----- 4. BUILT-IN SCOPE -----
# Pre-defined names in Python (keywords, constants, or imported math)
from math import e


def print_builtin():
    # 'e' is recognized because it's in the built-in/imported scope
    print(f"Built-in Scope (math constant e): {e}")


print_builtin()

# --- KEEP ALIVE ---
input("\nAll scopes tested. Press Enter to exit...")

import time


# 1. THE CLASS (Relative to your 'car.py' screenshot)
class Car:
    def __init__(self, model, year, color, for_sale):
        self.model = model
        self.year = year
        self.color = color
        self.for_sale = for_sale

    def drive(self):
        # Using the f-string style from your lesson
        print(f"You drive the {self.color} {self.model}")

    def stop(self):
        print(f"You stop the {self.color} {self.model}")

    def describe(self):
        print(f"{self.year} {self.color} {self.model}")


# 2. THE MAIN LOGIC (Relative to your 'main.py' and keyword lessons)
def run_showroom():
    print("--- WELCOME TO THE OOP SHOWROOM ---", end="\n\n")

    # Creating an object using Keyword Arguments
    # This matches your 'hello(greeting="Hello"...) lesson
    car1 = Car(model="Mustang", year=2024, color="Red", for_sale=True)
    car2 = Car(model="Cybertruck", year=2025, color="Silver", for_sale=False)

    # Calling methods
    print("Inventory Item 1:")
    car1.describe()
    car1.drive()

    print("\nProcessing next vehicle", end="")
    # Using a loop and end="." to show progress (like your count example)
    for _ in range(3):
        print(".", end="")
        time.sleep(0.5)
    print("\n")

    print("Inventory Item 2:")
    car2.describe()
    car2.stop()

    print("\n" + "=" * 35)
    print("ALL VEHICLE DATA PROCESSED")

    # 3. THE STAY-OPEN TRICK
    # This prevents 'Exit 0' until you are ready
    input("\nPress ENTER to shut down the showroom...")


if __name__ == "__main__":
    run_showroom()

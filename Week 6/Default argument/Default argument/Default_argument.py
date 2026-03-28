import time
import sys


# Uses f-strings and default parameters like your 'net_price' example
def format_score(correct, total, bonus=0.0):
    final_score = correct + bonus
    return f"{final_score}/{total}"


# Uses keyword arguments and 'sep' like your 'hello' and 'print' examples
def display_header(title, character="-"):
    print(character * 20)
    print(title.upper())
    print(character * 20, end="\n\n")


def run_quiz():
    questions = [
        {
            "prompt": "What does the 'sep' parameter do in a print function?",
            "options": ["A) Ends the line", "B) Sets the separator between items", "C) Separates files"],
            "answer": "B"
        },
        {
            "prompt": "Which is a valid f-string?",
            "options": ["A) f'{val}'", "B) str(val)", "C) {val}f"],
            "answer": "A"
        },
        {
            "prompt": "Can keyword arguments be passed in any order?",
            "options": ["A) No", "B) Only if they are strings", "C) Yes"],
            "answer": "C"
        }
    ]

    score = 0
    display_header(title="Python Basics Quiz", character="=")

    for i, q in enumerate(questions):
        # Using 'sep' to style the question number
        print("QUESTION", i + 1, sep=": ")
        print(q["prompt"])

        # Using 'end' to keep options on one line, similar to your 'range' example
        for opt in q["options"]:
            print(opt, end="  ")

        print()  # New line after options
        guess = input("Your Answer: ").strip().upper()

        if guess == q["answer"]:
            print("Status: CORRECT")
            score += 1
        else:
            print(f"Status: WRONG (Correct: {q['answer']})")

        print("-" * 20)

    # Using keyword arguments for the final result
    final_text = format_score(correct=score, total=len(questions), bonus=0.5 if score == 3 else 0.0)

    print("\n" + "=" * 20)
    print(f"FINAL RESULT: {final_text}")
    print("DONE!")


if __name__ == "__main__":
    run_quiz()
    # Ensures the program exits with status 0
    sys.exit(0)

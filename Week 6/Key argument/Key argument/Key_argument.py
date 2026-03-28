import sys


def display_result(status, score, total):
    """Uses f-strings and keyword arguments for clarity."""
    print(f"\n--- {status} ---")
    print(f"Final Score", f"{score}/{total}", sep=": ")


def run_quiz():
    # Questions based on the logic in your screenshots
    questions = [
        {
            "q": "In f'{{greeting}} {{name}}', what are the curly braces used for?",
            "options": ["A) Comments", "B) Placeholders for variables", "C) Decorators"],
            "correct": "B"
        },
        {
            "q": "When using keyword arguments (e.g., first='James'), does the order matter?",
            "options": ["A) Yes", "B) No", "C) Only if using a list"],
            "correct": "B"
        },
        {
            "q": "Which print parameter changes the character at the end of the line?",
            "options": ["A) sep=", "B) stop=", "C) end="],
            "correct": "C"
        }
    ]

    score = 0
    print("Welcome to the Keyword Arguments Quiz!", end="\n\n")

    for i, item in enumerate(questions):
        print(f"Question {i + 1}: {item['q']}")

        # Displaying options using the 'sep' concept from your screenshot
        print(*item['options'], sep=" | ")

        user_ans = input("Your choice: ").strip().upper()

        if user_ans == item["correct"]:
            print("Correct! Moving to next...", end="\n\n")
            score += 1
        else:
            print(f"Wrong. The answer was {item['correct']}.", end="\n\n")

    # Final output using keyword arguments
    display_result(status="QUIZ COMPLETE", score=score, total=len(questions))


if __name__ == "__main__":
    try:
        run_quiz()
        # Exit 0 indicates the program ran fully and successfully
        sys.exit(0)
    except KeyboardInterrupt:
        print("\nQuiz stopped by user.")
        sys.exit(1)

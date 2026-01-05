class Solution:
    def detectCapitalUse(self, text: str) -> bool:

        return text == text.upper() or text == text.lower() or text == text.capitalize()

class MorseCodeTranslator:
    def __init__(self):
        self.morse_dict = {
            ".-": "A",
            "-...": "B",
            "-.-.": "C",
            "-..": "D",
            ".": "E",
            "..-.": "F",
            "--.": "G",
            "....": "H",
            "..": "I",
            ".---": "J",
            "-.-": "K",
            ".-..": "L",
            "--": "M",
            "-.": "N",
            "---": "O",
            ".--.": "P",
            "--.-": "Q",
            ".-.": "R",
            "...": "S",
            "-": "T",
            "..-": "U",
            "...-": "V",
            ".--": "W",
            "-..-": "X",
            "-.--": "Y",
            "--..": "Z",
            " ": " ",
        }
        self.english_dict = {
            value: key for key, value in self.morse_dict.items()
        }  # 중요!
        self.eng_text = ""
        self.morse_text = ""

    def morse_to_eng(self, morse_text):
        self.eng_text = ""
        morse_words = morse_text.split("  ")
        for morse_word in morse_words:
            morse_chars = morse_word.split(" ")
            for morse_char in morse_chars:
                if morse_char in self.morse_dict:
                    self.eng_text += self.morse_dict[morse_char]
                else:
                    pass
            self.eng_text += " "
        return self.eng_text

    def eng_to_morse(self, eng):
        self.morse_text = ""
        for char in eng:
            if char.upper() in self.english_dict:
                self.morse_text += self.english_dict[char.upper()] + " "
            else:
                pass
        return self.morse_text

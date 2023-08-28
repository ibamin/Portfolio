from flask import Flask, request
from flask import render_template
from morse import MorseCodeTranslator

app = Flask(__name__)


@app.route("/")
def index():
    return render_template("index.html")


@app.route("/morse_decoding", methods=["POST", "GET"])
def morse_decoding():
    print(request)
    if request.method == "POST":
        result_text = ""
        inputMorse = request.form.get("inputMorse")
        translate = MorseCodeTranslator()
        inputMorse2 = str(inputMorse)
        inputMorse1 = set(inputMorse)
        if inputMorse1.issubset([".", " ", "-"]):
            result_text = translate.morse_to_eng(inputMorse)
        elif inputMorse2.isalpha():
            result_text = translate.eng_to_morse(inputMorse)
        else:
            result_text = "error"
        return render_template("index.html", result=result_text)

    # if request.method == "POST":
    #     inputMorse = request.form.get("inputMorse")
    #     translate = MorseCodeTranslator()
    #     eng_text=translate.morse_to_eng(inputMorse)
    #     return render_template("index.html",result=eng_text)


if __name__ == "__main__":
    app.run("0.0.0.0", port=5000)

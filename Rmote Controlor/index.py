from flask import Flask, request
from flask import render_template
import RPi.GPIO as gpio

app = Flask(__name__)
gpio.setmode(gpio.BOARD)
gpio.setup(8, gpio.OUT, initial=gpio.LOW)
gpio.setup(16, gpio.OUT, initial=gpio.LOW)


@app.route("/")
def home():
    return render_template("index.html")


@app.route("/led/on")
def led_on():
    try:
        gpio.output(8, gpio.HIGH)
        return "ok"
    except expression as identifier:
        return "fail"


@app.route("/led/off")
def led_off():
    try:
        gpio.output(8, gpio.LOW)
        return "ok"
    except expression as identifier:
        return "fail"


@app.route("/green/on")
def green_on():
    try:
        gpio.output(16, gpio.HIGH)
        return "ok"
    except expression as identifier:
        return "fail"


@app.route("/green/off")
def green_off():
    try:
        gpio.output(16, gpio.LOW)
        return "ok"
    except expression as identifier:
        return "fail"


if __name__ == "__main__":
    app.run("0.0.0.0", port=5000)

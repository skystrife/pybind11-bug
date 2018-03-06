from flask import Flask
import example

app = Flask(__name__)

@app.route("/")
def hello():
    example.fun()
    return "OK"

if __name__ == '__main__':
    app.run(debug=True)

from flask import Flask
import example

app = Flask(__name__)

@app.route("/")
def hello():
    example.fun(lambda x: False)
    return "OK"

if __name__ == '__main__':
    app.run(debug=True)

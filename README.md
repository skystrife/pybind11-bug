# Instructions

Requires CMake and Flask to be installed.

```bash
mkdir build
cd build
cmake ..
make
cp *.so ..
cd ..
python server.py
```

Navigate to the server URL and observe a deadlock. If you add
`use_reloader=False` to the `app.run()` call in `server.py`, the problem
does not occur.

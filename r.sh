echo starts

echo compile files...

# get list of all .cpp files
files=$(ls *.cpp)
# compile all of them
g++ $files -o RUN -std=c++11

echo Running
./RUN

echo remove
rm RUN

echo terminateds
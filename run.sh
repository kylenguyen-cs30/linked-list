echo starts

echo compile files...

# get list of all .cpp files
files=$(ls *.cpp && ls *.h)

# compile all of them
for file in $files; do 
    if [[ $file == *.cpp ]]; then
        clang++ -c $file -o ${file/.cpp/.o}
    fi
done

# link .o files into executable
clang++ *.o -o RUN

if [ $? -eq 0 ]; then
    echo Running
    ./RUN

    echo remove
    rm RUN

    echo remove.o files
    rm *.o

else
    echo "Compilation failed"
fi


echo terminateds
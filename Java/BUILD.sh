

SRC_DIR="./src"
BIN_DIR="./bin"
JAR_NAME="A0.jar"

mkdir -p $BIN_DIR
rm -rf $BIN_DIR/*
javac -d $BIN_DIR $SRC_DIR/*.java

if [ $? -eq 0 ]; then
    jar cvf $JAR_NAME -C $BIN_DIR .

    echo "$JAR_NAME"

    java -jar $JAR_NAME
else
    echo "Compilation failed."
fi

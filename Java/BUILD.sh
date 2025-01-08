#!/bin/bash 

SRC_DIR="./src"  
BIN_DIR="./bin"  
JAR_NAME="A0.jar"  
MAIN_CLASS="Main" 

mkdir -p $BIN_DIR  
rm -rf $BIN_DIR/*  
javac -d $BIN_DIR $SRC_DIR/*.java  

if [ $? -eq 0 ]; then
    echo "Main-Class: $MAIN_CLASS" >> manifest.txt  
    jar cmf manifest.txt $JAR_NAME -C $BIN_DIR .  
    rm manifest.txt  
    java -jar $JAR_NAME  
else  
    echo "Compilation failed." 
fi 
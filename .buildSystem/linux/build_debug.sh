# build cpp program
# -----------------
ROOT=$1
FILE_PATH=$2
FILE_NAME=$3

rm -rf $ROOT/$FILE_PATH/$FILE_NAME.out
g++ -g $ROOT/$FILE_PATH/$FILE_NAME.cpp -o $ROOT/$FILE_PATH/$FILE_NAME.out

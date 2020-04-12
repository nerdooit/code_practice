# this shell file makes directory and file
# If you use this script, input arguemnt ($1 : directory name, $2 file name)

mkdir $1
vi $1/$1.cc

cd $1
exec zsh

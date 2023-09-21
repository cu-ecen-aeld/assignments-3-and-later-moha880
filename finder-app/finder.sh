#!/bin/sh

arg1=$1

arg2=$2

if [ ! -d $arg1 && -z $arg1  ];then
	echo "the path : "$arg1" is not specified"
	exit 1
fi


if [  -z $arg2  ];then
        echo "the : "$arg2" is not specified"
        exit 1
fi

hhh=$(ls $arg1 | wc -l)

ggg=$( grep -rni $arg2 $arg1 | wc -l)


echo "The number of files are "$hhh" and the number of matching lines are "$ggg

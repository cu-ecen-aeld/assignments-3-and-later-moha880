#!/bin/sh

arg1=$1

arg2=$2

if [ -z $arg1  ];then
        echo "the path : "$arg1" is not specified arg1 writer"
        exit 1
fi


if [ -z $arg2  ];then
        echo "the : "$arg2" is not specified arg2 writer"
        exit 1
fi

DIR="$(dirname "${arg1}")"

if [ ! -d $DIR  ];then
        mkdir -p $DIR
fi


echo ${arg2} > ${arg1}

if [ -f ${arg1} ];then
	exit 0
else
	echo "ERROR : CREATING THE FILE"
	exit 1
fi


#/bin/bash

for i in {0..9} ; do
	touch `printf "file%04d.c\n" $i`
done


#/bin/bash
for i in {1..100}
do
	touch aaa${i}.c
done
for i in aaa5?.c
do
	echo mv $i ${i%c}java
done



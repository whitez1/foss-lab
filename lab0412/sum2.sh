#/bin/bash
end=$1
sum=0
echo $0 $1 $2 $3
for (( i=0 ; i<$((end)); i++ )); do
	sum=$(($sum+$i));
done
echo $sum 

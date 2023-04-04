echo "Enter a no"
read no
i=2
while [ $i -lt $no ]
do 
if [ `expr $no % $i` -eq 0 ]
then
echo "$no is not prime"
exit
fi 
i=` expr $i + 1 `
done
echo "$no is prime"


#!/bin/sh

# Bold
BBlack='\033[1;30m'       # Black
BRed='\033[1;31m'         # Red
BGreen='\033[1;32m'       # Green
BYellow='\033[1;33m'      # Yellow
BBlue='\033[1;34m'        # Blue
BPurple='\033[1;35m'      # Purple
BCyan='\033[1;36m'        # Cyan
BWhite='\033[1;37m'       # White
# Reset
Color_Off='\033[0m'       # Text Reset


# -------------------------------------------------------------

printf "${BYellow} Making program...\n${Color_Off}"
make re

# -------------------------------------------------------------

printf "${BYellow}\n Run no arguments... \n${Color_Off}"
./PmergeMe

# -------------------------------------------------------------

printf "${BYellow}\n Wrong Input[1]\n${Color_Off}"
./PmergeMe k

# -------------------------------------------------------------

printf "${BYellow}\n Wrong Input[2]\n${Color_Off}"
./PmergeMe -1

# -------------------------------------------------------------

printf "${BYellow}\n Wrong Input[3]\n${Color_Off}"
./PmergeMe 6 5 4 3 2 1 i

# -------------------------------------------------------------

printf "${BYellow}\n Wrong Input[4]\n${Color_Off}"
./PmergeMe 6 5 4 e 3 2 1

# -------------------------------------------------------------

printf "${BYellow}\n Input too high\n${Color_Off}"
./PmergeMe 9999999999

# -------------------------------------------------------------

printf "${BYellow}\n single Number\n${Color_Off}"
./PmergeMe 1

# -------------------------------------------------------------

printf "${BYellow}\n 2 Numbers[Sorted]\n${Color_Off}"
./PmergeMe 1 2

# -------------------------------------------------------------

printf "${BYellow}\n 2 Numbers[Unsorted]\n${Color_Off}"
./PmergeMe 2 1

# -------------------------------------------------------------

printf "${BYellow}\n 100 Numbers\n${Color_Off}"
amount=100

for k in {1..10}; do
	test=()
	for i in {1..$amount}; do
	test+=($((1 + $RANDOM % 10000)))
	done
	sorted_numbers=( $(printf '%s\n' "${test[@]}" | sort -n) )
	./PmergeMe ${test[@]} > test.txt

	echo "Before: ${test[@]}" > cmp.txt
	echo "After: ${sorted_numbers[@]]}" >> cmp.txt

	diff <(head -n 2 test.txt) cmp.txt
	if [ $? -eq 0 ]; then
		echo -e "${BGreen}OK${BWhite}"
		else
		echo -e "${BRed}Error: ${BWhite}"
		break
		fi
	rm -f test.txt
	rm -f cmp.txt
done

# -------------------------------------------------------------

printf "${BYellow}\n 1000 Numbers\n${Color_Off}"
amount=1000

for k in {1..10}; do
	test=()
	for i in {1..$amount}; do
	test+=($((1 + $RANDOM % 10000)))
	done
	sorted_numbers=( $(printf '%s\n' "${test[@]}" | sort -n) )
	./PmergeMe ${test[@]} > test.txt

	echo "Before: ${test[@]}" > cmp.txt
	echo "After: ${sorted_numbers[@]]}" >> cmp.txt

	diff <(head -n 2 test.txt) cmp.txt
	if [ $? -eq 0 ]; then
		echo -e "${BGreen}OK${BWhite}"
		else
		echo -e "${BRed}Error: ${BWhite}"
		break
		fi
	rm -f test.txt
	rm -f cmp.txt
done

# -------------------------------------------------------------

printf "${BYellow}\n 3000 Numbers\n${Color_Off}"
amount=3000

for k in {1..10}; do
	test=()
	for i in {1..$amount}; do
	test+=($((1 + $RANDOM % 10000)))
	done
	sorted_numbers=( $(printf '%s\n' "${test[@]}" | sort -n) )
	./PmergeMe ${test[@]} > test.txt

	echo "Before: ${test[@]}" > cmp.txt
	echo "After: ${sorted_numbers[@]]}" >> cmp.txt

	diff <(head -n 2 test.txt) cmp.txt
	if [ $? -eq 0 ]; then
		echo -e "${BGreen}OK${BWhite}"
		else
		echo -e "${BRed}Error: ${BWhite}"
		break
		fi
	rm -f test.txt
	rm -f cmp.txt
done





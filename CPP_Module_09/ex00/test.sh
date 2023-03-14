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

printf "${BYellow} Run no arguments... \n${Color_Off}"
./btc

# -------------------------------------------------------------

printf "${BYellow} Empty file... \n${Color_Off}"
touch empty.txt
./btc empty.txt
printf "${BYellow} Wrong file name... \n${Color_Off}"
./btc mpty.txt
rm -f empty.txt

# -------------------------------------------------------------

printf "${BYellow} Negtive number... \n${Color_Off}"
touch negtivenumber.txt
echo "date | value
2017-02-19 | -2
2017-02-22 | -130.01
2017-02-25 | -10.37
2017-02-28 | -999" > negtivenumber.txt
./btc negtivenumber.txt
rm -f negtivenumber.txt

# -------------------------------------------------------------

printf "${BYellow} Number larger than 1000... \n${Color_Off}"
touch toolarge.txt
echo "date | value
2017-02-19 | 1050.87
2017-02-22 | 1130.01
2017-02-25 | 1150.37
2017-02-28 | 1190.89" > toolarge.txt
./btc toolarge.txt
rm -f toolarge.txt

# -------------------------------------------------------------

printf "${BYellow} Invalid date... \n${Color_Off}"
touch invalid_date.txt
echo "date | value
2017-13-19 | 50.87
2017-02-29 | 130.01
2017-06-31 | 150.37
2017-55-55 | 190.89" > invalid_date.txt
./btc invalid_date.txt
rm -f invalid_date.txt

# -------------------------------------------------------------

printf "${BYellow} Valid inputs... \n${Color_Off}"
touch input.txt
echo "date | value
2011-01-03 | 3
2011-01-03 | 2
2011-01-03 | 1
2011-01-03 | 1.2
2011-01-09 | 1
2012-01-11 | -1
2001-42-42
2012-01-11 | 1
2012-01-11 | 2147483648" > input.txt
./btc input.txt
rm -f input.txt

# -------------------------------------------------------------

make fclean
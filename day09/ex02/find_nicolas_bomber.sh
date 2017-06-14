cat -e annuaire.txt | grep -n -i "nicolas\tbomber" | tr "	" "~" | tr "\n" "~" | cut -d "~" -f3

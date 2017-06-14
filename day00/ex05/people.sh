ldapsearch -Q "(uid=z*)" | grep -e ^"cn:" | sort -fdr | cut -c5-

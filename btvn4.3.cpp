# Chuong tr�nh ki?m tra s? ng�y trong th�ng

# Y�u c?u ngu?i d�ng nh?p s? th�ng
thang = int(input("Nh?p s? th�ng (1-12): "))

# Ki?m tra v� x�c d?nh s? ng�y trong th�ng
if thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 or thang == 12:
    print(f"Th�ng {thang} c� 31 ng�y.")
elif thang == 4 or thang == 6 or thang == 9 or thang == 11:
    print(f"Th�ng {thang} c� 30 ng�y.")
elif thang == 2:
    print("Th�ng 2 c� 28 ho?c 29 ng�y (nam nhu?n).")
else:
    print("S? th�ng kh�ng h?p l?.")


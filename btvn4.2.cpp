# Chuong tr�nh ki?m tra chia h?t cho 3, 5 ho?c c? 3 v� 5

# Y�u c?u ngu?i d�ng nh?p m?t s? nguy�n
so_nguyen = int(input("Nh?p m?t s? nguy�n: "))

# Ki?m tra v� in k?t qu?
if so_nguyen % 3 == 0 and so_nguyen % 5 == 0:
    print(f"{so_nguyen} chia h?t cho c? 3 v� 5.")
elif so_nguyen % 3 == 0:
    print(f"{so_nguyen} chia h?t cho 3.")
elif so_nguyen % 5 == 0:
    print(f"{so_nguyen} chia h?t cho 5.")
else:
    print(f"{so_nguyen} kh�ng chia h?t cho 3 ho?c 5.")


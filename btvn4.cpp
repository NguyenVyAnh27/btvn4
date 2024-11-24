# Chuong trình ki?m tra s? âm hay s? duong

# Yêu c?u ngu?i dùng nh?p m?t s? nguyên
so_nguyen = int(input("Nh?p m?t s? nguyên: "))

# Ki?m tra s? âm hay duong
if so_nguyen > 0:
    print(f"{so_nguyen} là s? duong.")
elif so_nguyen < 0:
    print(f"{so_nguyen} là s? âm.")
else:
    print(f"{so_nguyen} là s? không.")


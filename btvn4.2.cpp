# Chuong trình ki?m tra chia h?t cho 3, 5 ho?c c? 3 và 5

# Yêu c?u ngu?i dùng nh?p m?t s? nguyên
so_nguyen = int(input("Nh?p m?t s? nguyên: "))

# Ki?m tra và in k?t qu?
if so_nguyen % 3 == 0 and so_nguyen % 5 == 0:
    print(f"{so_nguyen} chia h?t cho c? 3 và 5.")
elif so_nguyen % 3 == 0:
    print(f"{so_nguyen} chia h?t cho 3.")
elif so_nguyen % 5 == 0:
    print(f"{so_nguyen} chia h?t cho 5.")
else:
    print(f"{so_nguyen} không chia h?t cho 3 ho?c 5.")


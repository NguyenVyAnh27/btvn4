# Chuong trình ki?m tra s? ngày trong tháng

# Yêu c?u ngu?i dùng nh?p s? tháng
thang = int(input("Nh?p s? tháng (1-12): "))

# Ki?m tra và xác d?nh s? ngày trong tháng
if thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 or thang == 12:
    print(f"Tháng {thang} có 31 ngày.")
elif thang == 4 or thang == 6 or thang == 9 or thang == 11:
    print(f"Tháng {thang} có 30 ngày.")
elif thang == 2:
    print("Tháng 2 có 28 ho?c 29 ngày (nam nhu?n).")
else:
    print("S? tháng không h?p l?.")


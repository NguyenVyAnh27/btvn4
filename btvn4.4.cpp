# Chuong trình ki?m tra s? th? ba có n?m trong kho?ng gi?a hai s? khác

# Yêu c?u ngu?i dùng nh?p vào ba s? nguyên
so_1 = int(input("Nh?p s? th? nh?t: "))
so_2 = int(input("Nh?p s? th? hai: "))
so_3 = int(input("Nh?p s? th? ba: "))

# Ki?m tra và in k?t qu?
if min(so_1, so_2) <= so_3 <= max(so_1, so_2):
    print(f"S? th? ba ({so_3}) n?m trong kho?ng gi?a {so_1} và {so_2}.")
else:
    print(f"S? th? ba ({so_3}) không n?m trong kho?ng gi?a {so_1} và {so_2}.")



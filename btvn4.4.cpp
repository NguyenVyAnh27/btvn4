# Chuong tr�nh ki?m tra s? th? ba c� n?m trong kho?ng gi?a hai s? kh�c

# Y�u c?u ngu?i d�ng nh?p v�o ba s? nguy�n
so_1 = int(input("Nh?p s? th? nh?t: "))
so_2 = int(input("Nh?p s? th? hai: "))
so_3 = int(input("Nh?p s? th? ba: "))

# Ki?m tra v� in k?t qu?
if min(so_1, so_2) <= so_3 <= max(so_1, so_2):
    print(f"S? th? ba ({so_3}) n?m trong kho?ng gi?a {so_1} v� {so_2}.")
else:
    print(f"S? th? ba ({so_3}) kh�ng n?m trong kho?ng gi?a {so_1} v� {so_2}.")



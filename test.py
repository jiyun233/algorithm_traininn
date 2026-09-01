tempurature_dict = {"111":36.4,"112":36.6,"113":36.2,"114": 38.5}

for tempurature_tuple in tempurature_dict.items():
    staff_id = tempurature_tuple[0]
    tempurature = tempurature_tuple[1]
    if tempurature >= 38:
        print(staff_id)
if __name__ == "__main__":
    point_num = int(input())
    all_coordinates = []

    score_place = [0, 0, 0, 0, 0]
    # 01234每个得分各有几处选址

    for pn in range(point_num):
        all_coordinates.append(list(map(int, input().split(' '))))
    for cd in all_coordinates:
        cd_up = [cd[0], cd[1] + 1]
        cd_down = [cd[0], cd[1] - 1]
        cd_left = [cd[0] - 1, cd[1]]
        cd_right = [cd[0] + 1, cd[1]]
        if cd_up in all_coordinates and cd_down in all_coordinates and cd_left in all_coordinates and cd_right in all_coordinates:
            # 上下左右都有则可选址
            cd_l_u = [cd[0] - 1, cd[1] + 1]
            cd_r_u = [cd[0] + 1, cd[1] + 1]
            cd_l_d = [cd[0] - 1, cd[1] - 1]
            cd_r_d = [cd[0] + 1, cd[1] - 1]
            score_point = []
            score_point.append(cd_l_u)
            score_point.append(cd_r_u)
            score_point.append(cd_l_d)
            score_point.append(cd_r_d)
            cd_score = 0
            for sp in score_point:
                if sp in all_coordinates:
                    cd_score += 1
            score_place[cd_score] += 1
    for sp in score_place:
        print(sp)

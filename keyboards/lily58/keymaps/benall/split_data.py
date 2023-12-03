import numpy as np
import argparse
lower = [
      "KC_ESC",
      "KC_1",
      "KC_2",
      "KC_3",
      "KC_4",
      "KC_5",
      "KC_6",
      "KC_7",
      "KC_8",
      "KC_9",
      "KC_0",
      "KC_EQL",
      "KC_TAB",
      "KC_Q",
      "KC_W",
      "KC_E",
      "KC_R",
      "KC_T",
      "KC_Y",
      "KC_U",
      "KC_I",
      "KC_O",
      "KC_P",
      "KC_MINS",
      "KC_LCTL",
      "KC_A",
      "KC_S",
      "KC_D",
      "KC_F",
      "KC_G",
      "KC_H",
      "KC_J",
      "KC_K",
      "KC_L",
      "KC_SCLN",
      "KC_QUOT",
      "KC_LSFT",
      "KC_Z",
      "KC_X",
      "KC_C",
      "KC_V",
      "KC_B",
      "KC_LBRC",
      "KC_RBRC",
      "KC_N",
      "KC_M",
      "KC_COMM",
      "KC_DOT",
      "KC_SLSH",
      "KC_GRV",
      "KC_LALT",
      "KC_LGUI",
      "TT(1)",
      "KC_SPC",
      "KC_ENT",
      "TT(2)",
      "KC_BSPC",
      "KC_DEL"
    ]
mid = [
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_UP",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_CAPS",
      "KC_SLSH",
      "KC_HASH",
      "KC_BSLS",
      "KC_LT",
      "KC_GT",
      "KC_NO",
      "KC_LEFT",
      "KC_DOWN",
      "KC_RGHT",
      "KC_NO",
      "KC_NO",
      "KC_LSFT",
      "KC_LCTL",
      "KC_LALT",
      "KC_LGUI",
      "KC_NO",
      "KC_NO",
      "KC_LCBR",
      "KC_RCBR",
      "KC_HOME",
      "KC_END",
      "KC_PGUP",
      "KC_PGDN",
      "KC_WBAK",
      "KC_WFWD",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS"
    ]
upper = [
      "KC_MPRV",
      "KC_MNXT",
      "KC_MPLY",
      "KC_VOLD",
      "KC_VOLU",
      "KC_MUTE",
      "KC_NO",
      "KC_7",
      "KC_8",
      "KC_9",
      "KC_PMNS",
      "KC_NO",
      "KC_F1",
      "KC_F2",
      "KC_F3",
      "KC_F4",
      "KC_F5",
      "KC_F6",
      "KC_NO",
      "KC_4",
      "KC_5",
      "KC_6",
      "KC_PPLS",
      "KC_NO",
      "KC_F7",
      "KC_F8",
      "KC_F9",
      "KC_F10",
      "KC_F11",
      "KC_F12",
      "KC_NO",
      "KC_1",
      "KC_2",
      "KC_3",
      "KC_PAST",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_LPRN",
      "KC_RPRN",
      "KC_NO",
      "KC_0",
      "KC_DOT",
      "KC_PEQL",
      "KC_PSLS",
      "KC_NO",
      "KC_TRNS",
      "KC_TRNS",
      "MO(3)",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS"
    ]
adj = [
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS"
    ]

def kbd_splitter(data:list[str], row_len_map:list[int])->list[str]:
    result = []
    prev_lsb = 0
    assert sum(row_len_map) == len(data)
    for row in range(len(row_len_map)):
        lsb = prev_lsb
        msb = prev_lsb + row_len_map[row]
        result.append(data[lsb:msb])
        prev_lsb += row_len_map[row]
    return result

def comment_gen(data:list[str], comment_format_str:list[str]):
    max_len = 0

    for row in data:
        for key in row:
            max_len = len(key) if len(key) >max_len else max_len

    res = []
    data_row:list[str]
    max_row = max(map(lambda a: len(a), data))
    spacer = " "*max_len
    for data_row, str_row in zip(data, comment_format_str):

        diff = max_row - len(data_row)
        num_spacers = 1 + diff
        half_len = int(len(data_row)/2)
        f_data_l = [max_len]+ data_row[0:half_len]
        f_data_r = [max_len]+ data_row[half_len: (len(data_row))]
        f_str_l = str_row.format(*f_data_l)
        f_str_r = str_row.format(*f_data_r)
        row_spacer = spacer*num_spacers
        if len(data_row) != max_row:
            row_spacer += " "*2
        f_str = f_str_l + row_spacer + f_str_r
        res.append(f_str) #* converts from list to *args
    return res

LILY_COMMENT_STR = [
    "|{1:{0}}|{2:{0}}|{3:{0}}|{4:{0}}|{5:{0}}|{6:{0}}|",
    "|{1:{0}}|{2:{0}}|{3:{0}}|{4:{0}}|{5:{0}}|{6:{0}}|",
    "|{1:{0}}|{2:{0}}|{3:{0}}|{4:{0}}|{5:{0}}|{6:{0}}|",
    "|{1:{0}}|{2:{0}}|{3:{0}}|{4:{0}}|{5:{0}}|{6:{0}}|{7:{0}}|",
    "|{1:{0}}|{2:{0}}|{3:{0}}|{4:{0}}|",
]

LILY_ROW_LEN_MAP = [12, 12, 12, 14, 8]


cov_data = kbd_splitter(upper, LILY_ROW_LEN_MAP)
comment = comment_gen(cov_data, LILY_COMMENT_STR)
rows = []
for row in cov_data:
    rows.append(",".join(row))
print(",\n".join(rows))

print("\n".join(comment))

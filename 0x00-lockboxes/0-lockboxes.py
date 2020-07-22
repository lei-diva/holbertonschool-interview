#!/usr/bin/python3
""" lockbox algo """


def canUnlockAll(boxes):
    """ lockbox algorithm  """
    is_locked = [False for i in range(len(boxes))]
    is_locked[0] = True
    checker = [0]
    while len(checker):
        check_box = checker.pop(0)
        for box in boxes[check_box]:
            if isinstance(box, int) and box >= 0 and box < len(boxes) and not is_locked[box]:
                is_locked[box] = True
                checker.append(box)
    return all(is_locked)










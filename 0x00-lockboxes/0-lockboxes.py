#!/usr/bin/python3


def canUnlockAll(boxes):
    is_locked = [False for i in range(len(boxes))]
    is_locked[0] = True

    for i, box in enumerate(boxes):
        for key in box:
            if key != i:
                is_locked[key] = True

    return all(is_locked)

#include "slide_line.h"

/**
 * slide_line - Slides and merges an array of integers
 * @line: Pointer to the array of integers
 * @size: Number of elements in @line
 * @direction: Direction to slide and merge (SLIDE_LEFT or SLIDE_RIGHT)
 * 
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction) {
    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT) {
        return 0;
    }

    if (direction == SLIDE_LEFT) {
        for (size_t i = 0; i < size; i++) {
            size_t next = i;

            while (next < size && line[next] == 0) {
                next++;
            }
            if (next >= size) break;
            if (i != next) {
                line[i] = line[next];
                line[next] = 0;
            }

            if (i + 1 < size && line[i] == line[i + 1]) {
                line[i] *= 2;
                line[i + 1] = 0;
            }
        }
    } else { // SLIDE_RIGHT
        for (size_t i = size; i > 0; i--) {
            size_t next = i - 1;

            while (next > 0 && line[next] == 0) {
                next--;
            }
            if (next == 0 && line[0] == 0) break;
            if (next != i - 1) {
                line[i - 1] = line[next];
                line[next] = 0;
            }

            if (i - 1 > 0 && line[i - 1] == line[i - 2]) {
                line[i - 1] *= 2;
                line[i - 2] = 0;
            }
        }
    }

    return 1;
}

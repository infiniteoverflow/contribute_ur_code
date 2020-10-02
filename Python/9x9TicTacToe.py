import pygame
import sys

pygame.init()

width = 900
# width of screen

height = 600
# Height of screen

box_color = (245, 27, 34)
# color of msg box

box_pos = [300, 550]
# Position of msg box

box_size = 370
# Size of msg box

main_line_color = (0, 255, 0)
# Color of Line for Outer Grid

inner_line_color = (196, 20, 37)
# Color of Line for Inner Grid

box_1_pos, box_2_pos, box_3_pos = (150, 50), (300, 50), (450, 50)
box_4_pos, box_5_pos, box_6_pos = (150, 200), (300, 200), (450, 200)
box_7_pos, box_8_pos, box_9_pos = (150, 350), (300, 350), (450, 350)
# Position of the 9 Outer Boxes

hor_line_3, hor_line_6, vertical_line_3, vertical_line_6 = [box_4_pos, (600, 200)], [box_7_pos, (600, 350)], \
                                                           [box_2_pos, (300, 500)], [box_3_pos, (450, 500)]

vertical_line_1, vertical_line_2, vertical_line_4, vertical_line_5 = [(200, 50), (200, 500)], [(250, 50), (250, 500)],\
                                                                     [(350, 50), (350, 500)], [(400, 50), (400, 500)]

vertical_line_7, vertical_line_8, hor_line_1, hor_line_2 = [(500, 50), (500, 500)], [(550, 50), (550, 500)],\
                                                           [(150, 100), (600, 100)], [(150, 150), (600, 150)]

hor_line_4, hor_line_5, hor_line_7, hor_line_8 = [(150, 250), (600, 250)], [(150, 300), (600, 300)], \
                                                 [(150, 400), (600, 400)], [(150, 450), (600, 450)]
# Positions of all the Grid lines of 9x9 TicTacToe

screen = pygame.display.set_mode((width, height), 0, 32)
pygame.display.set_caption("Tic Tac Toe")

myfont = pygame.font.SysFont("Lucida Calligraphy", 30)

text_color = (0, 0, 0)
# Color of Text for Msg Boxes

outer_box_1 = [[(150, 50), (200, 50), (250, 50)], [(150, 100), (200, 100), (250, 100)], [(150, 150), (200, 150), (250, 150)]]

outer_box_2 = [[(300, 50), (350, 50), (400, 50)], [(300, 100), (350, 100), (400, 100)], [(300, 150), (350, 150), (400, 150)]]

outer_box_3 = [[(450, 50), (500, 50), (550, 50)], [(450, 100), (500, 100), (550, 100)], [(450, 150), (500, 150), (550, 150)]]

outer_box_4 = [[(150, 200), (200, 200), (250, 200)], [(150, 250), (200, 250), (250, 250)], [(150, 300), (200, 300), (250, 300)]]

outer_box_5 = [[(300, 200), (350, 200), (400, 200)], [(300, 250), (350, 250), (400, 250)], [(300, 300), (350, 300), (400, 300)]]

outer_box_6 = [[(450, 200), (500, 200), (550, 200)], [(450, 250), (500, 250), (550, 250)], [(450, 300), (500, 300), (550, 300)]]

outer_box_7 = [[(150, 350), (200, 350), (250, 350)], [(150, 400), (200, 400), (250, 400)], [(150, 450), (200, 450), (250, 450)]]

outer_box_8 = [[(300, 350), (350, 350), (400, 350)], [(300, 400), (350, 400), (400, 400)], [(300, 450), (350, 450), (400, 450)]]

outer_box_9 = [[(450, 350), (500, 350), (550, 350)], [(450, 400), (500, 400), (550, 400)], [(450, 450), (500, 450), (550, 450)]]
# Co-ordinates for all the inner boxes inside Outer Box

matrix_9x9_cord = [[outer_box_1, outer_box_2, outer_box_3],
                   [outer_box_4, outer_box_5, outer_box_6],
                   [outer_box_7, outer_box_8, outer_box_9]]
# Creating a Matrix consisting of Co-ordinates of all Boxes in our Grid.

class TictactoeGame:

    def game_logic(self, box_details):
        # Creating this Function to check if any Outer Box is won by player in a Row/column/Diagonally.
        for box_row in range(0, 3):
            # Checking for Win inside Outer Box for a Row.
            for box in range(0, 3):

                for row in range(0, 3):

                    try:
                        if box_details[box_row][box][row][0] == box_details[box_row][box][row][1] == box_details[box_row][box][row][2] and not isinstance(box_details[box_row][box][row][0], tuple):

                            box_details[box_row].pop(box)
                            box_details[box_row].insert(box, XO)
                    # Setting the entire Outer Box as 'X' or '0' if either of 'X' or '0' have won in a Row.
                    except IndexError:
                        continue


        for box_row in range(0, 3):
            # Checking for Win inside Outer Box for a Column.
            for box in range(0, 3):

                for col in range(0, 3):

                    try:
                        if box_details[box_row][box][0][col] == box_details[box_row][box][1][col] == box_details[box_row][box][2][col] and not isinstance(box_details[box_row][box][0][col], tuple):

                            box_details[box_row].pop(box)
                            box_details[box_row].insert(box, XO)
                            # Setting the entire Outer Box as 'X' or '0' if either of 'X' or '0' have won in a Column.
                    except IndexError:
                        continue

        for box_row in range(0, 3):
            # Checking for a Diagonal Win inside Outer Box.
            for box in range(0, 3):

                    try:
                        if box_details[box_row][box][0][0] == box_details[box_row][box][1][1] == box_details[box_row][box][2][2] and not isinstance(box_details[box_row][box][0][0], tuple):
                            box_details[box_row].pop(box)
                            box_details[box_row].insert(box, XO)
                            # Setting the entire Outer Box as 'X' or '0' if either of 'X' or '0' have won Diagonally.

                        elif box_details[box_row][box][0][2] == box_details[box_row][box][1][1] == box_details[box_row][box][2][0] and not isinstance(box_details[box_row][box][0][2], tuple):
                            box_details[box_row].pop(box)
                            box_details[box_row].insert(box, XO)
                            # Setting the entire Outer Box as 'X' or '0' if either of 'X' or '0' have won Diagonally(Reverse diagonal).
                    except IndexError:
                        continue

        for box_row in range(0, 3):
            # Checking for a Tie inside the Outer Box.
            for box in range(0, 3):

                count = 0
                for row in range(0, 3):

                    try:
                        if (box_details[box_row][box][row][0] == 'X' or box_details[box_row][box][row][0] == '0') and \
                                (box_details[box_row][box][row][1] == 'X' or box_details[box_row][box][row][1] == '0') and \
                                (box_details[box_row][box][row][2] == 'X' or box_details[box_row][box][row][2] == '0'):
                            # Checking if all elements inside Outer Box are filled with 'X' or '0'.
                            count += 1
                            # If above condition is satisfied 3 times means it is a Tie for that Outer Box.
                            if count == 3:
                                box_details[box_row].pop(box)
                                box_details[box_row].insert(box, 'Tie')
                            # Setting that Outer Box as 'Tie'.

                    except IndexError:
                        continue

        win = self.outer_box_check_for_win(box_details)

        if win:
            return True

        pygame.display.update()


    def tie(self, box_details):
        # Using this Func to check for Tie inside the Grid.
        count = 0

        for box_row in range(0, 3):

            if ((box_details[box_row][0] == 'X' or box_details[box_row][0] == '0') and
                    (box_details[box_row][1] == 'X' or box_details[box_row][1] == '0') and
                    (box_details[box_row][2] == 'X' or box_details[box_row][2] == '0')):
                # Checking if all elements inside the Grid are filled with 'X' or '0'.
                count += 1

            elif (box_details[box_row][0] == 'Tie' and box_details[box_row][1] == 'Tie' and box_details[box_row][2] == 'Tie'):
                # Checking if all elements inside the Grid are filled with 'Tie'.
                count += 1

        if count == 3:
            # If all the boxes inside our Grid are either filled with only 'X' or '0' or filled with 'Tie'.
            msg = 'Game Draw!!'
            text_cord = (450, 580)
            self.display_msg_box(msg, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
            pygame.display.update()
            return True


    def outer_box_check_for_win(self, box_details):
        # Using this Function to check for Win if any Grid Box is Won by player in a Row/Column/Diagonally.
        for box_row in range(0, 3):
            # Checking for Win inside the Grid for a Row.

            if box_details[box_row][0] == box_details[box_row][1] == box_details[box_row][2] and box_details[box_row][0] != 'Tie' and \
                    not isinstance(box_details[box_row][0], list):

                msg = box_details[box_row][0] + ' Won!'
                text_cord = (465, 580)
                self.display_msg_box(msg, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
                return True

        for box_row in range(0, 3):
            # Checking for Win inside the Grid for a Column.

            if box_details[0][box_row] == box_details[1][box_row] == box_details[2][box_row] and box_details[0][box_row]!= 'Tie' and \
                    not isinstance(box_details[0][box_row], list):

                msg = box_details[0][box_row] + ' Won!'
                text_cord = (465, 580)
                self.display_msg_box(msg, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
                return True

        if box_details[0][0] == box_details[1][1] == box_details[2][2] and box_details[0][0] != 'Tie' and \
                not isinstance(box_details[0][0], list):
            # Checking for Win inside the Grid for a Diagonal.

            msg = box_details[0][0] + ' Won!'
            text_cord = (465, 580)
            self.display_msg_box(msg, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
            return True

        elif box_details[0][2] == box_details[1][1] == box_details[2][0] and box_details[0][2] != 'Tie' and \
                not isinstance(box_details[0][2], list):
            # Checking for Win inside the Grid for a Reverse Diagonal.

            msg = box_details[0][2] + ' Won!'
            text_cord = (465, 580)
            self.display_msg_box(msg, (box_pos[0], box_pos[1], box_size, box_size-100), text_cord)
            return True


    def display_msg_box(self, msg, rectangle, text_cord):
        # Creating a common Function to display any Msg on a Msg Box.
        label = myfont.render(msg, 1, text_color)
        screen.fill(box_color, rectangle)
        text_rect = label.get_rect(center=text_cord)
        screen.blit(label, text_rect)

game = TictactoeGame()

class Player:

    def draw_x_or_zero(self, cursor_pos_x, cursor_pos_y, text_color, x_or_zero):
    # Creating a function to display image of 'X' or '0' according to the click and also setting the elements inside
    # the Matrix according to the click we made.

        try:
            if x_or_zero == 'X':
                image = pygame.image.load('ex.png')
                message = "0's Turn"
                text_cord = (465, 580)
                game.display_msg_box(message, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
                # Loading Image and creating Msg box for displaying Turns
                pygame.display.update()

            else:
                image = pygame.image.load('zero.png')
                message = "X's Turn"
                text_cord = (465, 580)
                game.display_msg_box(message, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
                pygame.display.update()

            x_cord_lst = [(150, 200, 250), (300, 350, 400), (450, 500, 550)]
            # List of x co-ordinates for every row of Grid
            y_cord_lst = [(50, 100, 150), (200, 250, 300), (350, 400, 450)]
            # List of y co-ordinates for every column of Grid
            img_x_cord, col_no = self.inner_box_draw_x_or_zero(cursor_pos_x, x_cord_lst)
            # Getting the column no and x co-ordinate for displaying Image according to cursor position
            img_y_cord, row_no = self.inner_box_draw_x_or_zero(cursor_pos_y, y_cord_lst)
            # Getting the row no and y co-ordinate for displaying Image according to cursor position

            box_x_no = None
            if box_1_pos[0] <= cursor_pos_x < box_2_pos[0]:

                if box_1_pos[1] <= cursor_pos_y < box_4_pos[1]:
                    # Conditions for Outer Box
                    box_x_no = 0
                    box_row_no = 0
                    # Setting the Outer Box no and Row no in which click has been made according to Cursor Position

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        # Checking if element of inner box consists of that inner box's co-ordinates
                        screen.blit(image, (img_x_cord, img_y_cord))
                        # Displaying 'X' or '0' Image
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero
                    # Setting the elements of inner box which is clicked as 'X' or '0'

                elif box_4_pos[1] <= cursor_pos_y < box_7_pos[1]:
                    box_x_no = 0
                    box_row_no = 1

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero

                else:
                    box_x_no = 0
                    box_row_no = 2

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero


            elif box_2_pos[0] <= cursor_pos_x < box_3_pos[0]:

                if box_1_pos[1] <= cursor_pos_y < box_4_pos[1]:
                    box_x_no = 1
                    box_row_no = 0

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero

                elif box_4_pos[1] <= cursor_pos_y < box_7_pos[1]:
                    box_x_no = 1
                    box_row_no = 1

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero

                else:
                    box_x_no = 1
                    box_row_no = 2

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero


            else:
                if box_1_pos[1] <= cursor_pos_y < box_4_pos[1]:
                    box_x_no = 2
                    box_row_no = 0

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero

                elif box_4_pos[1] <= cursor_pos_y < box_7_pos[1]:
                    box_x_no = 2
                    box_row_no = 1

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero

                else:
                    box_x_no = 2
                    box_row_no = 2

                    if matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] == (img_x_cord, img_y_cord):
                        screen.blit(image, (img_x_cord, img_y_cord))
                        matrix_9x9_cord[box_row_no][box_x_no][row_no][col_no] = x_or_zero


        except TypeError:
            msg = 'Click inside the Box'
            text_cord = (460, 580)
            game.display_msg_box(msg, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
            # Displaying Msg Box to tell user to click inside the TicTacToe Grid
    
        except IndexError:
            msg = 'Box already Complete!'
            text_cord = (485, 580)
            game.display_msg_box(msg, (box_pos[0], box_pos[1], box_size, box_size - 100), text_cord)
            # Displaying Msg Box to tell user to not click in same Outer Box again.


    def inner_box_draw_x_or_zero(self, cursor_cord, cord_lst):
        # Creating a Func to check for inner box where the click is made using one co-ordinate of Cursor at a time and
        # using it to display image at that exact Box.
        count = 0
        img_cord = None
        col_or_row_no = None

        for item in cord_lst:

            if count == 0:
                # Using count to trigger the if conditions below only once according to our list.

                if item[0] <= cursor_cord < item[1]:
                    # Checking conditions for Row/column in which the click is made and hence setting the row_no/col_no accordingly.
                    img_cord = item[0]
                    col_or_row_no = 0
                    break

                elif item[1] <= cursor_cord < item[2]:
                    img_cord = item[1]
                    col_or_row_no = 1
                    break

                elif item[2] <= cursor_cord < cord_lst[1][0]:
                    img_cord = item[2]
                    col_or_row_no = 2
                    break

            elif count == 1:

                if item[0] <= cursor_cord < item[1]:
                    img_cord = item[0]
                    col_or_row_no = 0
                    break

                elif item[1] <= cursor_cord < item[2]:
                    img_cord = item[1]
                    col_or_row_no = 1
                    break

                elif item[2] <= cursor_cord < cord_lst[2][0]:
                    img_cord = item[2]
                    col_or_row_no = 2
                    break

            elif count == 2:

                if item[0] <= cursor_cord < item[1]:
                    img_cord = item[0]
                    col_or_row_no = 0
                    break

                elif item[1] <= cursor_cord < item[2]:
                    img_cord = item[1]
                    col_or_row_no = 1
                    break

                elif item[2] <= cursor_cord < 600:
                    img_cord = item[2]
                    col_or_row_no = 2
                    break

            count += 1
        return img_cord, col_or_row_no

player = Player()
flag = True
# Used to alternate b/w 'X' and '0'
game_over = False
while not game_over:

    for event in pygame.event.get():

        if event.type == pygame.QUIT:
            sys.exit()

        if event.type == pygame.MOUSEBUTTONDOWN:
            global x, y
            x, y = pygame.mouse.get_pos()

            if flag:
                XO = 'X'
                player.draw_x_or_zero(x, y, text_color, XO)
                # box_check(img_type, box_no, matrix_9x9_cord)
                flag = False

            else:
                XO = '0'
                player.draw_x_or_zero(x, y, text_color, XO)
                # box_check(img_type, box_no, matrix_9x9_cord)
                flag = True

            game_over = game.game_logic(matrix_9x9_cord)
            if not game_over:
                game_over = game.tie(matrix_9x9_cord)

    pygame.draw.line(screen, inner_line_color, hor_line_1[0], hor_line_1[1])
    pygame.draw.line(screen, inner_line_color, hor_line_2[0], hor_line_2[1])
    pygame.draw.line(screen, main_line_color, hor_line_3[0], hor_line_3[1])
    pygame.draw.line(screen, inner_line_color, hor_line_4[0], hor_line_4[1])
    pygame.draw.line(screen, inner_line_color, hor_line_5[0], hor_line_5[1])
    pygame.draw.line(screen, main_line_color, hor_line_6[0], hor_line_6[1])
    pygame.draw.line(screen, inner_line_color, hor_line_7[0], hor_line_7[1])
    pygame.draw.line(screen, inner_line_color, hor_line_8[0], hor_line_8[1])
    pygame.draw.line(screen, inner_line_color, vertical_line_1[0], vertical_line_1[1])
    pygame.draw.line(screen, inner_line_color, vertical_line_2[0], vertical_line_2[1])
    pygame.draw.line(screen, main_line_color, vertical_line_3[0], vertical_line_3[1])
    pygame.draw.line(screen, inner_line_color, vertical_line_4[0], vertical_line_4[1])
    pygame.draw.line(screen, inner_line_color, vertical_line_5[0], vertical_line_5[1])
    pygame.draw.line(screen, main_line_color, vertical_line_6[0], vertical_line_6[1])
    pygame.draw.line(screen, inner_line_color, vertical_line_7[0], vertical_line_7[1])
    pygame.draw.line(screen, inner_line_color, vertical_line_8[0], vertical_line_8[1])
    pygame.display.update()

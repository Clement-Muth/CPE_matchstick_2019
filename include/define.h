/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** define
*/

#ifndef DEFINE_H_
#define DEFINE_H_


////////////////////////////////////////////////////////////
/// HEADER
///
////////////////////////////////////////////////////////////


#define av match->av

#define ac match->ac

#define map match->map

#define line my_atoi(av[1])

#define star ((line * 2) + 1)

#define turn match->turn

#define game match->game

#define get_line match->get_line

#define get_nbr match->get_nbr



#define __ERROR_MSG my_strcat("[ ERROR ][ ", my_strcat(_FILE, my_strcat(" ][ l"\
": ", my_strcat(my_itos(__LINE), my_strcat(" ] ", __ERROR)))))

#endif /* !DEFINE_H_ */
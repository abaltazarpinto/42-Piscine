# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    theory.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 12:29:59 by abaltaza          #+#    #+#              #
#    Updated: 2022/10/12 15:44:23 by abaltaza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Is there a need to check for NULL after allocating memory, when kernel uses overcommit memory?

yes, you should check for failures returned by malloc. In an environment that overcommits memory you will not be able to detect and recover from failures due to the environment running out of physical storage required when you write to parts of the address space that have been allocated to your program by a previous call to amlloc. 

However, this is not the only problem that would cause a malloc to fail in a traditional environment. A request for a particularly large block memory when the address space of yopur program hasbecome fragmented may fail even if there is potentially enouygh total physical memory to satisfy the request. Because there is no contiguous range of free address space malloc must fail. This type of failure must be signaled by malloc returning NULL, wheter or not the environment is overcommiting memory !

MALLOC

You must check return value for NULL every time. Any library function can fail. Even fclose() do. 

The most of software is badly written and doesn't contain all checks. 

malloc can't return something othe than NULL or pointer. All-or-nothing. You can't get 1 byte from malloc if you ask for 10. 

:

#set( $regex = "([a-z])([A-Z]+)")
#set( $replacement = "$1_$2")
#set( $toSnake = $NAME.replaceAll($regex, $replacement).toUpperCase())
#[[#ifndef]]# _${toSnake}_H_
#[[#define]]# _${toSnake}_H_
class ${NAME} 
{
};
#[[#endif]]#

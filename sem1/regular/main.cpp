/*                              №1
a)  \b([a-b]{2}a[a-b]*b[a-b]{4})|(b[a-b]a[a-b]{2})|(aba{4})\b
b)  (aa|ab|bb|ba)+
c)  (?![a-b]*ab)[a-b]*
d)  (?![a-b]*aab)[a-b]*
e)  (?![a-c]*bb)[a-c]*
f)  [a-c]*b[a-c]a[a-c]*
g)  [a-c]*ac[a-c]*
 -----------------------------------------------------------------------
                                №2
 \d{0,255}\.\d{0,255}\.\d{0,255}\.\d{0,255}
 -----------------------------------------------------------------------
                               ??? №3 ???
 ^([^()]*\((?:[^()]|())*\)[^()]*)+$|^[^()]+?$(([a-z]|\d+)[\+\-\/\*]){1,}([a-z]|\d+)(=([a-z]|\d+))$
 */

===
graph
===

(#1=100 #1# #1#)
#0= (1 . #0#)

---

(program
  (list
    (graph
      (number))
    (graph)
    (graph))
  (graph
    (list
      (number)
      (dot)
      (graph))))

===
graph id is at most 8 digits
===
#12345678=1
#12345678#

---

(program
  (graph
    (number))
  (graph))

===
graph id longer than 8 digits
===
#123456789=1

---

(program
  (ERROR
    (decimal))
  (symbol))

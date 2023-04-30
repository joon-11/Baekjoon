import math
a, b = map(int, input().split())

student = []
grade = []

for i in range(a):
    c, d = map(int, input().split())
    student.append(c)
    grade.append(d)


boy_grade = []
girl_grade = []
room = 0
result = 0
for i in range(len(student)):
    if student[i] == 0:
        boy_grade.append(grade[i])
    elif student[i] == 1:
        girl_grade.append(grade[i])

for i in range(7):
    a = math.ceil(boy_grade.count(i)/2)
    b = math.ceil(girl_grade.count(i)/2)
    room = a + b
    result += room

print(result)


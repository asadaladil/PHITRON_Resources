from school import School, Classroom, Subject
from persons import Student,Teacher

def main():
    school=School('Adam Jee','Uttara')

    eight=Classroom('eight')
    school.add_classroom('eight')
    nine=Classroom('nine')
    school.add_classroom('nine')
    
    ten=Classroom('ten')
    school.add_classroom('ten')


    abul =Student('Abir khan',eight)
    school.student_admission(abul,eight)
    abul =Student('Abir khan',eight)
    school.student_admission(abul,eight)
    abul =Student('Abir khan',eight)
    school.student_admission(abul,eight)


    phy_teacher=Teacher('topon')

    physics=Subject('Physics',phy_teacher)
    eight.add_subject(physics)

    print(school)

main()

class School:
    def __init__(self,name,address) -> None:
        self.name=name
        self.address=address
        self.teachers={}
        self.classroom ={}

    def add_classroom(self,classroom):
        self.classroom[classroom]=classroom

    def add_teacher(self,subject,teacher):
        self.teachers[subject]=teacher
    
    def student_admission(self,student,classroom):
        if classroom.name in self.classroom:
            self.classroom[classroom.name].add_student(student)
        else:
            print(f'No classroom as name {classroom}')

    def __repr__(self) -> str:
        print('-------ALL CLASSROOM---------')
        for key, value in self.classroom.items():
            print(key)

        print('--------Student-------')
        eight=self.classroom['eight']
        print(len(eight.student))
        return ''


class Classroom:
    def __init__(self,name) -> None:
        self.name=name
        self.students=[]
        self.subjects=[]

    def add_student(self,student):
        serial_id=f'{self.name}-{len(self.students)+1}'
        student.id=serial_id
        student.classroom=self.name
        self.students.append(student)

    def add_subject(self,subject):
        self.subjects.append(subject)

    def take_semeter_final(self):
        for subject in self.subjects:
            subject.exam()

    def __str__(self) -> str:
        return f'{self.name}-{len(self.students)}'
    

class Subject:
    def __init__(self,name,teacher) -> None:
        self.name=name
        self.teacher=teacher
        self.max_marks=100
        self.pass_marks=33
    
    def exam(self,students):
        for student in students:
            mark =self.teacher.take_exam()
            student.marks[self.name]=mark
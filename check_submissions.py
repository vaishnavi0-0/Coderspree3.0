import os
from pathlib import Path
from typing import Any, List
from mdutils.mdutils import MdUtils
import requests


home = os.path.abspath(Path(__file__).parent)

submission_architecture = {"Week_1": 10, "Week_2":10, "Week_3":10, "Week_4":9};
domains = ["SecondYear", "ThirdYear","FourthYear"]


class Student:
    def __init__(self, name, githubID, lilbraryid, domain, year):
        self.name = name
        self.githubID = githubID
        self.libraryid = lilbraryid
        self.solved = 0
        self.domain = domain
        self.completed = True
        self.logs = ""
        self.year = year
        self.fetch_img_url()

    def add_questions_solved(self, count):
        self.solved += count

    def __repr__(self) -> str:
        return f"""
            Name: {self.name}
            GitHubID: {self.githubID}
            LibraryID: {self.libraryid}
            Domain: {self.domain}
            Year: {self.year}
            Questions Solved: {self.solved}
            Logs: {self.logs}
        """

    def log_value(self, val):
        self.logs += val

    def fetch_img_url(self):
        resp = requests.get(url=f"https://api.github.com/users/{self.githubID}")
        data = resp.json()
        try:
            self.url = data["avatar_url"] + "&s=100"
        except KeyError:
            self.url = "https://avatars.githubusercontent.com/u/84376218?v=4&s=100"


def check_structure(path, student: Student):
    folderName = os.listdir(path)
    folderNameLowered = [x.lower() for x in folderName]

    for key, value in submission_architecture.items():
        if key.lower() in folderNameLowered:
            solved = len(
                os.listdir(
                    os.path.join(path, folderName[folderNameLowered.index(key.lower())])
                )
            )
            if solved < value:
                student.completed = False

            student.add_questions_solved(solved)
            student.log_value(
                f"Completed `{solved}` with minimum `{value}` in `{key}`, "
            )
        else:
            student.completed = False
            student.log_value(f"`{key}` Folder not found, ")


def write_to_readme(filename, students_list):

    mdFile = MdUtils(file_name=filename, title="Welcome to Coderspree3.0 🎃")
#     ![Innogeeks Logo](https://user-images.githubusercontent.com/33064931/193105033-d03aa2e9-d4c3-4d02-b33e-466f3c567f39.png)
    mdFile.new_paragraph(" **One-month Coding sprint to summon all the wizards of problem-solving, ranging from beginner to advanced! ✨ Get ready to be a part of the most auspicious society of the college, Innogeeks. Exclusive  access to buzzing discord server of Innogeeks which is full of knowledge and innovation. 🚀 Become a part of mentoring sessions by our amazing team of coder spree mentors, not just that - be ready to outshine on the leaderboard and get a chance to win exclusive coderspree goodies! 🍫 (limited to students of KIET, we'll expand it next time :) )**")
    mdFile.new_line("<p align = 'center'><a href='https://innogeeks.in/' target='_blank'><img src='https://template-mail-images.s3.ap-south-1.amazonaws.com/20231002_150040_0000+(1).png'></a></p>")

    mdFile.new_paragraph(
        mdFile.new_inline_image(
            text="Status Badge",
            path="https://github.com/InnogeeksOrganization/coderspree/actions/workflows/checkSubmission.yml/badge.svg",
        )
    )
    mdFile.new_line()
    
    mdFile.new_paragraph("**Please visit the [Guide](./Guide/README.md)**")

    mdFile.new_line()

    mdFile.new_paragraph(
        "Minimum problems to complete | "
        + "".join(
            f"**{key}**: `{value}` | " for key, value in submission_architecture.items()
        )
    )

    list_of_strings: List[Any] = ["No", "Profile", "Name", "Year", "Solved"]

    cols_count = len(list_of_strings)
    mdFile.new_line()

    count = 0
    for x in range(len(students_list)):
        student = students_list[x]
        count += 1
        list_of_strings.extend(
            [
                count,
                mdFile.new_inline_image(
                    text=student.name,
                    path=student.url,
                ),
                mdFile.new_inline_link(
                    link=f"https://github.com/{student.githubID}"
                    if student.githubID != "Invalid Foldername"
                    else "https://github.com/InnogeeksOrganization",
                    text=student.name,
                ),
               
                student.year,
                str(student.solved),
            ]
        )

    mdFile.new_header(level=1, title="Stats")
    mdFile.new_line()
    mdFile.new_table(
        columns=cols_count,
        rows=len(students_list) + 1,
        text=list_of_strings,
        text_align="center",
    )

    mdFile.create_md_file()


def write_to_pendingReadme(filename, students_list):

    mdFile = MdUtils(file_name=filename, title="Welcome to Coderspree3.0 🔥")

    list_of_strings = ["Profile", "Name", "Solved", "Year", "logs"]

    cols_count = len(list_of_strings)
    mdFile.new_line()

    for x in range(len(students_list)):
        student = students_list[x]
        list_of_strings.extend(
            [
                mdFile.new_inline_image(
                    text=student.name,
                    path=student.url,
                ),
                mdFile.new_inline_link(
                    link=f"https://github.com/{student.githubID}"
                    if student.githubID != "Invalid Foldername"
                    else "https://github.com/InnogeeksOrganization",
                    text=student.name,
                ),
              
                str(student.solved),
                student.year,
                student.logs,
            ]
        )

    mdFile.new_line()
    mdFile.new_table(
        columns=cols_count,
        rows=len(students_list) + 1,
        text=list_of_strings,
        text_align="center",
    )

    mdFile.create_md_file()


completed_student_list: List[Student] = []
incompleted_student_list: List[Student] = []

for domain in domains:
    for filename in os.listdir(os.path.join(home, domain)):
        year = "Invalid Foldername"
        name = "Invalid Foldername"
        libId = "Invalid Foldername"
        githubid = "Invalid Foldername"
        try:
            [githubid, name, libId, year] = filename.split("_")
        except ValueError:
            print(filename, "is not correct")
        if name == "Invalid Foldername":
            try:
                [githubid, name, libId] = filename.split("_")
            except ValueError:
                print(filename, "is not correct")

        student = Student(name, githubid, libId, domain, year)
        check_structure(os.path.join(home, os.path.join(domain, filename)), student)
        if student.completed:
            completed_student_list.append(student)
        else:
            incompleted_student_list.append(student)

incompleted_student_list.sort(key=lambda x: x.solved, reverse=True)
completed_student_list.sort(key=lambda x: x.solved, reverse=True)

write_to_readme("README.md", completed_student_list)
write_to_pendingReadme("PendingStudents.md", incompleted_student_list)

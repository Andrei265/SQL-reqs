SELECT students.fio_student AS Name, groups.group_number AS Group, faculties.name AS Faculty FROM students INNER JOIN groups ON students.group_id=groups.id INNER JOIN faculties ON groups.faculty_id=faculties.id;
SELECT students.fio_student AS Name, exams.assessment AS Assessment, disciplines.name_discipline AS Discipline FROM students INNER JOIN exams ON students.id=exams.student_id INNER JOIN disciplines ON exams.discipline_id=disciplines.id;
SELECT teachers.fio_teachers AS Teacher, exams.assessment AS Assessment, disciplines.name_discipline AS Discipline FROM teachers INNER JOIN disciplines ON teachers.id=disciplines.teacher_id INNER JOIN exams ON exams.discipline_id=disciplines.id;
SELECT id, fio_student AS Name FROM students UNION SELECt id, fio_teachers FROM teachers;
SELECT id FROM students INTERSECT SELECT id FROM teachers;
SELECT id FROM disciplines EXCEPT SELECT discipline_id FROM exams;
SELECT * FROM faculties, groups, students;
SELECT DISTINCT student_id, discipline_id FROM exams;

SELECT students.fio_student, groups.group_number FROM students LEFT OUTER JOIN groups ON (students.group_id = groups.id);
SELECT groups.group_number, students.fio_student FROM students RIGHT OUTER JOIN groups ON (students.group_id = groups.id);
SELECT * FROM students FULL OUTER JOIN groups ON (students.group_id = groups.id);
SELECT * FROM groups NATURAL LEFT JOIN students;
SELECT * FROM students WHERE id IN (SELECT id FROM exams WHERE assessment > 4);
SELECT * FROM students WHERE group_id IN (SELECT id FROM groups WHERE id > 7);
SELECT * FROM teachers WHERE id IN (SELECT teacher_id FROM disciplines WHERE id IN (1, 2, 3));

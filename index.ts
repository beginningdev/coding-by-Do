//khai báo kiểu dữ liệu cho một sinh viên
type Student = {
    name: string;
    mathScore: number;
    englishScore: number;
    literatureScore: number;
};

//Ham tính điểm trung bình của sinh viên
function calculateAverageScore(student: Student): number {
    const totalScore = student.mathScore + student.englishScore + student.literatureScore;
    return totalScore / 3;
}
//Ham in ra thông tin sinh viên
function displayStudentInfo(student: Student): void {
  const averageScore = calculateAverageScore(student);
  console.log(`Student: ${student.name}`);
  console.log(`Average Score: ${averageScore.toFixed(2)}`);
}

//Tạo đối tượng sinh viên mẫu
const theFirstPerson: Student={
  name: "Alex",
  mathScore: 8,
  englishScore: 7.5,
  literatureScore: 9
};

//Gọi hàm hiển thị kết quả
displayStudentInfo(theFirstPerson);

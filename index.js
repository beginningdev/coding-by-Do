//Ham tính điểm trung bình của sinh viên
function calculateAverageScore(student) {
    var totalScore = student.mathScore + student.englishScore + student.literatureScore;
    return totalScore / 3;
}
//Ham in ra thông tin sinh viên
function displayStudentInfo(student) {
    var averageScore = calculateAverageScore(student);
    console.log("Student: ".concat(student.name));
    console.log("Average Score: ".concat(averageScore.toFixed(2)));
}
//Tạo đối tượng sinh viên mẫu
var theFirstPerson = {
    name: "Alex",
    mathScore: 8,
    englishScore: 7.5,
    literatureScore: 9
};
//Gọi hàm hiển thị kết quả
displayStudentInfo(theFirstPerson);

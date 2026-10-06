const cursor = db.studens.find({branch : 'CSE'}, {
    name : 1, marks : 1, city : 1, _id :0
}).sort({marks : 1}).skip(2).limit(3)


cursor.forEach((user)=>{
    
})

const cursor2 = db.students.find({branch : "CSE", marks :{$gte : 80}, skills : {$in : ['java', 'python']}}, {
    name : 1, marks : 1, skils : 1, _id:0
}).sort({marks : -1}).skip(1).limit(2)


while(cursor.hasNext()){
    const student = cursor.next();

    console.log(`Student : ${student.name}, Marks : ${student.marks}, Skills :${students.skills}`);
}
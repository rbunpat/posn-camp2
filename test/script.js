document.getElementById("changeTextBtn").addEventListener("click", function () {
  document.getElementById("changeText").innerText = "Text changed!";
});

document.getElementById("addContentBtn").addEventListener("click", function () {
  var newContent = document.createElement("p");
  newContent.innerText = "New content added!";
  document.getElementById("addContent").appendChild(newContent);
});

document
  .getElementById("changeColorBtn")
  .addEventListener("click", function () {
    var colorDiv = document.getElementById("changeColor");
    colorDiv.style.backgroundColor = "lightgreen";
  });


document.getElementById("addBtn").addEventListener("click", function () {
   var number1 = document.getElementById("number1").value;
    var number2 = document.getElementById("number2").value;

    var result = parseInt(number1) + parseInt(number2);
    document.getElementById("result").innerText = result;
});
const title = document.querySelector('h1');

function handleTitleClick() {
	const clickedClass = 'clicked';
	// //title.className === clickedClass
	// if (title.className === clickedClass) {
	// 	title.className = '';
	// } else {
	// 	title.className = clickedClass;
	// }

	// if (title.classList.contains(clickedClass)) {
	// 	title.classList.remove(clickedClass);
	// } else {
	// 	title.classList.add(clickedClass);
	// }

	//위의 5줄을 한줄로 줄일 수 있다. clicked가 class에 있는지 판단하고 없다면 class에 clicked를 추가한다.
	title.classList.toggle('clicked');
}
title.addEventListener('click', handleTitleClick);
// //event 함수 작성
// function handleTitlemousein() {
// 	console.log('mouse is in!');
// 	title.innerText = 'mouse is in!';
// 	title.style.color = 'black';
// }
// function handleTitlemouseleave() {
// 	console.log('mouse is in!');
// 	title.innerText = 'mouse is out!';
// 	title.style.color = 'blue';
// }
// function handleWindowsResize() {
// 	document.body.style.background = 'tomato';
// }

// title.onclick = handleTitleClick;
// title.addEventListener('mouseenter', handleTitlemousein);
// title.addEventListener('mouseleave', handleTitlemouseleave);

// window.addEventListener('resize', handleWindowsResize);

const title = document.querySelector('h1');

function handleTitleClick() {
	const clickedClass = 'clicked';
	// //title.className === clickedClass
	// if (title.className === clickedClass) {
	// 	title.className = '';
	// } else {
	// 	title.className = clickedClass;
	// }
	if (title.classList.contains(clickedClass)) {
		title.classList.remove(clickedClass);
	} else {
		title.classList.add(clickedClass);
	}
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

const title = document.querySelector('#title');

console.dir(title);

title.style.color = 'red';

function handleTitleClick() {
	console.log('title was click');
	const curColor = title.style.color;
	let newColor;
	if (curColor == 'blue') newColor = 'red';
	else newColor = 'blue';
	title.style.color = newColor;
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

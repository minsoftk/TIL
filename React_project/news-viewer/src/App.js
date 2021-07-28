import React, { useState, useCallback } from 'react';
import './App.css';
import NewsList from './components/NewsList';
import Categories from './components/Categories';
import NewsPage from './pages/NewsPage';
import { Route } from 'react-router-dom';
const App = () => {
	// const [category, setCategory] = useState('all');
	// const onSelect = useCallback((category) => setCategory(category), []);
	//URL 파라미터를 통해 사용할 경우는 Categories 컴포넌트에서 현재 선택된 카테고리 값을 알려 줄 필요도 없고, onSelect함수를 따로 전달할 필요도 없다.
	// <>
	// 	<Categories category={category} onSelect={onSelect} />
	// 	<NewsList category={category} />
	// </>
	return <Route path="/:category?" component={NewsPage}></Route>;
};

export default App;

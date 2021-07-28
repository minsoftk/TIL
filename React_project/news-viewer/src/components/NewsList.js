import axios from 'axios';
import React, { useEffect, useState } from 'react';
import styled from 'styled-components';
import NewsItem from './NewsItem';
import usePromise from '../lib/usePromise';

const NewsListBlock = styled.div`
	box-sizing: border-box;
	padding-bottom: 3rem;
	width: 768;
	margin: 2rem auto;
	margin-top: 2rem;
	@media screen and (max-width: 768px) {
		width: 100%;
		padding-left: 1rem;
		padding-right: 1rem;
	}
`;

// const sample = {
// 	title: '제목',
// 	description: 'tjfaud',
// 	url: 'https://naver.com',
// 	urlToImage: 'https://naver.com',
// };

const NewsList = ({ category }) => {
	const [loading, response, error] = usePromise(() => {
		const query = category === 'all' ? '' : `&category=${category}`;
		return axios.get(
			`https://newsapi.org/v2/top-headlines?country=kr${query}&apiKey=b296d7212b79483d8d9813d53fa04244`
		);
	}, [category]);
	//대기중일때
	if (loading) {
		return <NewsListBlock>대기중...</NewsListBlock>;
	}
	//아직 article 값이 설정되지 않았을 때
	if (!response) {
		return null;
	}
	if (error) {
		return <NewsListBlock>에러 발생!</NewsListBlock>;
	}
	//article값이 유효할때
	const { articles } = response.data;
	return (
		<NewsListBlock>
			{articles.map((article) => (
				<NewsItem key={article.url} article={article}></NewsItem>
			))}
		</NewsListBlock>
	);
};
export default NewsList;

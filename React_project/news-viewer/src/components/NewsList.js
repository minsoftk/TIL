import axios from 'axios';
import React, { useEffect, useState } from 'react';
import styled from 'styled-components';
import NewsItem from './NewsItem';

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
	const [articles, setArticles] = useState(null);
	const [loading, setLoading] = useState(false);

	useEffect(() => {
		//async를 사용하는 함수 따로 선언.
		const fetchData = async () => {
			setLoading(true);
			try {
				const query = category === 'all' ? '' : `&category=${category}`;
				const response = await axios.get(
					`https://newsapi.org/v2/top-headlines?country=kr${query}&apiKey=b296d7212b79483d8d9813d53fa04244`
				);
				setArticles(response.data.articles);
				console.log(response.data);
			} catch (e) {
				console.log(e);
			}
			setLoading(false);
		};
		fetchData();
	}, [category]);
	//대기중일때
	if (loading) {
		return <NewsListBlock>대기중...</NewsListBlock>;
	}
	//아직 article 값이 설정되지 않았을 때
	if (!articles) {
		return null;
	}
	//article값이 유효할때
	return (
		<NewsListBlock>
			{articles.map((article) => (
				<NewsItem key={article.url} article={article}></NewsItem>
			))}
		</NewsListBlock>
	);
};
export default NewsList;

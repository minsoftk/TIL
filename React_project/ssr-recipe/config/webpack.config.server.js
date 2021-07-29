const paths = require('./paths');

module.exports = {
	mode: 'production', //프로덕션 모드로 최적화 옵션들을 활성화
	entry: paths.ssrIndexJs,
	target: 'node', //node 환경에서 실행될 것이라는 점 명시
	output: {
		path: paths.ssrBuild, //빌드경로
		filename: 'server.js', //파일이름
		chunkFilename: 'js/[name].chunk.js', //청크파일이름
		publicPath: paths.servedPath, //정적파일이 제공될 경로
	},
};

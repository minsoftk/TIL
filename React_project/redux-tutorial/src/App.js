import './App.css';
import Counter from './components/Counter';
import Todos from './components/Todos';
function App() {
	return (
		<div className="App">
			<Counter number={0}></Counter>
			<hr />
			<Todos></Todos>
		</div>
	);
}

export default App;

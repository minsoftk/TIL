import './App.css';
import Counter from './components/Counter';
import Todos from './components/Todos';
import CounterContainer from './containers/CounterContainer';
function App() {
	return (
		<div className="App">
			<CounterContainer></CounterContainer>
			<Todos></Todos>
		</div>
	);
}

export default App;

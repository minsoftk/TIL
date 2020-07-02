import React from 'react'
import axios from 'axios'
class Movie extends React.Component{
    state={
        isLoading:true,
        movies:[]
    };
  componentDidMount(){
    //   setTimeout(()=>{
    //       this.setState({isLoading:false, book:true })
    //   },6000)
      //movies array에 book이 없더라도 오류는 나지 않는다.
      //미래 지향적 state설정

      //사람들이 자바스크립트에서 data를 fetch를 하는 방법은 FETch를 사용하는 것
      //하지만 Axios라는 좋은 방법이 존재한다. 
      //Fetch위에 존재하는 작은 layer

        const movies=axios.get("https://yts-porxy.now.sh/list_movies.json");
  }
    render(){
        const {isLoading}=this.state;
        return <div>{isLoading ? "Loading.." :"we are ready"}</div> 
    }

}
export default Movie
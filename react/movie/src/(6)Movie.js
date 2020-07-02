import React from 'react';
import protoTypes from 'prop-types';

//state가 필요 없는 경우에는 class로 작성할 필요가 없다.
function Movie({id, year, title, summary, poster}){
    return (
    <div class="movie">
        <h1 class="movie_key">{id}</h1>
        <img class="movie_image" src={poster} alt={title} title={title}/>
        <h3 class="movie_title">{title}</h3>
        <h5 class="movie_year">{year}</h5>
        <p class="movie_summary">{summary}</p>
    </div>
    );
}// pros {} 를 빼먹음....

Movie.prototypes={
    id:protoTypes.number.isRequired,
    year:protoTypes.number.isRequired,
    title:protoTypes.string.isRequired,
    summary:protoTypes.string.isRequired,
    poster:protoTypes.string.isRequired
    //genres:protoTypes.arrayOf(protoTypes.string).isRequired
}

export default Movie;

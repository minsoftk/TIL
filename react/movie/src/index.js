import React from 'react';
import ReactDOM from 'react-dom';
import App from './(1)propsEx';
import CheckProps from './(2)checkProps';
import Checkstate from './(3)ClassAndState'

ReactDOM.render(
  <React.StrictMode>
    <Checkstate/>
  </React.StrictMode>,
  document.getElementById('root')
);

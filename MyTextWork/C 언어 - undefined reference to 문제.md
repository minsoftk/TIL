> 틀린 내용이나 궁금하신 점이 있다면 댓글로 남겨주세요! 감사합니다 :)



# C 언어 - undefined reference to 문제 해결



나만의 라이브러리를 만드는 과정에서 이 함수가 동작을 제대로하고 있나 main문을 넣어서 확인하던 중 계속 

아래 그림과 같은 오류가 발생했다.



발생한 소스파일은 아래와 같다. 구글링을 하면서 이유가 무엇인지 알 수 있었다.

```c
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*temp;

	if (s == 0 || f == 0)
		return (0);
	if (!(temp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
```



라이브파일에 대한 









reference : 

기승전망's blog

https://ksjm0720.tistory.com/11


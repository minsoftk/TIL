<br/><br/>

## 협업

### stash

- 작업 하던 내용을 임시 저장
- 브랜치에서 작업하다가 다른 브랜치로 변경해야 하는데 커밋은 하고 싶지 않은 경우

- stack처럼 작동

  가장 마지막에 들어간 것이 먼저 나온다.

- `stash`, `pop`을 많이 사용

- 실습

  - ```bash
    vi README.md
    git stash
    git st
    git stash list
    git stash pop	//가장 마지막의 commit을 불러온다.
    git st
    ```

- `apply`, `drop` 등의 옵션이 있음

> apply : stack에 쌓여 있는 것들중 골라서 pop을 하는 기능
>
> drop : list에 저장된 stack을 날려버린다.



<br/>

<br/>

### merge

- 협업의 핵심. 다른 브랜치와 현재 브랜치를 합쳐서 코드를 합침
- 방식
  - fast-forward
    - 커밋들이 공통이고 대상 브랜치의 커밋만 증가 했을 경우 단순히 HEAD만 옮겨짐
  - 3-way Merge 
    - 두 갈래로 나온 변경들을 합쳐서 새로운 커밋을 만듦
    - conflict
  - squash
    - 대상 브랜치의 커밋들을 하나의 커밋으로 합쳐서 merge
    - `git merge --squash master`
- 실습
  - 상황: 다른 사람이 master에서 같은 파일을 고침

### rebase

#### 1. 다른 브랜치와 병합 ([3.6 Git 브랜치 - Rebase 하기](https://git-scm.com/book/ko/v2/Git-%EB%B8%8C%EB%9E%9C%EC%B9%98-Rebase-%ED%95%98%EA%B8%B0))

- 기능은 `merge`와 같음 (코드를 합침)
- 내 브랜치의 커밋을 대상 브랜치의 위(다음)으로 생성함
- 깔끔한 로그를 유지할 수 있음
- 실습
  - 상황: master의 변경들을 feature/c에서 rebase 해본다
    - 대상 브랜치의 커밋만 진행 (fast-forward)
    - 두 브랜치 모두 커밋이 있지만 충돌이 나지 않음 (auto merging)
    - 두 브랜치 모두 커밋이 있고 충돌이 남 (conflict)


#### 2. 커밋 여러개 수정하기

- 주의
  - `push`해서 누군가 사용하고 있는 커밋을 `rebase` 하면 안됨 (헬게이트가 열림)
  - 해당 커밋을 기반으로 작업을 했을 텐데 그 기반을 바꿔 버리는 것
  - `push`를 했더라도 아직 merge되지 않았고 다른 사람이 사용하지 않는 브랜치라면 (보통 feature 브랜치) 마음대로 `rebase`를 해도 무방
- `-i`: 대화형 모드
- 가장 위에 있는 커밋이 오래된 것 (`git st`와 반대)
- 옵션
  - `--abort` : rebase를 중단. 원래 상태로 돌아감
  - `--continue` : rebase를 계속 진행. 다음 단계로 넘어감
  - `--skip` : 대상 브랜치의 내용으로 적용
- 커밋 목록에서의 옵션
  - `p`, pick = use commit
  - `r`, reword = use commit, but edit the commit message
  - `e`, edit = use commit, but stop for amending
  - `s`, squash = use commit, but meld into previous commit
  - `f`, fixup = like "squash", but discard this commit's log message
  - `x`, exec = run command (the rest of the line) using shell
- 실습
  - 상황: 커밋 하나를 한 뒤, 오타가 있어서 추가 커밋을 함. 그리고 추가 작업까지 한 상태

### pull request 실습

- 상황1: conflict 발생하지 않음
  - feature/d 브랜치에서 commit & push
- 상황2: conflict 발생 > 로컬에서 해결하고 다시 push
  - master 브랜치에서 README 파일 변경 commit & push
  - feature/e 브랜치에서 README 파일 변경 commit & push


### reset

- 상태를 이전 커밋으로 reset 시킴

- 옵션에 따라서 몇 커밋 이전 / 어느 단계(`Staged`, `Modified`, `Unmodified`)까지 reset 할지를 결정

- `show`: 커밋 정보를 보여줌

  - HEAD == @, ~ == ^
  - ex) HEAD~, HEAD^, @~, @^ : 한 커밋 이전
  - @~2: 2커밋 이전

- 옵션

  - `--soft`

    - `commit` 명령만 되돌림 (`Staged` 상태가 됨)

    - HEAD만 해당 커밋으로 돌림

    - ```bash
      vi README.md
      git ci -am 'Commit for reset exer'
      git reset --soft @^
      git st
      
      ---
      
      On branch develop
      Changes to be committed:
      (use "git reset HEAD <file>..." to unstage)
      
      modified:   README.md
      ```

  - `--mixed` (기본)

    - `commit` 명령도 되돌리고, `add` 명령까지 되돌림 (`Modified` 상태가 됨)

    - ```bash
      git ci -am 'Commit for reset exer'
      git reset --mixed @~1
      git st
      
      ---
      
      On branch develop
      Changes not staged for commit:
        (use "git add <file>..." to update what will be committed)
        (use "git checkout -- <file>..." to discard changes in working directory)
      
        modified:   README.md      
      ```

  - `--hard`

    - `commit` 명령도 되돌리고, `add` 명령도 되돌리고, 워킹 디렉토리까지 되돌림 (`Unmodified` 상태가 됨)

    - 워킹 디렉토리까지 되돌려 버리기 때문에 복구가 불가능!

    - ```bash
      git ci -am 'Commit for reset exer'
      git reset --hard @^
      git st
      
      ---
      
      On branch develop
      nothing to commit, working tree clean
      ```

### cherry-pick

- 다른 커밋을 가져옴
- 커밋의 수가 적다면 merge나 rebase보다 간결하고 깔끔한 트리를 유지할 수 있음

```bash
git co master
git co -b feature/f
vi README.md
git ci -am 'Cherry-pick test'

git co master
git cherry-pick {{hash}}

```

### tag

- 릴리즈를 하기 위한 브랜치 같은 것
- GitHub에서 Release를 만들면서 하면 편함

```bash
-- 이때까지 작업한 것을 push
git push
```

- GitHub 실습
  - releases 클릭
  - create a new release
    - 태그 이름: v1.0.0
    - 기준 브랜치: master
    - title과 content 작성
'Library information system’ 의 User는 Librarian과 Student이며, 이 system 의 목적은 다음과 같다.
Librarian은 도서관에 있는 책들의 정보를 관리하고, Student 들은 그 책들의 정보를 이용하여 자신이 찾고자 하는 도서의 정보를 찾아볼 수 있다.
User(Librarian / Student)가 이 system 을 실행하면 1. Librarian mode 2. Student Log-in 3. Create ID 라는 세가지 Main menu를 볼 수 있다.

만약 User가 1. Librarian mode를 선택하게 되면 Librarian mode 입장을 위한 Password를 입력하라는 메시지가 출력된다. 
올바른 Password를 입력하면 Librarian mode로 입장가능하나, 옳지 않은 Password를 입력하였을 경우에는 다시 Main menu로 되돌아간다.
만약 User가 올바른 Password를 입력하여 Librarian mode로 입장을 하면, 1. Add book 2. Update book 3. Delete book 4. Exit이라는 네 가지 menu를 볼 수 있다. 

만약 User가 1. Add book을 선택하게 되면 User는 새로운 책의 정보를 추가 할 수 있다. 
책의 정보에는 Title, Author, Publisher, ISBN, Availability(대출 가능하면 1, 불가능하면 0을 입력), Renting Students(초기화를 위해 0을 입력)가 포함된다. 
도서를 추가하는 과정이 끝나면 User는 다시 Librarian mode 의 초기화면을 보게 된다. 

만약 User가 2. Update book을 선택하게 되면 Search book 이라는 화면이 나오며, User는 도서의 Title 을 이용하여 Update 할 도서를 찾을 수 있다. 
도서의 목록이 나오면 User는 ISBN 의 입력을 통해 Update 할 도서를 선택한 후에 해당 도서의 정보를 Update 할 수 있다. 
Update 과정이 끝나면, User는 다시 Librarian mode의 초기화면을 보게 된다.

만약 User가 3. Delete book을 선택하게 되면 Search book 화면이 나온다. 
해당 화면에서 User는 Delete 할 도서의 Title을 이용하여 Delete 할 도서를 찾을 수 있다. 
도서의 목록이 나오면 User는 ISBN의 입력을 통해 Delete 할 도서를 선택하여 Delete 할 수 있다. 
단, Availability가 0인 도서(누군가가 대출중인 도서)는 목록에서 제외된다. Delete 과정이 끝나면, User는 다시 Librarian mode의 초기화면을 보게 된다.

만약 User가 4. Exit 메뉴를 선택하게 되면, User는 다시 Main menu로 돌아가게 된다.

만약 User가 Main menu에서 2. Student Log-in를 선택하면 자신의 해당 account로의 입장을 위해 Log-in을 하는 화면이 뜬다. 
올바른 ID와 Password를 입력하지 못하면 다시 Main menu로 되돌아가고, 올바른 ID와 Password를 입력하여 Log-in 을 하게 되면, 1. Search a book by title 2. display all book 3. Exit이라는 세 가지 menu를 볼 수 있다.

만약 User가 1. Search a book by title을 선택하게 되면 Search book 이라는 화면이 나오며, User는 검색어를 입력하며, User는 해당 검색어를 포함하는 모든 도서들의 목록과 그 도서에 대한 정보들을 볼 수 있다. 
(‘cat’ → ’application of big data’) 도서의 검색이 끝나고 나면, User는 다시 Student Log-in의 초기화면을 보게 된다.

만약 User가 2. Display all book을 선택하게 되면, 해당 account가 현재 대출중인 도서의 목록을 볼 수 있다. 
현재 대출중인 도서의 목록을 확인하는 과정이 끝나면, User는 다시 Student Log-in의 초기화면을 보게 된다.

만약 User가 4. Exit 메뉴를 선택하게 되면, User는 다시 Main menu로 돌아가게 된다.

만약 User가 Main menu에서 3. Create ID을 선택하면, 새로운 account 생성을 위한 Insert Information 화면이 출력되고, User는 ID, Password, Name, Department을 입력해야 한다. 
ID로는 User의 Student ID를 사용해야 하며, Password는 4자리의 숫자로만 입력 가능하도록 한다. 
Student ID는 중복검사를 거치게 된다.

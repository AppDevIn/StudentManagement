# Student Management System 

A program using Trie and LinkedList to create Management System for Students

## Installation

Clone the Repo

```bash
gh repo clone AppDevIn/StudentManagement
```
## Running .exe (Only Windows)

```cmd
src\Deployment\StudentManagementSystem.exe
```

## Usage

### LinkedList

Include the class to use

```c+
#include "List.h"
```

Functions 

```c+
searchedWords.begin();
for (int i = 0; i < searchedWords.getLength(); i++){
    Student s = searchedWords.next();
}
```

### LinkedList

Include the class to use

```c+
#include "Trie.h"
```

Functions 

Insert

```c+
Trie trie
trie.insert(key, studentObj)
```

Prefix Search

```
searchedWords = trie.startsWith("1019"); //Returns a Linked List
```



## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
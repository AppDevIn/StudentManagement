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

```c++
#include "List.h"
```

Functions 

```c++
searchedWords.begin();
for (int i = 0; i < searchedWords.getLength(); i++){
    Student s = searchedWords.next();
}
```

### LinkedList

Include the class to use

```c++
#include "Trie.h"
```

Functions 

Insert

```c++
Trie trie
trie.insert(key, studentObj)
```

Prefix Search

```c++
searchedWords = trie.startsWith("1019"); //Returns a Linked List
```

## Credits

<table>
  <tr>
        <td align="center"><a href="https://github.com/appdevin"><img src="https://avatars1.githubusercontent.com/u/34540492?s=460&u=6b2d7e8346afc28bfd8e591d93fd548895c720af&v=4" width="100px;" alt=""/><br /><sub><b>Jeyavishnu</b></sub></a><br />
    </td>
    <td align="center"><a href="https://github.com/ob-taka"><img src="https://avatars.githubusercontent.com/u/48742733?s=400&v=4" width="100px;" alt=""/><br /><sub><b>Run Lin</b></sub></a><br />
    </td>  </tr>
</table>

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
Distributed under the MIT License. See `LICENSE` for more information.
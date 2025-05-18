 # DSA Notes 
 
 Q. To traverse in all direction in BFS by single loop
```
 // Four directions: Up, Down, Left and Right.
 //1st method
    const pair<int, int> direction[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    for (pair<int, int> dir : direction) {
                    int x = landCell.first + dir.first;
                    int y = landCell.second + dir.second;
         }

// 2nd method 

int d[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};

for(int k = 0; k<4;++k){

     int x=i+d[k][0];
     int y=j+d[k][1];
     }


// Technique to Move in all 8 direction

 vector<int>row={-1,-1,-1,0,0,1,1,1};
 vector<int>col={-1,0,1,-1,1,-1,0,1};
 ```

 Q. problem statement: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

     ```cpp
      soln: If number is divisible by 9 completely then digital root(ans) is 9,else the digital root is remainder obtained.
     observation:  We can find regular pattern by enumerate following case:
      1=1; 2=2; 3=3; 4=4; 5=5; 6=6; 7=7; 8=8; 9=9;
      10=1; 11=2; 12=3; 13=4; 14=5; 15=6; 16=7; 17=8; 18=9;
      19=1; 20=2; 21=3; 22=4; 23=5; 24=6; 25=7; 26=8; 27=9   

     ```






# Resources


1. Binary Search by Aditya Verma <br/>
    Videos Link : https://www.youtube.com/playlist?list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2

2. Dynamic Programming by Striver <br/>
    Videos Link : https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY <br/>
    Notes Link : https://takeuforward.org/dynamic-programming/striver-dp-series-dynamic-programming-problems/

3. Graph by Striver <br/>
    Videos Link : https://www.youtube.com/playlist?list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn <br/>
    Notes Link : https://takeuforward.org/graph/striver-graph-series-top-graph-interview-questions/

4. Heap by Aditya Verma <br/>
    Videos Link : https://www.youtube.com/playlist?list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9

5. Recursion by Striver <br/>
    Videos Link : https://www.youtube.com/playlist?list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9

6. Sliding Window by Aditya Verma <br/>
    Videos Link : https://www.youtube.com/playlist?list=PL_z_8CaSLPWeM8BDJmIYDaoQ5zuwyxnfj

7. Stack by Aditya Verma <br/>
    Videos Link : https://www.youtube.com/playlist?list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd

8. Tree by Striver <br/>
    Videos Link : https://www.youtube.com/watch?v=OYqYEM1bMK8&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk <br/>
    Notes Link : https://takeuforward.org/data-structure/strivers-tree-series-tree-data-structure/

9. Trie by Striver <br/>
    Videos Link : https://youtube.com/playlist?list=PLgUwDviBIf0pcIDCZnxhv0LkHf5KzG9zp


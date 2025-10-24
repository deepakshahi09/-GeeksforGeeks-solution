<h2><a href="https://www.geeksforgeeks.org/problems/deque-deletion/1?page=1&category=Queue&sortBy=difficulty">Deque deletion</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Deque <strong>deq</strong>&nbsp;containing non-negative integers. </span></p>
<p><span style="font-size: 18px;">Complete below functions&nbsp;depending type of query as mentioned and&nbsp;provided to you (indexing starts from 0):<br><strong>1</strong>. <strong>eraseAt(x):</strong> this function should remove the element from specified position <strong>x</strong> in deque.<br><strong>2</strong>. <strong>eraseInRange(start, end):</strong> this function should remove the elements in range <strong>start</strong> (inclusive), <strong>end</strong> (exclusive) specified in the argument of the function. </span><br><span style="font-size: 18px;"><strong>Note:</strong> If start is equal to end then simply return.<br><strong>3</strong>. <strong>eraseAll():</strong> remove all the elements from the deque.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>deq = [1 2 4 5 6], query = [1 2]
<strong>Output:</strong> 1 2 5 6&nbsp;
<strong>Explanation:</strong> Here the query type is 1 and the position is 2. So we remove element at position 2. The element at position 2 is 1 2 4 5 6. So, we remove 4 and get 1 2 5 6.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> deq = [1 2 3 4], query = [2 1 3]
<strong>Output:</strong> 1 4&nbsp;
<strong>Explanation:</strong> Here the query type is 2 and the range is [1, 3). So we need to delete 1 2 3 4. Remember that end is exclusive. So the updated dequeue is 1 4.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>deq = [1 2 3], query = [3]
<strong>Output:</strong> Empty
<strong>Explanation:</strong> Here the query is of type 3 so we remove all the elements of dequeue.</span></pre>
<p><strong><span style="font-size: 18px;">Constraints:</span></strong><br><span style="font-size: 18px;">1 ≤ deq.size() ≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Java</code>&nbsp;<code>Queue</code>&nbsp;<code>STL</code>&nbsp;<code>Java-Collections</code>&nbsp;<code>Data Structures</code>&nbsp;
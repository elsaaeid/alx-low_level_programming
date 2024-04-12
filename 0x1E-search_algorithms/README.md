<h1>0x1E-search_algorithms</h1>

<hr />
<article>
<p> This repository involves the best <strong>search algorithms</strong> in a sorted list of integers like:</p>

<ul>
<li><strong><i>Linear Search:</i></strong>A simple search algorithm that sequentially checks each element of the data structure until a match is found or the entire structure is searched. It is commonly used for small datasets and has a time complexity of O(N).</li>
<li><strong><i>Binary Search:</i></strong> An efficient search algorithm used on sorted data structures. It repeatedly divides the search space in half by comparing the target value with the middle element. This algorithm has a time complexity of O(log N) and is faster than linear search for large datasets.</li>
<li><strong><i>Jump Search:</i></strong> A searching algorithm used for sorted arrays. It aims to reduce the number of elements to be checked by jumping ahead in fixed steps or skipping some elements instead of searching through all elements like linear search.The time complexity of jump search is O(sqrt(n)).</li>
<li><strong><i>Interpolation Search:</i></strong> An algorithm used for searching a key in a sorted array. It improves upon binary search by estimating the position of the target element based on the values at the bounds of the search space and the value of the sought key, typically using linear interpolation.the time complexity can be approximately O(log(log n)), while in the worst-case scenario, it can be O(n).</li>
<li><strong><i>Exponential Search:</i></strong> An algorithm used for searching sorted, unbounded, or infinite lists.The time complexity of exponential search is O(log n)</li>
<li><strong><i>Advanced Binary Search:</i></strong> A widely used search algorithm for finding a target value in a sorted array.the time complexity of O(log n)</li>
</ul>

<p>The search algorithms are used to search for the position (index) of target value for every an element in an array or a singly linked list and returned an index and its value.
The program will output the search process and the index where the value is located. If the value is not present in the array or the array is NULL, it will return -1.
</p>
</article>

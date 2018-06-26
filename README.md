# mergesort
<h2>Working of mergesort</h2>
Split away A[0..n-1] into about equal halves and make copies of each half in arrays B and C<br>
Sort array B and C recursively<br>
Merge sorted array B and C into arry A as follows<br>
Compare the first elements in the remaining unprocessed portion of the arrays<br>
Copy the smaller of the two into A, while incrementing the index indicating the unprocessed portion of that array.<br>
Once all eleemnts are in one of the arrays are processed, copy remaining unprocessed eleemnts from the other array into A<br>


<h2>Algorithm</h2>
Mergesort(A[0....n-1])<br>
//Sort array A[0...n-1] by recursive mergesort <br>
//Input: An array A[0...n-1] of orderable elements<br>
//Output: Array A[A0...n-1] sorted in non decreasing order.<br><br>

if n>1<br>
Copy A[0...[n/2-1] to B[0...[n/2]-1]<br>
copy A[[n/2]...n-1] to C[0...[n/2]-1]<br>
Mergesort(B(0...[n/2]-1)<br>
Mergesort(C(0...[n/2]-1)<br>
Merge(B,C,A)<br>
<br><br>

Merge(B[0...p-1], C[0...q-1], A[0...p+q-1])<br>
//Merge two sorted arrays into one sorted array<br>
//Input : Arrays B[0...p-1] and C[0...q-1] both sorted<br>
//Output: Sorted array A[0...p+q-1] of the elements of B and C <br>

i=0; j=0; k=0;<br>
while i<p and j<q  do <br>
if B[i]<=C[j]<br>
A[k]=B[i]; i=i+1;<br>
else<br>
A[k]=C[j]; j=j+1;<br>
k=k+1;<br>
if i=p;<br>
copy C[j...q-1] to A[k...p+q-1]<br>
else <br>
copy B[i...p-1] to A[k...p+q-1]<br>

the time taken by merge sort will not change for any type of inputs (Best, Worst, Average)<br>
The efficiency of the mergesort will be the same in all cases. <br>


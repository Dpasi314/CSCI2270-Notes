# Notes on Algorithmic Complexity

## Functions

### Constant
`f(n) = c`
* c is a constant value

## Logrithmic
`f(n) = log_b(n)`
* Where logbase is usually 2
## Linear
`f(n) = n`
* Where the result is a multiple of n

## N-log-n
`f(n) = nlog_2(n)`

## Quadratic
`f(n) = n^2`

## Cubic
`f(n) = n^3`

**Note**: Each function grows faster than the one before it.

## Big-O notation
* Growth rae of a function can also be referred to as the order of a function
* Big-O provides and upper bound on how quickly a function grows as n approaches infinity

### Example
Consider T(n) = 5n^3 + 3n^2 + n + 5
* Use term with largest growth rate
  * T(n) = 5n^3
* Omit constants
  * T(n) = O(n^3)
* Complexity can be modeled by O(n^3)

### Example
* Consider the funtion

```c++
traverse()                          |    
	temp = head;                |  1
	while(temp != NULL)         |  n + 1
		print temp.key      |  n 
		temp = temp.next    |  n
```
* T(n) = 3n + 2

* O(n) 

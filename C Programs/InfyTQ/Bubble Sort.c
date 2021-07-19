/*
Bubble Sort

			0  1  2  3  4  5
list		25 15 35 05 19 10

first pass	23 < 15---False..no need to swap
			15 < 35---True..swap 1 and 2
			
			25 35 15 05 19 10
			
			15 < 5---False..no need to swap
			5 < 19---True..swap 3 and 4
			
			25 35 15 19 05 10
			
			5 < 10---True..swap 4 and 5
			
			25 35 15 19 10 05
			
			
second pass	25 < 35---True..swap 0 and 1

			35 25 15 19 10 05
			
			25 < 15---False..no need to swap
			15 < 19---True..swap 2 and 3
			
			35 25 19 15 10 05
			
			15 < 10---False..no need to swap
			10 < 05---False..no need to swap
			
			35 25 19 15 10 05
			
			
third swap				
/*

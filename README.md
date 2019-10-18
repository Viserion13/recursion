# Recursion
## Aim:-
        Perform Recursion
### Theory:-
            Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a             function inside the same function, then it is called a recursive call of the function.
#### Algorithm:-
                 int sum(int x,int y)
                 int main() 
	         int n,i=1
	         printf("Enter a Number:")
	         scanf("%d",&n)
	         int s=sum(n,i)
	         printf("\n\nThe sum of the numbers is:%d",s)
	         return 0
                 int sum(int x,int y)
	         if(x<y)
	         return 0
	         else
		return(y+sum(x,(y+1)))
##### Conclusion:-
                From this program we learnt what a recursive function is and how to implement it for doing different types of functions and                 processes

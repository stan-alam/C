## 5.16 Recursion vs. Iteration


Iteration and recursion are based on a control structure: Iteration uses a repetition structure; recursion uses a **selection structure**. Both iteration and recursion involve repetition involve repetition: **Iteration explicitly uses a repetition structure**

**Recurssion terminates when a base case is recognized. Iteration with counter-controlled repetition and recursion each gradually approach termination:

**Iteration achieves repetition through repeated function calls. Iteration and recursion each involve a termination test: Iteration terminates when the loop-continuation condition fails; recursion terminates when a base case is recognized. Iteration with counter-controlled repetition and recursion each gradually approach termination: Iteration keeps modifying a counter until the counter assumes a value that makes the loop-continuation condition fail; recursion keeps producing simpler versions of the original problem until the base case is reached. Bother iteration and recursion can occur infinitely: An infinite recursion occurs if the recursion step does not reduce the problem each time in a manner that converges on the base case.
	Recursion has many negatives. It repleatly invokes the machanism, and consequently the overhead, of function calls.
This can be expensive in both processor time and memory space.

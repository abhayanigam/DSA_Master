/**
 * How to recognize a problem that fits recursion
    Look for these signals:

    Natural reduction: The problem on input n reduces to one or more smaller inputs n' < n.
                        e.g. f(n) = combine(f(n-1), f(n-2)).

    Divide & conquer: split array into two halves, solve each,
                        combine (merge sort, binary tree problems).

    Combinatorial generation: enumerate subsets/permutations/combinations —
                                recursion/backtracking is the go-to.

    Tree/graph traversal: recursion mirrors tree structure or DFS on graphs.

    Optimal substructure + overlapping subproblems: recursion + memoization → dynamic programming.

    Search with constraints: N-Queens, Sudoku, backtracking with pruning.

    Note : If you can state the problem as “solve for smaller inputs and combine”,
            recursion is a fit.

    // ? The Recursion tamplate:
        ReturnType solve (State state){
            //? 1. base case(s)
            if(isBase(state)){
                return baseResult;
            }

            //? 2. (optional) memorization / caching
            //TODO (Note : Add Caching when subProblem repeats)
            if(cached(state)){
                return cached[state];
            }

            //? 3. reduce: generate smaller subproblems
            ReturnType result = identityValue;

            for(subState : newStates(state)){
                auto subResult : solve(subState);
                result = combine(result , subResult);
            }

            //? 4. store in the cache and return
            cache[state] = result;

            return result;
        }

    //? 1. Simple Divide And Conquer (Merge Sort)

    void merge_sort (vector<int>& a, int l, int r){
        if(r-l <= 1)
            return; // base case for 0 or 1 element

        int m = (l+r) / 2;

        merge_sort(a,l,m);
        merge_sort(a,m,r);

        vector<int> temp;

        int i = l, j = r;

        while(i < m || j < r){
            if(j == r || (i<m && a[i] <= a[j])){
                temp.push_back(a[i++]);
            }else{
                temp.push_back(a[j++]);
            }
        }

        copy(temp.begin(),temp.end(), a.begin()+1);
    }

    //? when should you use a loop?
        Loops are useful when repetition does NOT reduce the problem size.

        Use loops when:
        ✔ You want to repeat something a fixed number of times
        ✔ You are iterating an array / vector / list
        ✔ The operation does NOT depend on solving a smaller version of the same problem
        ✔ You want efficient O(n) simple iteration

        Examples:
        > Print numbers from 1 to 100
        > Iterate an array
        > Sum elements
        > Search linearly
        > Updating counters

    //? When should you use recursion?
        Use recursion when the problem can be defined as:
        Problem = smaller version of the same problem

        ✔ Tree traversal
        ✔ DFS / Backtracking
        ✔ Divide & Conquer
        ✔ Factorial / Fibonacci
        ✔ Subset generation
        ✔ Permutations
        ✔ Recursively printing (like your example)
 */
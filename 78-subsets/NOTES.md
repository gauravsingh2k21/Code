**Approach 1**
​
We have t solve for **[1,2,3]** then this problem can be solved by recursively solving for **[2,3]**
​
So the values for **[2,3]** will be [],[2],[3],[2,3]
​
Now if we add just the first element to this result then we get the answer that is
**After appending the first element to n-1 recursive soln**
**[1],[1,2],[1,3],[1,2,3]**  so union of both will be the answer
​
**Thought Process**: We assume that the recusrive soln. will definitely work so we make another helper function which will be used for getting the recusrive soln.
​
**Entire code soln. for approach1 **
`vector<vector<int>> subsets(vector<int>& nums) {
return helper(nums,0);
}
vector<vector<int>> helper(vector<int>& nums,int i)
{
if(i>=nums.size())
return {{}};
vector<vector<int>> PartialAnswer = helper(nums,i+1);
vector<vector<int>> ans ;
for(vector<int> x:PartialAnswer)
ans.push_back(x);
for(vector<int> x:PartialAnswer)
{
x.push_back(nums[i]);
ans.push_back(x);
}
return ans;
}`
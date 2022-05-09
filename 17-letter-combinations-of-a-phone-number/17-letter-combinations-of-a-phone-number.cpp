class Solution {
public:
 vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, res;
vector<string> letterCombinations(string digits) {
	if(digits == "") return res;        
	string combination = "";
	helper(digits, 0, combination);
	return res; 
}

void helper(string &digits, int i, string &combi){
	if(i == size(digits)) {
		res.push_back(combi);    
		return;
	}
	for(auto it : mappings[digits[i] - '2']){
		combi.push_back(it);            // add a character from mappings for current position,
		helper(digits, i + 1, combi);  // and recurse for next positions
		combi.pop_back();              // backtrack
	}   
}
};
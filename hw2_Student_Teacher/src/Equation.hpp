#pragma once
#pragma once
#include<cmath>
#include<vector>

using std::vector;

class Equation {
public:
	enum Roots {
		noRoot,
		oneRoot,
		twoRoots,
	};
	struct Solution {
		Roots amountOfRoots;
		double x1;
		double x2;
	};

	Equation(double _a, double _b, double _c) : a(_a), b(_b), c(_c) { SolveEqCorrect(); };
	double get_a() { return a; };
	double get_b() { return b; };
	double get_c() { return c; };
	Solution getSolution() { return correctSolution; };

private:
	double a, b, c;
	Solution correctSolution;
	double Disriminant();
	void SolveEqCorrect();
};



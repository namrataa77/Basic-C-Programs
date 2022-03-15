#include <bits/stdc++.h>
using namespace std;
#define int long long


int oreo(pair<int, int> a, pair<int, int> b, pair<int, int> c)
{
	int val = (b.second - a.second) * (c.first - b.first) -
			(b.first - a.first) * (c.second - b.second);

	if (val == 0) return 0; 
	return (val > 0)? 1: 2; 
}



double Area(vector<pair<int, int>> hull)
{
    double area = 0.0;
  
    int j = hull.size() - 1;
    for (int i = 0; i < (int)hull.size(); i++)
    {
        area += (hull[j].first + hull[i].first) * (hull[j].second - hull[i].second);
        j = i;
    }
    return abs(area/2.0);
}
long long convexHull( vector<pair<int, int>> points, int n)
{
	if (n < 3) return 0.0;
	vector<pair<int, int>> hull;
	int l = 0;
	for (int i = 1; i < n; i++)
		if (points[i].first < points[l].first)
			l = i;

	int p = l, q;
	do
	{
		hull.push_back(points[p]);


		q = (p+1)%n;
		for (int i = 0; i < n; i++)
		{
		if (oreo(points[p], points[i], points[q]) == 2)
			q = i;
		}

		p = q;

	} while (p != l); 

	return Area(hull);
    
    
}

#undef int
int main()
{
    long long n; 
    cin >> n;
    vector<pair<long long, long long>> points(n);

    for(auto &x: points){

        cin >> x.first  >> x.second;

    }
    
	cout <<  convexHull(points, n);
	return 0;
}
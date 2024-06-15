/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int board1[4];
    int board2[4];
    int truck[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>board1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin>>board2[i];

    }
    for(int i=0;i<4;i++){
        cin>>truck[i];
    }
    int board1_area=((board1[2]-board1[0])*(board1[3]-board1[1]));
    int board2_area=((board1[2]-board2[0])*(board2[3]-board2[1]));

    int truck1x_intersection=max(0,(min(board1[2],truck[2])-(max(board1[0],truck[0]))));
    int truck1y_intersection=max(0,(min(board1[3],truck[3])-(max(board1[1],truck[1]))));

    

    int truck2x_intersection=max(0,(min(board2[2],truck[2])-(max(board2[0],truck[0]))));
    int truck2y_intersection=max(0,(min(board2[3],truck[3])-(max(board2[1],truck[1]))));
    
    int truck1_intersection=(truck1x_intersection*truck1y_intersection);
    int truck2_intersection=(truck2x_intersection*truck2y_intersection);

    int total_area=board1_area+ board2_area - truck2_intersection-truck1_intersection;
    cout<<total_area<<endl;
}*/


#include <bits/stdc++.h>
using namespace std;

struct Rect {
	int x1, y1, x2, y2;
	int area() { return (y2 - y1) * (x2 - x1); }
};

int intersect(Rect p, Rect q) {
	int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
	int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
	return xOverlap * yOverlap;
}

int main() {


	Rect a, b, t;  // billboards a, b, and the truck
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
	cout << a.area() + b.area() - intersect(a, t) - intersect(b, t) << endl;
}
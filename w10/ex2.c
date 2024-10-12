#include <math.h>
#include <stdio.h>

typedef struct {
  double x;
  double y;
} Point;
typedef struct {
  Point point_one;
  Point point_two;
  Point point_three;
} Triangle;

void pointShow(Point p) {
  /*Your Code here*/
  printf("%f %f\n", p.x, p.y);
}

long double pointDist(Point point_one, Point point_two) {

  return (sqrt(pow((point_one.x - point_two.x), 2) +
               pow((point_one.y - point_two.y), 2)));
}

long double triangleArea(Triangle triangle) {
  long double half_of_the_triangle_s_perimeter =
      (pointDist(triangle.point_one, triangle.point_two) +
       pointDist(triangle.point_two, triangle.point_three) +
       pointDist(triangle.point_three, triangle.point_one)) /
      2;

  return (sqrt(half_of_the_triangle_s_perimeter *
               (half_of_the_triangle_s_perimeter -
                pointDist(triangle.point_one, triangle.point_two)) *
               (half_of_the_triangle_s_perimeter -
                pointDist(triangle.point_two, triangle.point_three)) *
               (half_of_the_triangle_s_perimeter -
                pointDist(triangle.point_three, triangle.point_one))));
}

int main(void) {
  Point point1 = {3, 4}, point2;
  Triangle triangle;

  triangle.point_one = point1;
  pointShow(point1);
  scanf("%f", &point2.x);
  scanf("%f", &point2.y);
  triangle.point_two = point2;
  printf("%Lf\n", pointDist(point1, point2));
  scanf("%lf", &triangle.point_three.x);
  scanf("%lf", &triangle.point_three.y);
  printf("%Lf", triangleArea(triangle));

  return 0;
}

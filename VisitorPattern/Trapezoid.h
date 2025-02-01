#ifndef __TRAPEZOID_H__
#define __TRAPEZOID_H__

using namespace std;

class Trapezoid : public Shape
{
  private:
	double topSide_;
	double bottomSide_;
	double bothSide_;
	Point center_{};

  public:
	explicit Trapezoid( double topSide = 1, double bottomSide = 2, double bothSide = 3) {
	  if ( topSide <= 0 ) {
		throw invalid_argument("top side is invalid !!");
	  } else if ( bottomSide <= 0 ) {
		throw invalid_argument("bottom side is invalid !!");
	  } else if ( topSide > bottomSide ) {
		throw invalid_argument("arg condition is not trapezoid !!");
	  } else {
		cout << " trapezoid arg condition is valid" << endl;
		this->topSide_ = topSide;
		this->bottomSide_ = bottomSide;
		this->bothSide_ = bothSide;
	  }
	}

	void draw() const override {
	  cout << " trapezoid drawing~!" << endl;
	}

	double topSide() { return topSide_; }
	double bottomSide() { return bottomSide_; }
	double bothSide() { return bothSide_; }
	Point center() { return center_; }
};

#endif

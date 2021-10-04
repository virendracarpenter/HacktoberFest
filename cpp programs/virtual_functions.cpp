#include <iostream>
//#include <cstring>
using namespace std;

class Photography
{
protected:
    string title;
    float rating;

public:
    Photography(string s, float r)
    {
        title = s;
        rating = r;
    }
     virtual void display()
    {
        cout << "Bhupendra Choudhary " << endl;
    }
};
class Capture_photo : public Photography
{
    float photo_quality;

public:
    Capture_photo(string s, float r, float q) : Photography(s, r)
    {
        photo_quality = q;
    }
    void display()
    {
        cout << "Title of  photography is: " << title << endl;
        cout << "Rating to photography is: " << rating << " * " << endl;
        cout << "Photo quality of photo is: " << photo_quality << " Mega pixel " << endl;
    }
};
class Photo_pose : public Photography
{
    float pose_level;

public:
    Photo_pose(string s, float r, float pl) : Photography(s, r)
    {
        pose_level = pl;
    }
    void display()
    {
        cout << "Title of pose is: " << title << endl;
        cout << "Rating to pose is: " << rating << " * " << endl;
        cout << "Pose level of boy in photo is: " << pose_level << " * " << endl;
    }
};

int main()
{
    //string title;
    // float rating, photo_quality, photo_pose;

    //For Capture_photo
    string title = "Bhupendra's Photography";
    float rating = 4.6;
    float photo_quality = 4.7;

    Capture_photo Cpt(title, rating, photo_quality);

    //For Photo_pose
    title = "Bhupendra's Pose";
    rating = 4.5;
    float pose_level = 4.9;
    Photo_pose Pps(title, rating, pose_level);

    // Cpt.display();
    // Pps.display();
    Photography *ptr[2];
    ptr[0] = &Cpt;
    ptr[1] = &Pps;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}
#pragma once

#include <opencv2/core/core.hpp>


/**
Returns the maximum of 3 integers.
@param a first integer
@param b second integer
@param c third integer
*/
int myMax(int a, int b, int c);

/**
Returns the minimum of 3 integers.
@param a first integer
@param b second integer
@param c third integer
*/
int myMin(int a, int b, int c);

/**
Returns the distance between two points.
@param a first point
@param b second point
*/
float ptDist(const cv::Point& a, const cv::Point& b);

/**
Returns the angle between two defect points with respect to a defect point that is farthest from
the hull.
@param s the point where the defect begins
@param f the point farthest from the hull
@param e the point where the defect ends
*/
float getAngle(const cv::Point& s, const cv::Point& f, const cv::Point& e);

/**
Detects whether a pixel belongs to the skin based on RGB values.
@param src The source color image
@param dst The destination grayscale image where skin pixels are colored white and the rest are
colored black
*/
void mySkinDetect(cv::Mat& src, cv::Mat& dst);

/**
Does frame differencing between the current frame and the previous frame.
@param src The current color image
@param prev The previous color image
@param dst The destination grayscale image where pixels are colored white if the corresponding
pixel intensities in the current and previous image are not the same
*/
void myFrameDifferencing(cv::Mat& prev, cv::Mat& curr, cv::Mat& dst);

/**
Returns a Mat with a convex hull on top of src.
@param src The source image
@param src The destination image with convex hull drawn on top
*/
void drawHull(cv::Mat& src, cv::Mat& dst);
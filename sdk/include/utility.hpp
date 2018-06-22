/*
* utility.hpp
*
*  Created on: Dec 03, 2017
*      Author: gyz
*/

#ifndef AIP_UTILITY_HPP
#define AIP_UTILITY_HPP

#include <opencv2/core.hpp>
#include <vector>

using namespace cv;
using namespace std;

namespace aip
{

CV_EXPORTS bool ReadStringList(const string& filename, vector<string>& l, bool txtFlag = false);
CV_EXPORTS void AppendFilename(const string& filename, const string& suffix, string &newFilename);
CV_EXPORTS float CalcDist(const Point2f &pt0, const Point2f &pt1);

} //aip

#endif
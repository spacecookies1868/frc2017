#ifndef SRC_AUTO_MOTIONPROFILING_LIFTTWO_MOTIONPROFILE_H_
#define SRC_AUTO_MOTIONPROFILING_LIFTTWO_MOTIONPROFILE_H_

#include "Auto/MotionProfiling/MotionProfile.h"

class LiftTwo_MotionProfile : public MotionProfile {
public:
	LiftTwo_MotionProfile() {};

	virtual int GetLengthOfLeftMotionProfile() {
		return kLeftMotionProfileSz;
	}

	virtual int GetLengthOfRightMotionProfile() {
		return kRightMotionProfileSz;
	}

	virtual double (*GetLeftMotionProfile())[3] {
		return kLeftMotionProfile;
	}

	virtual double (*GetRightMotionProfile())[3] {
		return kRightMotionProfile;
	}

private:

	int kLeftMotionProfileSz = 204;

	double kLeftMotionProfile[204][3] = {
	{1.57626e-05, 0.189151, 10},
	{5.03802e-05, 0.207706, 10},
	{0.000192243, 0.851178, 10},
	{0.000444444, 1.51321, 10},
	{0.000838508, 2.36438, 10},
	{0.00140596, 3.40471, 10},
	{0.00217833, 4.63419, 10},
	{0.00318713, 6.05282, 10},
	{0.0044639, 7.6606, 10},
	{0.00604015, 9.45753, 10},
	{0.00794742, 11.4436, 10},
	{0.0102172, 13.6188, 10},
	{0.0128811, 15.9832, 10},
	{0.0159706, 18.5368, 10},
	{0.0195171, 21.2795, 10},
	{0.0235524, 24.2113, 10},
	{0.028092, 27.2377, 10},
	{0.033136, 30.2641, 10},
	{0.0386844, 33.2905, 10},
	{0.0447372, 36.3169, 10},
	{0.0512944, 39.3433, 10},
	{0.0583561, 42.3698, 10},
	{0.0659221, 45.3962, 10},
	{0.0739925, 48.4226, 10},
	{0.0825674, 51.449, 10},
	{0.0916466, 54.4754, 10},
	{0.10123, 57.5018, 10},
	{0.111318, 60.5282, 10},
	{0.121911, 63.5546, 10},
	{0.133008, 66.581, 10},
	{0.144609, 69.6074, 10},
	{0.156714, 72.6339, 10},
	{0.169324, 75.6603, 10},
	{0.182439, 78.6867, 10},
	{0.196058, 81.7131, 10},
	{0.210181, 84.7395, 10},
	{0.224809, 87.7659, 10},
	{0.239941, 90.7923, 10},
	{0.255577, 93.8187, 10},
	{0.271718, 96.8451, 10},
	{0.288363, 99.8716, 10},
	{0.305513, 102.898, 10},
	{0.323167, 105.924, 10},
	{0.341325, 108.951, 10},
	{0.359988, 111.977, 10},
	{0.379156, 115.004, 10},
	{0.398827, 118.03, 10},
	{0.419003, 121.056, 10},
	{0.439684, 124.083, 10},
	{0.460869, 127.109, 10},
	{0.482558, 130.136, 10},
	{0.504752, 133.162, 10},
	{0.52745, 136.188, 10},
	{0.550652, 139.215, 10},
	{0.574359, 142.241, 10},
	{0.59857, 145.268, 10},
	{0.623286, 148.294, 10},
	{0.648506, 151.321, 10},
	{0.674231, 154.347, 10},
	{0.70046, 157.373, 10},
	{0.727193, 160.4, 10},
	{0.754431, 163.426, 10},
	{0.782173, 166.453, 10},
	{0.810419, 169.479, 10},
	{0.83917, 172.505, 10},
	{0.868425, 175.532, 10},
	{0.898185, 178.558, 10},
	{0.928449, 181.585, 10},
	{0.959218, 184.611, 10},
	{0.990491, 187.637, 10},
	{1.02227, 190.664, 10},
	{1.05455, 193.69, 10},
	{1.08734, 196.717, 10},
	{1.12063, 199.743, 10},
	{1.15442, 202.77, 10},
	{1.18872, 205.796, 10},
	{1.22352, 208.822, 10},
	{1.25883, 211.849, 10},
	{1.29464, 214.875, 10},
	{1.33096, 217.902, 10},
	{1.36778, 220.928, 10},
	{1.40511, 223.954, 10},
	{1.44294, 226.981, 10},
	{1.48127, 230.007, 10},
	{1.52011, 233.034, 10},
	{1.55946, 236.06, 10},
	{1.59929, 238.992, 10},
	{1.63958, 241.735, 10},
	{1.68029, 244.288, 10},
	{1.7214, 246.652, 10},
	{1.76287, 248.828, 10},
	{1.80467, 250.814, 10},
	{1.84678, 252.611, 10},
	{1.88915, 254.219, 10},
	{1.93175, 255.637, 10},
	{1.97456, 256.867, 10},
	{2.01755, 257.907, 10},
	{2.06067, 258.758, 10},
	{2.10391, 259.42, 10},
	{2.14723, 259.893, 10},
	{2.19059, 260.177, 10},
	{2.23397, 260.26, 10},
	{2.27732, 260.144, 10},
	{2.32063, 259.838, 10},
	{2.36385, 259.343, 10},
	{2.40696, 258.659, 10},
	{2.44993, 257.786, 10},
	{2.49271, 256.723, 10},
	{2.53529, 255.472, 10},
	{2.57763, 254.031, 10},
	{2.6197, 252.401, 10},
	{2.66146, 250.582, 10},
	{2.70289, 248.574, 10},
	{2.74395, 246.377, 10},
	{2.78462, 243.99, 10},
	{2.82485, 241.415, 10},
	{2.86463, 238.65, 10},
	{2.90391, 235.707, 10},
	{2.94269, 232.681, 10},
	{2.98097, 229.654, 10},
	{3.01874, 226.628, 10},
	{3.05601, 223.601, 10},
	{3.09277, 220.575, 10},
	{3.12903, 217.549, 10},
	{3.16478, 214.522, 10},
	{3.20003, 211.496, 10},
	{3.23478, 208.469, 10},
	{3.26902, 205.443, 10},
	{3.30275, 202.417, 10},
	{3.33598, 199.39, 10},
	{3.36871, 196.364, 10},
	{3.40093, 193.337, 10},
	{3.43265, 190.311, 10},
	{3.46387, 187.285, 10},
	{3.49458, 184.258, 10},
	{3.52478, 181.232, 10},
	{3.55448, 178.205, 10},
	{3.58368, 175.179, 10},
	{3.61237, 172.152, 10},
	{3.64056, 169.126, 10},
	{3.66824, 166.1, 10},
	{3.69542, 163.073, 10},
	{3.7221, 160.047, 10},
	{3.74827, 157.02, 10},
	{3.77393, 153.994, 10},
	{3.79909, 150.968, 10},
	{3.82375, 147.941, 10},
	{3.8479, 144.915, 10},
	{3.87155, 141.888, 10},
	{3.89469, 138.862, 10},
	{3.91733, 135.836, 10},
	{3.93947, 132.809, 10},
	{3.9611, 129.783, 10},
	{3.98222, 126.756, 10},
	{4.00285, 123.73, 10},
	{4.02296, 120.703, 10},
	{4.04258, 117.677, 10},
	{4.06168, 114.651, 10},
	{4.08029, 111.624, 10},
	{4.09839, 108.598, 10},
	{4.11598, 105.571, 10},
	{4.13307, 102.545, 10},
	{4.14966, 99.5186, 10},
	{4.16574, 96.4922, 10},
	{4.18132, 93.4658, 10},
	{4.19639, 90.4394, 10},
	{4.21096, 87.4129, 10},
	{4.22503, 84.3865, 10},
	{4.23859, 81.3601, 10},
	{4.25164, 78.3337, 10},
	{4.26419, 75.3073, 10},
	{4.27624, 72.2809, 10},
	{4.28778, 69.2545, 10},
	{4.29882, 66.2281, 10},
	{4.30935, 63.2017, 10},
	{4.31938, 60.1753, 10},
	{4.32891, 57.1488, 10},
	{4.33793, 54.1224, 10},
	{4.34645, 51.096, 10},
	{4.35446, 48.0696, 10},
	{4.36196, 45.0432, 10},
	{4.36897, 42.0168, 10},
	{4.37547, 38.9904, 10},
	{4.38146, 35.964, 10},
	{4.38695, 32.9376, 10},
	{4.39193, 29.9111, 10},
	{4.39641, 26.8847, 10},
	{4.40039, 23.8694, 10},
	{4.40389, 20.9596, 10},
	{4.40693, 18.239, 10},
	{4.40954, 15.7075, 10},
	{4.41177, 13.3652, 10},
	{4.41364, 11.212, 10},
	{4.41518, 9.24796, 10},
	{4.41643, 7.47309, 10},
	{4.41741, 5.88737, 10},
	{4.41816, 4.4908, 10},
	{4.4187, 3.28338, 10},
	{4.41908, 2.26511, 10},
	{4.41932, 1.43599, 10},
	{4.41945, 0.796027, 10},
	{4.41951, 0.345211, 10},
	{4.41952, 0.0835452, 10},
	{4.41952, 0, 10}};

	/* -------------------------------------*/

	int kRightMotionProfileSz = 204;

	double kRightMotionProfile[204][3] = {
	{1.57626e-05, 0.189151, 10},
	{5.03802e-05, 0.207706, 10},
	{0.000192243, 0.851178, 10},
	{0.000444444, 1.51321, 10},
	{0.000838508, 2.36438, 10},
	{0.00140596, 3.40471, 10},
	{0.00217833, 4.63419, 10},
	{0.00318713, 6.05282, 10},
	{0.0044639, 7.6606, 10},
	{0.00604015, 9.45753, 10},
	{0.00794742, 11.4436, 10},
	{0.0102172, 13.6188, 10},
	{0.0128811, 15.9832, 10},
	{0.0159706, 18.5368, 10},
	{0.0195171, 21.2795, 10},
	{0.0235524, 24.2113, 10},
	{0.028092, 27.2377, 10},
	{0.033136, 30.2641, 10},
	{0.0386844, 33.2905, 10},
	{0.0447372, 36.3169, 10},
	{0.0512944, 39.3433, 10},
	{0.0583561, 42.3698, 10},
	{0.0659221, 45.3962, 10},
	{0.0739925, 48.4226, 10},
	{0.0825674, 51.449, 10},
	{0.0916466, 54.4754, 10},
	{0.10123, 57.5018, 10},
	{0.111318, 60.5282, 10},
	{0.121911, 63.5546, 10},
	{0.133008, 66.581, 10},
	{0.144609, 69.6074, 10},
	{0.156714, 72.6339, 10},
	{0.169324, 75.6603, 10},
	{0.182439, 78.6867, 10},
	{0.196058, 81.7131, 10},
	{0.210181, 84.7395, 10},
	{0.224809, 87.7659, 10},
	{0.239941, 90.7923, 10},
	{0.255577, 93.8187, 10},
	{0.271718, 96.8451, 10},
	{0.288363, 99.8716, 10},
	{0.305513, 102.898, 10},
	{0.323167, 105.924, 10},
	{0.341325, 108.951, 10},
	{0.359988, 111.977, 10},
	{0.379156, 115.004, 10},
	{0.398827, 118.03, 10},
	{0.419003, 121.056, 10},
	{0.439684, 124.083, 10},
	{0.460869, 127.109, 10},
	{0.482558, 130.136, 10},
	{0.504752, 133.162, 10},
	{0.52745, 136.188, 10},
	{0.550652, 139.215, 10},
	{0.574359, 142.241, 10},
	{0.59857, 145.268, 10},
	{0.623286, 148.294, 10},
	{0.648506, 151.321, 10},
	{0.674231, 154.347, 10},
	{0.70046, 157.373, 10},
	{0.727193, 160.4, 10},
	{0.754431, 163.426, 10},
	{0.782173, 166.453, 10},
	{0.810419, 169.479, 10},
	{0.83917, 172.505, 10},
	{0.868425, 175.532, 10},
	{0.898185, 178.558, 10},
	{0.928449, 181.585, 10},
	{0.959218, 184.611, 10},
	{0.990491, 187.637, 10},
	{1.02227, 190.664, 10},
	{1.05455, 193.69, 10},
	{1.08734, 196.717, 10},
	{1.12063, 199.743, 10},
	{1.15442, 202.77, 10},
	{1.18872, 205.796, 10},
	{1.22352, 208.822, 10},
	{1.25883, 211.849, 10},
	{1.29464, 214.875, 10},
	{1.33096, 217.902, 10},
	{1.36778, 220.928, 10},
	{1.40511, 223.954, 10},
	{1.44294, 226.981, 10},
	{1.48127, 230.007, 10},
	{1.52011, 233.034, 10},
	{1.55946, 236.06, 10},
	{1.59929, 238.992, 10},
	{1.63958, 241.735, 10},
	{1.68029, 244.288, 10},
	{1.7214, 246.652, 10},
	{1.76287, 248.828, 10},
	{1.80467, 250.814, 10},
	{1.84678, 252.611, 10},
	{1.88915, 254.219, 10},
	{1.93175, 255.637, 10},
	{1.97456, 256.867, 10},
	{2.01755, 257.907, 10},
	{2.06067, 258.758, 10},
	{2.10391, 259.42, 10},
	{2.14723, 259.893, 10},
	{2.19059, 260.177, 10},
	{2.23397, 260.26, 10},
	{2.27732, 260.144, 10},
	{2.32063, 259.838, 10},
	{2.36385, 259.343, 10},
	{2.40696, 258.659, 10},
	{2.44993, 257.786, 10},
	{2.49271, 256.723, 10},
	{2.53529, 255.472, 10},
	{2.57763, 254.031, 10},
	{2.6197, 252.401, 10},
	{2.66146, 250.582, 10},
	{2.70289, 248.574, 10},
	{2.74395, 246.377, 10},
	{2.78462, 243.99, 10},
	{2.82485, 241.415, 10},
	{2.86463, 238.65, 10},
	{2.90391, 235.707, 10},
	{2.94269, 232.681, 10},
	{2.98097, 229.654, 10},
	{3.01874, 226.628, 10},
	{3.05601, 223.601, 10},
	{3.09277, 220.575, 10},
	{3.12903, 217.549, 10},
	{3.16478, 214.522, 10},
	{3.20003, 211.496, 10},
	{3.23478, 208.469, 10},
	{3.26902, 205.443, 10},
	{3.30275, 202.417, 10},
	{3.33598, 199.39, 10},
	{3.36871, 196.364, 10},
	{3.40093, 193.337, 10},
	{3.43265, 190.311, 10},
	{3.46387, 187.285, 10},
	{3.49458, 184.258, 10},
	{3.52478, 181.232, 10},
	{3.55448, 178.205, 10},
	{3.58368, 175.179, 10},
	{3.61237, 172.152, 10},
	{3.64056, 169.126, 10},
	{3.66824, 166.1, 10},
	{3.69542, 163.073, 10},
	{3.7221, 160.047, 10},
	{3.74827, 157.02, 10},
	{3.77393, 153.994, 10},
	{3.79909, 150.968, 10},
	{3.82375, 147.941, 10},
	{3.8479, 144.915, 10},
	{3.87155, 141.888, 10},
	{3.89469, 138.862, 10},
	{3.91733, 135.836, 10},
	{3.93947, 132.809, 10},
	{3.9611, 129.783, 10},
	{3.98222, 126.756, 10},
	{4.00285, 123.73, 10},
	{4.02296, 120.703, 10},
	{4.04258, 117.677, 10},
	{4.06168, 114.651, 10},
	{4.08029, 111.624, 10},
	{4.09839, 108.598, 10},
	{4.11598, 105.571, 10},
	{4.13307, 102.545, 10},
	{4.14966, 99.5186, 10},
	{4.16574, 96.4922, 10},
	{4.18132, 93.4658, 10},
	{4.19639, 90.4394, 10},
	{4.21096, 87.4129, 10},
	{4.22503, 84.3865, 10},
	{4.23859, 81.3601, 10},
	{4.25164, 78.3337, 10},
	{4.26419, 75.3073, 10},
	{4.27624, 72.2809, 10},
	{4.28778, 69.2545, 10},
	{4.29882, 66.2281, 10},
	{4.30935, 63.2017, 10},
	{4.31938, 60.1753, 10},
	{4.32891, 57.1488, 10},
	{4.33793, 54.1224, 10},
	{4.34645, 51.096, 10},
	{4.35446, 48.0696, 10},
	{4.36196, 45.0432, 10},
	{4.36897, 42.0168, 10},
	{4.37547, 38.9904, 10},
	{4.38146, 35.964, 10},
	{4.38695, 32.9376, 10},
	{4.39193, 29.9111, 10},
	{4.39641, 26.8847, 10},
	{4.40039, 23.8694, 10},
	{4.40389, 20.9596, 10},
	{4.40693, 18.239, 10},
	{4.40954, 15.7075, 10},
	{4.41177, 13.3652, 10},
	{4.41364, 11.212, 10},
	{4.41518, 9.24796, 10},
	{4.41643, 7.47309, 10},
	{4.41741, 5.88737, 10},
	{4.41816, 4.4908, 10},
	{4.4187, 3.28338, 10},
	{4.41908, 2.26511, 10},
	{4.41932, 1.43599, 10},
	{4.41945, 0.796027, 10},
	{4.41951, 0.345211, 10},
	{4.41952, 0.0835452, 10},
	{4.41952, 0, 10}};
};


#endif /* SRC_AUTO_MOTIONPROFILING_LIFTTWO_MOTIONPROFILE_H_ */

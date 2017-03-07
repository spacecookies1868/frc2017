#ifndef SRC_AUTO_MOTIONPROFILING_HIGHGOALAFTERRIGHTLIFT_MOTIONPROFILE_H_
#define SRC_AUTO_MOTIONPROFILING_HIGHGOALAFTERRIGHTLIFT_MOTIONPROFILE_H_

#include "Auto/MotionProfiling/MotionProfile.h"

class HighGoalAfterRightLift_MotionProfile : public MotionProfile {
public:
	HighGoalAfterRightLift_MotionProfile() {};

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

// Waypoint p1 = {0.0, 0.0, d2r(-60.0)};
// Waypoint p2 = {5.0, -5.0, d2r(-45.0)};

// WRONG:
//Waypoint p1 = {0.0, 0.0, 0.0};
//Waypoint p2 = {6.0, -1.0, d2r(-15)};

private:

	int kLeftMotionProfileSz = 206;

	double kLeftMotionProfile[206][3] = {
	    {2.71512e-05, 0.325815, 10},
	    {6.3976e-05, 0.220949, 10},
	    {0.0002655, 1.20914, 10},
	    {0.000623766, 2.1496, 10},
	    {0.00118356, 3.35878, 10},
	    {0.00198968, 4.83672, 10},
	    {0.00308693, 6.58346, 10},
	    {0.0045201, 8.59904, 10},
	    {0.00633403, 10.8836, 10},
	    {0.00857355, 13.4371, 10},
	    {0.0112835, 16.2598, 10},
	    {0.0145088, 19.3518, 10},
	    {0.0182944, 22.7134, 10},
	    {0.0226851, 26.3446, 10},
	    {0.0277261, 30.2458, 10},
	    {0.0334623, 34.4173, 10},
	    {0.0399165, 38.725, 10},
	    {0.047089, 43.0347, 10},
	    {0.0549801, 47.3467, 10},
	    {0.0635903, 51.6611, 10},
	    {0.07292, 55.9784, 10},
	    {0.0829698, 60.2987, 10},
	    {0.0937402, 64.6224, 10},
	    {0.105232, 68.9498, 10},
	    {0.117445, 73.2812, 10},
	    {0.130381, 77.6169, 10},
	    {0.144041, 81.9573, 10},
	    {0.158425, 86.3027, 10},
	    {0.173534, 90.6536, 10},
	    {0.189369, 95.0103, 10},
	    {0.205931, 99.3733, 10},
	    {0.223222, 103.743, 10},
	    {0.241241, 108.12, 10},
	    {0.259992, 112.504, 10},
	    {0.279475, 116.897, 10},
	    {0.299691, 121.298, 10},
	    {0.320643, 125.708, 10},
	    {0.342331, 130.129, 10},
	    {0.364757, 134.559, 10},
	    {0.387924, 139, 10},
	    {0.411833, 143.453, 10},
	    {0.436486, 147.918, 10},
	    {0.461885, 152.396, 10},
	    {0.488033, 156.887, 10},
	    {0.514932, 161.392, 10},
	    {0.542584, 165.912, 10},
	    {0.570992, 170.448, 10},
	    {0.600158, 175, 10},
	    {0.630087, 179.569, 10},
	    {0.660779, 184.156, 10},
	    {0.69224, 188.762, 10},
	    {0.724471, 193.387, 10},
	    {0.757476, 198.033, 10},
	    {0.79126, 202.699, 10},
	    {0.825824, 207.388, 10},
	    {0.861174, 212.099, 10},
	    {0.897313, 216.834, 10},
	    {0.934245, 221.593, 10},
	    {0.971975, 226.378, 10},
	    {1.01051, 231.188, 10},
	    {1.04984, 236.026, 10},
	    {1.08999, 240.891, 10},
	    {1.13096, 245.785, 10},
	    {1.17274, 250.709, 10},
	    {1.21535, 255.662, 10},
	    {1.25879, 260.647, 10},
	    {1.30307, 265.664, 10},
	    {1.34819, 270.713, 10},
	    {1.39415, 275.795, 10},
	    {1.44097, 280.912, 10},
	    {1.48865, 286.063, 10},
	    {1.53719, 291.25, 10},
	    {1.5866, 296.472, 10},
	    {1.63689, 301.732, 10},
	    {1.68806, 307.029, 10},
	    {1.74013, 312.364, 10},
	    {1.79308, 317.737, 10},
	    {1.84694, 323.149, 10},
	    {1.90171, 328.601, 10},
	    {1.95739, 334.092, 10},
	    {2.01399, 339.624, 10},
	    {2.07153, 345.197, 10},
	    {2.12999, 350.811, 10},
	    {2.1894, 356.466, 10},
	    {2.24977, 362.163, 10},
	    {2.31108, 367.903, 10},
	    {2.37336, 373.685, 10},
	    {2.43659, 379.361, 10},
	    {2.50072, 384.781, 10},
	    {2.56571, 389.941, 10},
	    {2.63152, 394.839, 10},
	    {2.69809, 399.47, 10},
	    {2.7654, 403.831, 10},
	    {2.83339, 407.918, 10},
	    {2.90201, 411.727, 10},
	    {2.97122, 415.255, 10},
	    {3.04097, 418.499, 10},
	    {3.11121, 421.453, 10},
	    {3.18189, 424.114, 10},
	    {3.25297, 426.478, 10},
	    {3.3244, 428.542, 10},
	    {3.39611, 430.301, 10},
	    {3.46806, 431.687, 10},
	    {3.54018, 432.694, 10},
	    {3.61241, 433.385, 10},
	    {3.6847, 433.755, 10},
	    {3.757, 433.8, 10},
	    {3.82925, 433.518, 10},
	    {3.90141, 432.905, 10},
	    {3.9734, 431.957, 10},
	    {4.04518, 430.67, 10},
	    {4.11668, 429.042, 10},
	    {4.18786, 427.07, 10},
	    {4.25865, 424.749, 10},
	    {4.329, 422.078, 10},
	    {4.39884, 419.052, 10},
	    {4.46812, 415.67, 10},
	    {4.53677, 411.927, 10},
	    {4.60476, 407.891, 10},
	    {4.67204, 403.721, 10},
	    {4.73863, 399.511, 10},
	    {4.80451, 395.264, 10},
	    {4.86967, 390.978, 10},
	    {4.93411, 386.654, 10},
	    {4.99783, 382.294, 10},
	    {5.06081, 377.897, 10},
	    {5.12305, 373.464, 10},
	    {5.18455, 368.996, 10},
	    {5.2453, 364.494, 10},
	    {5.30529, 359.957, 10},
	    {5.36453, 355.386, 10},
	    {5.42299, 350.782, 10},
	    {5.48068, 346.146, 10},
	    {5.53759, 341.477, 10},
	    {5.59372, 336.776, 10},
	    {5.64906, 332.044, 10},
	    {5.70361, 327.282, 10},
	    {5.75736, 322.489, 10},
	    {5.8103, 317.666, 10},
	    {5.86244, 312.813, 10},
	    {5.91376, 307.932, 10},
	    {5.96426, 303.022, 10},
	    {6.01394, 298.084, 10},
	    {6.0628, 293.119, 10},
	    {6.11082, 288.126, 10},
	    {6.158, 283.107, 10},
	    {6.20435, 278.062, 10},
	    {6.24985, 272.991, 10},
	    {6.29449, 267.894, 10},
	    {6.33829, 262.773, 10},
	    {6.38123, 257.627, 10},
	    {6.4233, 252.458, 10},
	    {6.46451, 247.265, 10},
	    {6.50486, 242.05, 10},
	    {6.54432, 236.812, 10},
	    {6.58292, 231.552, 10},
	    {6.62063, 226.27, 10},
	    {6.65746, 220.968, 10},
	    {6.6934, 215.645, 10},
	    {6.72845, 210.302, 10},
	    {6.7626, 204.94, 10},
	    {6.79586, 199.559, 10},
	    {6.82822, 194.159, 10},
	    {6.85968, 188.742, 10},
	    {6.89023, 183.307, 10},
	    {6.91987, 177.855, 10},
	    {6.94861, 172.387, 10},
	    {6.97642, 166.903, 10},
	    {7.00332, 161.404, 10},
	    {7.02931, 155.889, 10},
	    {7.05437, 150.361, 10},
	    {7.0785, 144.818, 10},
	    {7.10171, 139.263, 10},
	    {7.12399, 133.694, 10},
	    {7.14535, 128.114, 10},
	    {7.16577, 122.522, 10},
	    {7.18525, 116.918, 10},
	    {7.2038, 111.304, 10},
	    {7.22142, 105.68, 10},
	    {7.23809, 100.046, 10},
	    {7.25383, 94.4027, 10},
	    {7.26862, 88.7512, 10},
	    {7.28247, 83.0916, 10},
	    {7.29537, 77.4245, 10},
	    {7.30733, 71.7503, 10},
	    {7.31834, 66.0697, 10},
	    {7.3284, 60.3831, 10},
	    {7.33752, 54.6911, 10},
	    {7.34568, 48.9941, 10},
	    {7.35291, 43.3681, 10},
	    {7.35924, 37.9923, 10},
	    {7.36474, 32.9706, 10},
	    {7.36946, 28.3035, 10},
	    {7.37346, 23.9918, 10},
	    {7.3768, 20.0357, 10},
	    {7.37953, 16.4359, 10},
	    {7.38173, 13.1926, 10},
	    {7.38345, 10.306, 10},
	    {7.38475, 7.77648, 10},
	    {7.38568, 5.60412, 10},
	    {7.38631, 3.78907, 10},
	    {7.3867, 2.33141, 10},
	    {7.38691, 1.2312, 10},
	    {7.38699, 0.488471, 10},
	    {7.387, 0.10324, 10},
	    {7.387, 0, 10}};

	/* ----------------------------------------------------*/

	int kRightMotionProfileSz = 206;

	double kRightMotionProfile[206][3] = {
	    {2.71512e-05, 0.325815, 10},
	    {0.000102054, 0.449418, 10},
	    {0.000389253, 1.72319, 10},
	    {0.000899826, 3.06344, 10},
	    {0.00169759, 4.78659, 10},
	    {0.00284636, 6.89261, 10},
	    {0.00440994, 9.38146, 10},
	    {0.00645212, 12.2531, 10},
	    {0.00903669, 15.5074, 10},
	    {0.0122274, 19.1444, 10},
	    {0.016088, 23.1638, 10},
	    {0.0206823, 27.5655, 10},
	    {0.0260738, 32.3493, 10},
	    {0.0323264, 37.5151, 10},
	    {0.0395034, 43.0625, 10},
	    {0.0476686, 48.9912, 10},
	    {0.0568536, 55.1096, 10},
	    {0.0670579, 61.226, 10},
	    {0.0782813, 67.3401, 10},
	    {0.0905232, 73.4517, 10},
	    {0.103783, 79.5605, 10},
	    {0.118061, 85.6663, 10},
	    {0.133356, 91.7686, 10},
	    {0.149667, 97.8673, 10},
	    {0.166994, 103.962, 10},
	    {0.185336, 110.052, 10},
	    {0.204692, 116.138, 10},
	    {0.225062, 122.219, 10},
	    {0.246444, 128.294, 10},
	    {0.268838, 134.363, 10},
	    {0.292243, 140.426, 10},
	    {0.316656, 146.483, 10},
	    {0.342078, 152.532, 10},
	    {0.368507, 158.573, 10},
	    {0.395942, 164.607, 10},
	    {0.42438, 170.632, 10},
	    {0.453822, 176.647, 10},
	    {0.484264, 182.653, 10},
	    {0.515705, 188.649, 10},
	    {0.548144, 194.634, 10},
	    {0.581579, 200.607, 10},
	    {0.616007, 206.568, 10},
	    {0.651427, 212.517, 10},
	    {0.687835, 218.452, 10},
	    {0.72523, 224.372, 10},
	    {0.76361, 230.278, 10},
	    {0.802972, 236.168, 10},
	    {0.843312, 242.042, 10},
	    {0.884629, 247.899, 10},
	    {0.926918, 253.738, 10},
	    {0.970178, 259.559, 10},
	    {1.0144, 265.359, 10},
	    {1.05959, 271.14, 10},
	    {1.10574, 276.899, 10},
	    {1.15285, 282.637, 10},
	    {1.20091, 288.352, 10},
	    {1.24992, 294.043, 10},
	    {1.29987, 299.71, 10},
	    {1.35076, 305.351, 10},
	    {1.40259, 310.967, 10},
	    {1.45535, 316.555, 10},
	    {1.50903, 322.116, 10},
	    {1.56364, 327.648, 10},
	    {1.61917, 333.151, 10},
	    {1.6756, 338.623, 10},
	    {1.73295, 344.064, 10},
	    {1.79119, 349.474, 10},
	    {1.85033, 354.851, 10},
	    {1.91037, 360.194, 10},
	    {1.97128, 365.504, 10},
	    {2.03308, 370.779, 10},
	    {2.09575, 376.018, 10},
	    {2.15929, 381.221, 10},
	    {2.22369, 386.388, 10},
	    {2.28894, 391.517, 10},
	    {2.35504, 396.608, 10},
	    {2.42198, 401.661, 10},
	    {2.48976, 406.675, 10},
	    {2.55837, 411.65, 10},
	    {2.6278, 416.584, 10},
	    {2.69805, 421.478, 10},
	    {2.7691, 426.332, 10},
	    {2.84096, 431.144, 10},
	    {2.91361, 435.914, 10},
	    {2.98705, 440.643, 10},
	    {3.06128, 445.33, 10},
	    {3.13627, 449.974, 10},
	    {3.212, 454.398, 10},
	    {3.28841, 458.427, 10},
	    {3.36542, 462.064, 10},
	    {3.44297, 465.312, 10},
	    {3.521, 468.174, 10},
	    {3.59944, 470.656, 10},
	    {3.67824, 472.759, 10},
	    {3.75732, 474.488, 10},
	    {3.83662, 475.847, 10},
	    {3.9161, 476.84, 10},
	    {3.99568, 477.47, 10},
	    {4.0753, 477.741, 10},
	    {4.15491, 477.657, 10},
	    {4.23445, 477.223, 10},
	    {4.31385, 476.441, 10},
	    {4.39306, 475.243, 10},
	    {4.472, 473.635, 10},
	    {4.55062, 471.692, 10},
	    {4.62885, 469.418, 10},
	    {4.70665, 466.816, 10},
	    {4.78397, 463.89, 10},
	    {4.86074, 460.645, 10},
	    {4.93692, 457.082, 10},
	    {5.01246, 453.206, 10},
	    {5.08729, 449.02, 10},
	    {5.16138, 444.526, 10},
	    {5.23467, 439.729, 10},
	    {5.30711, 434.632, 10},
	    {5.37865, 429.237, 10},
	    {5.44924, 423.547, 10},
	    {5.51883, 417.566, 10},
	    {5.58739, 411.365, 10},
	    {5.65491, 405.108, 10},
	    {5.72139, 398.892, 10},
	    {5.78685, 392.713, 10},
	    {5.85128, 386.573, 10},
	    {5.91469, 380.471, 10},
	    {5.97709, 374.405, 10},
	    {6.03848, 368.376, 10},
	    {6.09888, 362.382, 10},
	    {6.15829, 356.424, 10},
	    {6.2167, 350.501, 10},
	    {6.27414, 344.612, 10},
	    {6.3306, 338.756, 10},
	    {6.38609, 332.934, 10},
	    {6.44061, 327.144, 10},
	    {6.49417, 321.387, 10},
	    {6.54678, 315.662, 10},
	    {6.59845, 309.967, 10},
	    {6.64916, 304.304, 10},
	    {6.69894, 298.671, 10},
	    {6.74779, 293.068, 10},
	    {6.7957, 287.494, 10},
	    {6.84269, 281.95, 10},
	    {6.88877, 276.433, 10},
	    {6.93392, 270.945, 10},
	    {6.97817, 265.484, 10},
	    {7.02151, 260.051, 10},
	    {7.06395, 254.644, 10},
	    {7.1055, 249.263, 10},
	    {7.14615, 243.909, 10},
	    {7.18591, 238.579, 10},
	    {7.22479, 233.274, 10},
	    {7.26279, 227.994, 10},
	    {7.29991, 222.737, 10},
	    {7.33616, 217.504, 10},
	    {7.37155, 212.293, 10},
	    {7.40606, 207.105, 10},
	    {7.43972, 201.939, 10},
	    {7.47252, 196.794, 10},
	    {7.50446, 191.671, 10},
	    {7.53556, 186.567, 10},
	    {7.56581, 181.484, 10},
	    {7.59521, 176.42, 10},
	    {7.62377, 171.375, 10},
	    {7.6515, 166.349, 10},
	    {7.67839, 161.34, 10},
	    {7.70444, 156.349, 10},
	    {7.72967, 151.375, 10},
	    {7.75408, 146.417, 10},
	    {7.77766, 141.475, 10},
	    {7.80041, 136.548, 10},
	    {7.82235, 131.636, 10},
	    {7.84348, 126.739, 10},
	    {7.86379, 121.855, 10},
	    {7.88328, 116.985, 10},
	    {7.90197, 112.127, 10},
	    {7.91985, 107.281, 10},
	    {7.93693, 102.448, 10},
	    {7.9532, 97.625, 10},
	    {7.96866, 92.8131, 10},
	    {7.98333, 88.0113, 10},
	    {7.9972, 83.2192, 10},
	    {8.01028, 78.4361, 10},
	    {8.02255, 73.6616, 10},
	    {8.03404, 68.8951, 10},
	    {8.04472, 64.1361, 10},
	    {8.05462, 59.3842, 10},
	    {8.06373, 54.6388, 10},
	    {8.07205, 49.8993, 10},
	    {8.07957, 45.1653, 10},
	    {8.08631, 40.4362, 10},
	    {8.09227, 35.7737, 10},
	    {8.0975, 31.3245, 10},
	    {8.10202, 27.1729, 10},
	    {8.10591, 23.3182, 10},
	    {8.1092, 19.7599, 10},
	    {8.11195, 16.4975, 10},
	    {8.11421, 13.5305, 10},
	    {8.11602, 10.8586, 10},
	    {8.11743, 8.48158, 10},
	    {8.1185, 6.39916, 10},
	    {8.11927, 4.6112, 10},
	    {8.11979, 3.11757, 10},
	    {8.12011, 1.91817, 10},
	    {8.12027, 1.01295, 10},
	    {8.12034, 0.401877, 10},
	    {8.12036, 0.0849378, 10},
	    {8.12036, 0, 10}};


};

#endif /* SRC_AUTO_MOTIONPROFILING_HIGHGOALAFTERRIGHTLIFT__MOTIONPROFILE_H_ */

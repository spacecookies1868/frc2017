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
	int kLeftMotionProfileSz = 242;

	double kLeftMotionProfile[242][3] = {
	    {2.70585e-05, 0.324702, 10},
	    {6.47389e-05, 0.226082, 10},
	    {0.000344407, 1.67801, 10},
	    {0.000841595, 2.98312, 10},
	    {0.00161845, 4.66112, 10},
	    {0.00273711, 6.71198, 10},
	    {0.00425973, 9.1357, 10},
	    {0.00624844, 11.9322, 10},
	    {0.00876537, 15.1016, 10},
	    {0.0118726, 18.6437, 10},
	    {0.0156324, 22.5585, 10},
	    {0.0201067, 26.846, 10},
	    {0.0253577, 31.506, 10},
	    {0.0314475, 36.5385, 10},
	    {0.038438, 41.9434, 10},
	    {0.0463914, 47.7205, 10},
	    {0.0553387, 53.6833, 10},
	    {0.0652796, 59.6453, 10},
	    {0.076214, 65.6064, 10},
	    {0.0881417, 71.5665, 10},
	    {0.101063, 77.5254, 10},
	    {0.114976, 83.483, 10},
	    {0.129883, 89.4391, 10},
	    {0.145782, 95.3938, 10},
	    {0.162673, 101.347, 10},
	    {0.180556, 107.298, 10},
	    {0.19943, 113.247, 10},
	    {0.219296, 119.194, 10},
	    {0.240152, 125.138, 10},
	    {0.261999, 131.08, 10},
	    {0.284835, 137.019, 10},
	    {0.308661, 142.955, 10},
	    {0.333476, 148.887, 10},
	    {0.359279, 154.817, 10},
	    {0.386069, 160.742, 10},
	    {0.413846, 166.664, 10},
	    {0.44261, 172.581, 10},
	    {0.472358, 178.493, 10},
	    {0.503092, 184.401, 10},
	    {0.534809, 190.303, 10},
	    {0.567509, 196.2, 10},
	    {0.601191, 202.091, 10},
	    {0.635854, 207.975, 10},
	    {0.671496, 213.853, 10},
	    {0.708116, 219.724, 10},
	    {0.745714, 225.587, 10},
	    {0.784288, 231.443, 10},
	    {0.823836, 237.29, 10},
	    {0.864358, 243.128, 10},
	    {0.905851, 248.957, 10},
	    {0.948313, 254.776, 10},
	    {0.991744, 260.585, 10},
	    {1.03614, 266.383, 10},
	    {1.0815, 272.169, 10},
	    {1.12783, 277.944, 10},
	    {1.17511, 283.706, 10},
	    {1.22335, 289.456, 10},
	    {1.27255, 295.191, 10},
	    {1.3227, 300.913, 10},
	    {1.37381, 306.62, 10},
	    {1.42586, 312.311, 10},
	    {1.47886, 317.987, 10},
	    {1.5328, 323.646, 10},
	    {1.58768, 329.287, 10},
	    {1.6435, 334.911, 10},
	    {1.70025, 340.517, 10},
	    {1.75793, 346.103, 10},
	    {1.81655, 351.67, 10},
	    {1.87608, 357.216, 10},
	    {1.93654, 362.742, 10},
	    {1.99791, 368.246, 10},
	    {2.0602, 373.727, 10},
	    {2.1234, 379.186, 10},
	    {2.1875, 384.622, 10},
	    {2.25251, 390.033, 10},
	    {2.31841, 395.42, 10},
	    {2.38521, 400.782, 10},
	    {2.45289, 406.118, 10},
	    {2.52147, 411.428, 10},
	    {2.59092, 416.711, 10},
	    {2.66125, 421.967, 10},
	    {2.73245, 427.196, 10},
	    {2.80451, 432.396, 10},
	    {2.87744, 437.567, 10},
	    {2.95122, 442.709, 10},
	    {3.02586, 447.822, 10},
	    {3.10135, 452.905, 10},
	    {3.17767, 457.958, 10},
	    {3.25483, 462.981, 10},
	    {3.33283, 467.972, 10},
	    {3.41165, 472.932, 10},
	    {3.4913, 477.861, 10},
	    {3.57176, 482.758, 10},
	    {3.65303, 487.624, 10},
	    {3.7351, 492.457, 10},
	    {3.81798, 497.258, 10},
	    {3.90165, 502.026, 10},
	    {3.98611, 506.762, 10},
	    {4.07135, 511.465, 10},
	    {4.15738, 516.135, 10},
	    {4.24417, 520.772, 10},
	    {4.33173, 525.376, 10},
	    {4.42006, 529.948, 10},
	    {4.50914, 534.485, 10},
	    {4.59897, 538.99, 10},
	    {4.68952, 543.288, 10},
	    {4.78072, 547.209, 10},
	    {4.87251, 550.754, 10},
	    {4.96483, 553.927, 10},
	    {5.05762, 556.731, 10},
	    {5.15082, 559.168, 10},
	    {5.24436, 561.242, 10},
	    {5.33818, 562.956, 10},
	    {5.43224, 564.312, 10},
	    {5.52646, 565.314, 10},
	    {5.62078, 565.965, 10},
	    {5.71516, 566.267, 10},
	    {5.80953, 566.224, 10},
	    {5.90384, 565.838, 10},
	    {5.99802, 565.113, 10},
	    {6.09201, 563.906, 10},
	    {6.18571, 562.222, 10},
	    {6.27908, 560.208, 10},
	    {6.37206, 557.869, 10},
	    {6.46459, 555.206, 10},
	    {6.55663, 552.222, 10},
	    {6.64812, 548.921, 10},
	    {6.739, 545.305, 10},
	    {6.82923, 541.376, 10},
	    {6.91875, 537.136, 10},
	    {7.00752, 532.59, 10},
	    {7.09547, 527.738, 10},
	    {7.18257, 522.584, 10},
	    {7.26876, 517.13, 10},
	    {7.35399, 511.377, 10},
	    {7.43821, 505.33, 10},
	    {7.5214, 499.129, 10},
	    {7.60355, 492.938, 10},
	    {7.68468, 486.778, 10},
	    {7.76479, 480.649, 10},
	    {7.84388, 474.551, 10},
	    {7.92196, 468.482, 10},
	    {7.99904, 462.443, 10},
	    {8.07511, 456.433, 10},
	    {8.15019, 450.452, 10},
	    {8.22427, 444.499, 10},
	    {8.29736, 438.574, 10},
	    {8.36948, 432.677, 10},
	    {8.44061, 426.807, 10},
	    {8.51077, 420.964, 10},
	    {8.57996, 415.148, 10},
	    {8.64819, 409.359, 10},
	    {8.71546, 403.595, 10},
	    {8.78177, 397.858, 10},
	    {8.84712, 392.146, 10},
	    {8.91153, 386.459, 10},
	    {8.975, 380.797, 10},
	    {9.03753, 375.16, 10},
	    {9.09912, 369.547, 10},
	    {9.15978, 363.959, 10},
	    {9.21951, 358.394, 10},
	    {9.27832, 352.853, 10},
	    {9.33621, 347.335, 10},
	    {9.39318, 341.841, 10},
	    {9.44924, 336.369, 10},
	    {9.5044, 330.919, 10},
	    {9.55864, 325.492, 10},
	    {9.61199, 320.087, 10},
	    {9.66444, 314.704, 10},
	    {9.716, 309.342, 10},
	    {9.76667, 304.001, 10},
	    {9.81645, 298.682, 10},
	    {9.86534, 293.382, 10},
	    {9.91336, 288.103, 10},
	    {9.9605, 282.844, 10},
	    {10.0068, 277.605, 10},
	    {10.0522, 272.385, 10},
	    {10.0967, 267.184, 10},
	    {10.1404, 262.002, 10},
	    {10.1832, 256.838, 10},
	    {10.2251, 251.693, 10},
	    {10.2662, 246.565, 10},
	    {10.3065, 241.455, 10},
	    {10.3458, 236.362, 10},
	    {10.3844, 231.286, 10},
	    {10.4221, 226.226, 10},
	    {10.459, 221.183, 10},
	    {10.495, 216.155, 10},
	    {10.5302, 211.143, 10},
	    {10.5645, 206.146, 10},
	    {10.5981, 201.164, 10},
	    {10.6308, 196.197, 10},
	    {10.6626, 191.243, 10},
	    {10.6937, 186.303, 10},
	    {10.7239, 181.377, 10},
	    {10.7533, 176.463, 10},
	    {10.7819, 171.563, 10},
	    {10.8097, 166.674, 10},
	    {10.8367, 161.798, 10},
	    {10.8628, 156.933, 10},
	    {10.8882, 152.08, 10},
	    {10.9127, 147.237, 10},
	    {10.9364, 142.405, 10},
	    {10.9594, 137.583, 10},
	    {10.9815, 132.772, 10},
	    {11.0028, 127.969, 10},
	    {11.0234, 123.176, 10},
	    {11.0431, 118.391, 10},
	    {11.062, 113.615, 10},
	    {11.0802, 108.847, 10},
	    {11.0975, 104.087, 10},
	    {11.1141, 99.3336, 10},
	    {11.1298, 94.5877, 10},
	    {11.1448, 89.8484, 10},
	    {11.159, 85.1155, 10},
	    {11.1724, 80.3886, 10},
	    {11.185, 75.6673, 10},
	    {11.1968, 70.9514, 10},
	    {11.2079, 66.2404, 10},
	    {11.2181, 61.5341, 10},
	    {11.2276, 56.8321, 10},
	    {11.2363, 52.1341, 10},
	    {11.2442, 47.4397, 10},
	    {11.2513, 42.7486, 10},
	    {11.2577, 38.0605, 10},
	    {11.2633, 33.5017, 10},
	    {11.2681, 29.2181, 10},
	    {11.2723, 25.2286, 10},
	    {11.2759, 21.533, 10},
	    {11.2789, 18.1307, 10},
	    {11.2814, 15.0217, 10},
	    {11.2835, 12.2055, 10},
	    {11.2851, 9.68206, 10},
	    {11.2863, 7.45117, 10},
	    {11.2872, 5.51272, 10},
	    {11.2879, 3.86661, 10},
	    {11.2883, 2.51278, 10},
	    {11.2886, 1.45117, 10},
	    {11.2887, 0.681758, 10},
	    {11.2887, 0.204531, 10},
	    {11.2887, 0.0194811, 10},
	    {11.2887, 0, 10}};

	/* ----------------------------------------------------*/

	int kRightMotionProfileSz = 242;

	double kRightMotionProfile[242][3] = {
	    {2.70585e-05, 0.324702, 10},
	    {3.26125e-05, 0.0333239, 10},
	    {0.000239997, 1.24431, 10},
	    {0.000608682, 2.21211, 10},
	    {0.00118475, 3.45643, 10},
	    {0.0020143, 4.97729, 10},
	    {0.00314342, 6.77471, 10},
	    {0.0046182, 8.84869, 10},
	    {0.00648475, 11.1993, 10},
	    {0.00878917, 13.8265, 10},
	    {0.0115776, 16.7305, 10},
	    {0.0148961, 19.9112, 10},
	    {0.0187909, 23.3687, 10},
	    {0.0233081, 27.1031, 10},
	    {0.0284938, 31.1146, 10},
	    {0.0343944, 35.4032, 10},
	    {0.0410329, 39.8309, 10},
	    {0.0484094, 44.2593, 10},
	    {0.0565242, 48.6887, 10},
	    {0.0653774, 53.1191, 10},
	    {0.0749692, 57.5507, 10},
	    {0.0852998, 61.9836, 10},
	    {0.0963694, 66.4179, 10},
	    {0.108178, 70.8537, 10},
	    {0.120727, 75.2913, 10},
	    {0.134015, 79.7307, 10},
	    {0.148044, 84.1722, 10},
	    {0.162813, 88.6158, 10},
	    {0.178324, 93.0619, 10},
	    {0.194575, 97.5106, 10},
	    {0.211569, 101.962, 10},
	    {0.229305, 106.417, 10},
	    {0.247784, 110.874, 10},
	    {0.267007, 115.335, 10},
	    {0.286974, 119.8, 10},
	    {0.307685, 124.269, 10},
	    {0.329142, 128.743, 10},
	    {0.351346, 133.221, 10},
	    {0.374296, 137.704, 10},
	    {0.397995, 142.192, 10},
	    {0.422442, 146.685, 10},
	    {0.44764, 151.185, 10},
	    {0.473588, 155.691, 10},
	    {0.500289, 160.203, 10},
	    {0.527743, 164.723, 10},
	    {0.555951, 169.25, 10},
	    {0.584915, 173.785, 10},
	    {0.614637, 178.329, 10},
	    {0.645117, 182.881, 10},
	    {0.676357, 187.443, 10},
	    {0.70836, 192.014, 10},
	    {0.741126, 196.596, 10},
	    {0.774657, 201.188, 10},
	    {0.808956, 205.792, 10},
	    {0.844024, 210.408, 10},
	    {0.879863, 215.036, 10},
	    {0.916476, 219.677, 10},
	    {0.953865, 224.332, 10},
	    {0.992031, 229.001, 10},
	    {1.03098, 233.684, 10},
	    {1.07071, 238.383, 10},
	    {1.11123, 243.098, 10},
	    {1.15253, 247.83, 10},
	    {1.19463, 252.578, 10},
	    {1.23752, 257.345, 10},
	    {1.28121, 262.13, 10},
	    {1.32569, 266.934, 10},
	    {1.37099, 271.758, 10},
	    {1.41709, 276.602, 10},
	    {1.464, 281.467, 10},
	    {1.51172, 286.353, 10},
	    {1.56027, 291.262, 10},
	    {1.60963, 296.194, 10},
	    {1.65983, 301.149, 10},
	    {1.71085, 306.127, 10},
	    {1.7627, 311.131, 10},
	    {1.8154, 316.16, 10},
	    {1.86893, 321.214, 10},
	    {1.92331, 326.294, 10},
	    {1.97855, 331.402, 10},
	    {2.03464, 336.536, 10},
	    {2.09159, 341.698, 10},
	    {2.1494, 346.889, 10},
	    {2.20809, 352.108, 10},
	    {2.26764, 357.356, 10},
	    {2.32808, 362.633, 10},
	    {2.38941, 367.941, 10},
	    {2.45162, 373.278, 10},
	    {2.51473, 378.646, 10},
	    {2.57874, 384.045, 10},
	    {2.64365, 389.476, 10},
	    {2.70947, 394.937, 10},
	    {2.77621, 400.431, 10},
	    {2.84387, 405.956, 10},
	    {2.91245, 411.513, 10},
	    {2.98197, 417.103, 10},
	    {3.05243, 422.725, 10},
	    {3.12382, 428.379, 10},
	    {3.19617, 434.067, 10},
	    {3.26946, 439.787, 10},
	    {3.34372, 445.54, 10},
	    {3.41894, 451.327, 10},
	    {3.49513, 457.146, 10},
	    {3.5723, 462.999, 10},
	    {3.65045, 468.885, 10},
	    {3.72956, 474.652, 10},
	    {3.80958, 480.148, 10},
	    {3.89048, 485.37, 10},
	    {3.97219, 490.315, 10},
	    {4.05469, 494.979, 10},
	    {4.13792, 499.36, 10},
	    {4.22183, 503.456, 10},
	    {4.30637, 507.262, 10},
	    {4.3915, 510.776, 10},
	    {4.47717, 513.995, 10},
	    {4.56332, 516.917, 10},
	    {4.64991, 519.537, 10},
	    {4.73688, 521.853, 10},
	    {4.82419, 523.862, 10},
	    {4.91179, 525.561, 10},
	    {4.99959, 526.811, 10},
	    {5.08752, 527.608, 10},
	    {5.17554, 528.085, 10},
	    {5.26358, 528.238, 10},
	    {5.35159, 528.065, 10},
	    {5.43952, 527.564, 10},
	    {5.5273, 526.731, 10},
	    {5.6149, 525.563, 10},
	    {5.70224, 524.059, 10},
	    {5.78928, 522.215, 10},
	    {5.87595, 520.03, 10},
	    {5.9622, 517.5, 10},
	    {6.04797, 514.623, 10},
	    {6.1332, 511.397, 10},
	    {6.21784, 507.819, 10},
	    {6.30182, 503.888, 10},
	    {6.38511, 499.742, 10},
	    {6.4677, 495.542, 10},
	    {6.54959, 491.311, 10},
	    {6.63076, 487.05, 10},
	    {6.71122, 482.758, 10},
	    {6.79096, 478.436, 10},
	    {6.86997, 474.085, 10},
	    {6.94826, 469.704, 10},
	    {7.02581, 465.295, 10},
	    {7.10262, 460.857, 10},
	    {7.17868, 456.392, 10},
	    {7.254, 451.899, 10},
	    {7.32856, 447.378, 10},
	    {7.40237, 442.83, 10},
	    {7.47541, 438.256, 10},
	    {7.54768, 433.655, 10},
	    {7.61919, 429.028, 10},
	    {7.68992, 424.375, 10},
	    {7.75987, 419.696, 10},
	    {7.82903, 414.993, 10},
	    {7.89741, 410.264, 10},
	    {7.965, 405.511, 10},
	    {8.03178, 400.733, 10},
	    {8.09777, 395.931, 10},
	    {8.16296, 391.105, 10},
	    {8.22733, 386.256, 10},
	    {8.2909, 381.383, 10},
	    {8.35365, 376.487, 10},
	    {8.41557, 371.569, 10},
	    {8.47668, 366.627, 10},
	    {8.53696, 361.664, 10},
	    {8.5964, 356.678, 10},
	    {8.65501, 351.671, 10},
	    {8.71279, 346.643, 10},
	    {8.76972, 341.593, 10},
	    {8.82581, 336.522, 10},
	    {8.88105, 331.431, 10},
	    {8.93543, 326.32, 10},
	    {8.98896, 321.188, 10},
	    {9.04164, 316.037, 10},
	    {9.09345, 310.867, 10},
	    {9.14439, 305.677, 10},
	    {9.19447, 300.469, 10},
	    {9.24368, 295.242, 10},
	    {9.29201, 289.997, 10},
	    {9.33947, 284.734, 10},
	    {9.38604, 279.454, 10},
	    {9.43174, 274.156, 10},
	    {9.47654, 268.842, 10},
	    {9.52046, 263.511, 10},
	    {9.56349, 258.164, 10},
	    {9.60562, 252.801, 10},
	    {9.64686, 247.423, 10},
	    {9.6872, 242.029, 10},
	    {9.72663, 236.621, 10},
	    {9.76517, 231.198, 10},
	    {9.80279, 225.761, 10},
	    {9.83951, 220.311, 10},
	    {9.87532, 214.847, 10},
	    {9.91021, 209.369, 10},
	    {9.94419, 203.88, 10},
	    {9.97726, 198.378, 10},
	    {10.0094, 192.863, 10},
	    {10.0406, 187.338, 10},
	    {10.0709, 181.801, 10},
	    {10.1003, 176.253, 10},
	    {10.1287, 170.694, 10},
	    {10.1563, 165.126, 10},
	    {10.1829, 159.547, 10},
	    {10.2085, 153.959, 10},
	    {10.2332, 148.362, 10},
	    {10.257, 142.756, 10},
	    {10.2799, 137.142, 10},
	    {10.3018, 131.519, 10},
	    {10.3228, 125.889, 10},
	    {10.3428, 120.252, 10},
	    {10.3619, 114.607, 10},
	    {10.3801, 108.956, 10},
	    {10.3973, 103.298, 10},
	    {10.4136, 97.6349, 10},
	    {10.4289, 91.9657, 10},
	    {10.4433, 86.2912, 10},
	    {10.4567, 80.6117, 10},
	    {10.4692, 74.9275, 10},
	    {10.4808, 69.2391, 10},
	    {10.4914, 63.5467, 10},
	    {10.501, 57.8506, 10},
	    {10.5097, 52.1512, 10},
	    {10.5174, 46.4489, 10},
	    {10.5242, 40.8985, 10},
	    {10.5302, 35.6792, 10},
	    {10.5353, 30.8151, 10},
	    {10.5397, 26.3066, 10},
	    {10.5434, 22.1541, 10},
	    {10.5465, 18.3578, 10},
	    {10.549, 14.9181, 10},
	    {10.5509, 11.835, 10},
	    {10.5524, 9.10872, 10},
	    {10.5536, 6.73945, 10},
	    {10.5544, 4.72724, 10},
	    {10.5549, 3.07215, 10},
	    {10.5552, 1.77425, 10},
	    {10.5553, 0.833549, 10},
	    {10.5553, 0.25007, 10},
	    {10.5553, 0.0238186, 10},
	    {10.5553, 0, 10}};

};

#endif /* SRC_AUTO_MOTIONPROFILING_HIGHGOALAFTERRIGHTLIFT__MOTIONPROFILE_H_ */

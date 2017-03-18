int kLeftMotionProfileSz = 279;

double kLeftMotionProfile[279][3] = {
    {-1.08739e-05, -0.130487, 10},
    {-2.88654e-05, -0.107949, 10},
    {-0.000126731, -0.587193, 10},
    {-0.000300714, -1.0439, 10},
    {-0.000572562, -1.63109, 10},
    {-0.000964024, -2.34877, 10},
    {-0.00149685, -3.19694, 10},
    {-0.00219278, -4.17559, 10},
    {-0.00307357, -5.28473, 10},
    {-0.00416096, -6.52436, 10},
    {-0.00547671, -7.89448, 10},
    {-0.00704256, -9.39508, 10},
    {-0.00888025, -11.0262, 10},
    {-0.0110115, -12.7878, 10},
    {-0.0134582, -14.6798, 10},
    {-0.0162419, -16.7024, 10},
    {-0.0193845, -18.8554, 10},
    {-0.0229076, -21.1389, 10},
    {-0.0268331, -23.553, 10},
    {-0.0311827, -26.0975, 10},
    {-0.0359781, -28.7724, 10},
    {-0.0412411, -31.5779, 10},
    {-0.0469934, -34.5139, 10},
    {-0.0532568, -37.5803, 10},
    {-0.060053, -40.7773, 10},
    {-0.0674038, -44.1047, 10},
    {-0.0753309, -47.5626, 10},
    {-0.0838561, -51.151, 10},
    {-0.0930011, -54.8699, 10},
    {-0.102788, -58.7193, 10},
    {-0.113237, -62.6991, 10},
    {-0.124372, -66.8095, 10},
    {-0.136214, -71.0503, 10},
    {-0.148784, -75.4216, 10},
    {-0.162105, -79.9235, 10},
    {-0.176198, -84.5558, 10},
    {-0.191084, -89.3185, 10},
    {-0.206786, -94.2118, 10},
    {-0.223325, -99.2356, 10},
    {-0.240724, -104.39, 10},
    {-0.258992, -109.609, 10},
    {-0.27813, -114.829, 10},
    {-0.298138, -120.048, 10},
    {-0.319016, -125.268, 10},
    {-0.340764, -130.487, 10},
    {-0.363382, -135.707, 10},
    {-0.386869, -140.926, 10},
    {-0.411227, -146.146, 10},
    {-0.436454, -151.365, 10},
    {-0.462552, -156.585, 10},
    {-0.489519, -161.804, 10},
    {-0.517357, -167.024, 10},
    {-0.546064, -172.243, 10},
    {-0.575641, -177.463, 10},
    {-0.606088, -182.682, 10},
    {-0.637405, -187.902, 10},
    {-0.669592, -193.121, 10},
    {-0.702649, -198.341, 10},
    {-0.736575, -203.56, 10},
    {-0.771372, -208.78, 10},
    {-0.807038, -213.999, 10},
    {-0.843575, -219.219, 10},
    {-0.880981, -224.438, 10},
    {-0.919257, -229.658, 10},
    {-0.958404, -234.877, 10},
    {-0.99842, -240.097, 10},
    {-1.03931, -245.316, 10},
    {-1.08106, -250.536, 10},
    {-1.12369, -255.755, 10},
    {-1.16717, -260.909, 10},
    {-1.21149, -265.933, 10},
    {-1.25663, -270.826, 10},
    {-1.30256, -275.589, 10},
    {-1.34927, -280.221, 10},
    {-1.39672, -284.723, 10},
    {-1.4449, -289.095, 10},
    {-1.49379, -293.335, 10},
    {-1.54337, -297.446, 10},
    {-1.5936, -301.426, 10},
    {-1.64448, -305.275, 10},
    {-1.69598, -308.994, 10},
    {-1.74808, -312.582, 10},
    {-1.80075, -316.04, 10},
    {-1.85398, -319.368, 10},
    {-1.90774, -322.565, 10},
    {-1.96201, -325.631, 10},
    {-2.01678, -328.567, 10},
    {-2.072, -331.372, 10},
    {-2.12768, -334.047, 10},
    {-2.18378, -336.592, 10},
    {-2.24028, -339.006, 10},
    {-2.29716, -341.289, 10},
    {-2.3544, -343.443, 10},
    {-2.41198, -345.465, 10},
    {-2.46987, -347.357, 10},
    {-2.52806, -349.119, 10},
    {-2.58652, -350.75, 10},
    {-2.64522, -352.25, 10},
    {-2.70416, -353.621, 10},
    {-2.7633, -354.86, 10},
    {-2.82263, -355.969, 10},
    {-2.88212, -356.948, 10},
    {-2.94176, -357.796, 10},
    {-3.00151, -358.514, 10},
    {-3.06136, -359.101, 10},
    {-3.12128, -359.558, 10},
    {-3.18127, -359.884, 10},
    {-3.24128, -360.08, 10},
    {-3.3013, -360.145, 10},
    {-3.36133, -360.145, 10},
    {-3.42135, -360.145, 10},
    {-3.48138, -360.145, 10},
    {-3.5414, -360.145, 10},
    {-3.60142, -360.145, 10},
    {-3.66666, -391.406, 10},
    {-3.7403, -441.824, 10},
    {-3.81412, -442.969, 10},
    {-3.88814, -444.112, 10},
    {-3.96235, -445.251, 10},
    {-4.03675, -446.385, 10},
    {-4.11133, -447.511, 10},
    {-4.1861, -448.629, 10},
    {-4.26106, -449.735, 10},
    {-4.3362, -450.827, 10},
    {-4.41152, -451.904, 10},
    {-4.48701, -452.964, 10},
    {-4.56268, -454.003, 10},
    {-4.63851, -455.02, 10},
    {-4.71452, -456.011, 10},
    {-4.79068, -456.976, 10},
    {-4.867, -457.911, 10},
    {-4.94347, -458.813, 10},
    {-5.02008, -459.681, 10},
    {-5.09683, -460.511, 10},
    {-5.17371, -461.301, 10},
    {-5.25072, -462.05, 10},
    {-5.32785, -462.754, 10},
    {-5.40508, -463.411, 10},
    {-5.48242, -464.019, 10},
    {-5.55985, -464.575, 10},
    {-5.63736, -465.079, 10},
    {-5.71495, -465.528, 10},
    {-5.7926, -465.92, 10},
    {-5.87031, -466.254, 10},
    {-5.94807, -466.528, 10},
    {-6.02586, -466.742, 10},
    {-6.10367, -466.894, 10},
    {-6.1815, -466.983, 10},
    {-6.25934, -467.01, 10},
    {-6.33717, -466.973, 10},
    {-6.41498, -466.872, 10},
    {-6.49276, -466.708, 10},
    {-6.57051, -466.482, 10},
    {-6.64821, -466.192, 10},
    {-6.72585, -465.841, 10},
    {-6.80342, -465.429, 10},
    {-6.88091, -464.958, 10},
    {-6.95832, -464.428, 10},
    {-7.03563, -463.842, 10},
    {-7.11283, -463.2, 10},
    {-7.18991, -462.505, 10},
    {-7.26687, -461.759, 10},
    {-7.3437, -460.964, 10},
    {-7.42038, -460.122, 10},
    {-7.49692, -459.235, 10},
    {-7.57331, -458.307, 10},
    {-7.64953, -457.338, 10},
    {-7.72559, -456.332, 10},
    {-7.80147, -455.291, 10},
    {-7.87717, -454.206, 10},
    {-7.95267, -452.998, 10},
    {-8.02794, -451.6, 10},
    {-8.10294, -450.016, 10},
    {-8.17765, -448.25, 10},
    {-8.25203, -446.307, 10},
    {-8.32606, -444.191, 10},
    {-8.39971, -441.905, 10},
    {-8.47296, -439.455, 10},
    {-8.54576, -436.843, 10},
    {-8.61811, -434.075, 10},
    {-8.68997, -431.153, 10},
    {-8.76131, -428.081, 10},
    {-8.83213, -424.863, 10},
    {-8.90238, -421.502, 10},
    {-8.97204, -418.001, 10},
    {-9.0411, -414.363, 10},
    {-9.10953, -410.591, 10},
    {-9.17732, -406.687, 10},
    {-9.24443, -402.654, 10},
    {-9.31084, -398.495, 10},
    {-9.37654, -394.21, 10},
    {-9.44151, -389.802, 10},
    {-9.50572, -385.274, 10},
    {-9.56916, -380.625, 10},
    {-9.6318, -375.859, 10},
    {-9.69363, -370.976, 10},
    {-9.75463, -365.977, 10},
    {-9.81477, -360.863, 10},
    {-9.87404, -355.636, 10},
    {-9.93243, -350.296, 10},
    {-9.9899, -344.843, 10},
    {-10.0464, -339.279, 10},
    {-10.102, -333.603, 10},
    {-10.1567, -327.817, 10},
    {-10.2103, -321.919, 10},
    {-10.263, -315.911, 10},
    {-10.3146, -309.793, 10},
    {-10.3652, -303.564, 10},
    {-10.4148, -297.224, 10},
    {-10.4632, -290.785, 10},
    {-10.5106, -284.319, 10},
    {-10.5569, -277.89, 10},
    {-10.6022, -271.497, 10},
    {-10.6464, -265.137, 10},
    {-10.6895, -258.811, 10},
    {-10.7316, -252.516, 10},
    {-10.7726, -246.252, 10},
    {-10.8126, -240.017, 10},
    {-10.8516, -233.811, 10},
    {-10.8895, -227.632, 10},
    {-10.9264, -221.479, 10},
    {-10.9623, -215.352, 10},
    {-10.9972, -209.249, 10},
    {-11.0311, -203.17, 10},
    {-11.0639, -197.112, 10},
    {-11.0958, -191.077, 10},
    {-11.1266, -185.062, 10},
    {-11.1565, -179.067, 10},
    {-11.1853, -173.091, 10},
    {-11.2132, -167.133, 10},
    {-11.24, -161.192, 10},
    {-11.2659, -155.268, 10},
    {-11.2908, -149.36, 10},
    {-11.3147, -143.467, 10},
    {-11.3376, -137.588, 10},
    {-11.3596, -131.723, 10},
    {-11.3806, -125.871, 10},
    {-11.4006, -120.032, 10},
    {-11.4196, -114.214, 10},
    {-11.4377, -108.49, 10},
    {-11.4548, -102.919, 10},
    {-11.4711, -97.5011, 10},
    {-11.4865, -92.2354, 10},
    {-11.501, -87.121, 10},
    {-11.5147, -82.1572, 10},
    {-11.5276, -77.3432, 10},
    {-11.5397, -72.6784, 10},
    {-11.551, -68.1623, 10},
    {-11.5617, -63.7941, 10},
    {-11.5716, -59.5735, 10},
    {-11.5809, -55.4999, 10},
    {-11.5895, -51.5729, 10},
    {-11.5974, -47.792, 10},
    {-11.6048, -44.1568, 10},
    {-11.6116, -40.6671, 10},
    {-11.6178, -37.3224, 10},
    {-11.6235, -34.1226, 10},
    {-11.6286, -31.0672, 10},
    {-11.6333, -28.1561, 10},
    {-11.6376, -25.389, 10},
    {-11.6414, -22.7657, 10},
    {-11.6447, -20.286, 10},
    {-11.6477, -17.9499, 10},
    {-11.6504, -15.7571, 10},
    {-11.6526, -13.7074, 10},
    {-11.6546, -11.8009, 10},
    {-11.6563, -10.0374, 10},
    {-11.6577, -8.41682, 10},
    {-11.6588, -6.93907, 10},
    {-11.6598, -5.60412, 10},
    {-11.6605, -4.41192, 10},
    {-11.6611, -3.36242, 10},
    {-11.6615, -2.45561, 10},
    {-11.6618, -1.69145, 10},
    {-11.6619, -1.06993, 10},
    {-11.662, -0.59105, 10},
    {-11.6621, -0.254794, 10},
    {-11.6621, -0.0611609, 10},
    {-11.6621, -0, 10}};

/* ----------------------------------------------------*/

int kRightMotionProfileSz = 279;

double kRightMotionProfile[279][3] = {
    {-1.08739e-05, -0.130487, 10},
    {-2.88654e-05, -0.107949, 10},
    {-0.000126731, -0.587193, 10},
    {-0.000300714, -1.0439, 10},
    {-0.000572562, -1.63109, 10},
    {-0.000964024, -2.34877, 10},
    {-0.00149685, -3.19694, 10},
    {-0.00219278, -4.17559, 10},
    {-0.00307357, -5.28473, 10},
    {-0.00416096, -6.52436, 10},
    {-0.00547671, -7.89448, 10},
    {-0.00704256, -9.39508, 10},
    {-0.00888025, -11.0262, 10},
    {-0.0110115, -12.7878, 10},
    {-0.0134582, -14.6798, 10},
    {-0.0162419, -16.7024, 10},
    {-0.0193845, -18.8554, 10},
    {-0.0229076, -21.1389, 10},
    {-0.0268331, -23.553, 10},
    {-0.0311827, -26.0975, 10},
    {-0.0359781, -28.7724, 10},
    {-0.0412411, -31.5779, 10},
    {-0.0469934, -34.5139, 10},
    {-0.0532568, -37.5803, 10},
    {-0.060053, -40.7773, 10},
    {-0.0674038, -44.1047, 10},
    {-0.0753309, -47.5626, 10},
    {-0.0838561, -51.151, 10},
    {-0.0930011, -54.8699, 10},
    {-0.102788, -58.7193, 10},
    {-0.113237, -62.6991, 10},
    {-0.124372, -66.8095, 10},
    {-0.136214, -71.0503, 10},
    {-0.148784, -75.4216, 10},
    {-0.162105, -79.9235, 10},
    {-0.176198, -84.5558, 10},
    {-0.191084, -89.3185, 10},
    {-0.206786, -94.2118, 10},
    {-0.223325, -99.2356, 10},
    {-0.240724, -104.39, 10},
    {-0.258992, -109.609, 10},
    {-0.27813, -114.829, 10},
    {-0.298138, -120.048, 10},
    {-0.319016, -125.268, 10},
    {-0.340764, -130.487, 10},
    {-0.363382, -135.707, 10},
    {-0.386869, -140.926, 10},
    {-0.411227, -146.146, 10},
    {-0.436454, -151.365, 10},
    {-0.462552, -156.585, 10},
    {-0.489519, -161.804, 10},
    {-0.517357, -167.024, 10},
    {-0.546064, -172.243, 10},
    {-0.575641, -177.463, 10},
    {-0.606088, -182.682, 10},
    {-0.637405, -187.902, 10},
    {-0.669592, -193.121, 10},
    {-0.702649, -198.341, 10},
    {-0.736575, -203.56, 10},
    {-0.771372, -208.78, 10},
    {-0.807038, -213.999, 10},
    {-0.843575, -219.219, 10},
    {-0.880981, -224.438, 10},
    {-0.919257, -229.658, 10},
    {-0.958404, -234.877, 10},
    {-0.99842, -240.097, 10},
    {-1.03931, -245.316, 10},
    {-1.08106, -250.536, 10},
    {-1.12369, -255.755, 10},
    {-1.16717, -260.909, 10},
    {-1.21149, -265.933, 10},
    {-1.25663, -270.826, 10},
    {-1.30256, -275.589, 10},
    {-1.34927, -280.221, 10},
    {-1.39672, -284.723, 10},
    {-1.4449, -289.095, 10},
    {-1.49379, -293.335, 10},
    {-1.54337, -297.446, 10},
    {-1.5936, -301.426, 10},
    {-1.64448, -305.275, 10},
    {-1.69598, -308.994, 10},
    {-1.74808, -312.582, 10},
    {-1.80075, -316.04, 10},
    {-1.85398, -319.368, 10},
    {-1.90774, -322.565, 10},
    {-1.96201, -325.631, 10},
    {-2.01678, -328.567, 10},
    {-2.072, -331.372, 10},
    {-2.12768, -334.047, 10},
    {-2.18378, -336.592, 10},
    {-2.24028, -339.006, 10},
    {-2.29716, -341.289, 10},
    {-2.3544, -343.443, 10},
    {-2.41198, -345.465, 10},
    {-2.46987, -347.357, 10},
    {-2.52806, -349.119, 10},
    {-2.58652, -350.75, 10},
    {-2.64522, -352.25, 10},
    {-2.70416, -353.621, 10},
    {-2.7633, -354.86, 10},
    {-2.82263, -355.969, 10},
    {-2.88212, -356.948, 10},
    {-2.94176, -357.796, 10},
    {-3.00151, -358.514, 10},
    {-3.06136, -359.101, 10},
    {-3.12128, -359.558, 10},
    {-3.18127, -359.884, 10},
    {-3.24128, -360.08, 10},
    {-3.3013, -360.145, 10},
    {-3.36133, -360.145, 10},
    {-3.42135, -360.145, 10},
    {-3.48138, -360.145, 10},
    {-3.5414, -360.145, 10},
    {-3.60142, -360.145, 10},
    {-3.65609, -327.981, 10},
    {-3.7025, -278.463, 10},
    {-3.74872, -277.318, 10},
    {-3.79475, -276.175, 10},
    {-3.84059, -275.036, 10},
    {-3.88624, -273.902, 10},
    {-3.9317, -272.775, 10},
    {-3.97697, -271.658, 10},
    {-4.02207, -270.552, 10},
    {-4.06698, -269.459, 10},
    {-4.11171, -268.382, 10},
    {-4.15626, -267.322, 10},
    {-4.20064, -266.283, 10},
    {-4.24485, -265.266, 10},
    {-4.2889, -264.274, 10},
    {-4.33278, -263.31, 10},
    {-4.37651, -262.375, 10},
    {-4.42009, -261.473, 10},
    {-4.46352, -260.605, 10},
    {-4.50682, -259.775, 10},
    {-4.54998, -258.984, 10},
    {-4.59302, -258.236, 10},
    {-4.63595, -257.532, 10},
    {-4.67876, -256.875, 10},
    {-4.72147, -256.267, 10},
    {-4.76409, -255.71, 10},
    {-4.80662, -255.206, 10},
    {-4.84908, -254.757, 10},
    {-4.89148, -254.365, 10},
    {-4.93381, -254.031, 10},
    {-4.97611, -253.757, 10},
    {-5.01836, -253.543, 10},
    {-5.0606, -253.391, 10},
    {-5.10281, -253.302, 10},
    {-5.14503, -253.275, 10},
    {-5.18724, -253.312, 10},
    {-5.22948, -253.413, 10},
    {-5.27174, -253.577, 10},
    {-5.31404, -253.803, 10},
    {-5.35639, -254.093, 10},
    {-5.3988, -254.444, 10},
    {-5.44128, -254.856, 10},
    {-5.48383, -255.327, 10},
    {-5.52647, -255.857, 10},
    {-5.56921, -256.444, 10},
    {-5.61206, -257.085, 10},
    {-5.65502, -257.78, 10},
    {-5.69811, -258.526, 10},
    {-5.74133, -259.321, 10},
    {-5.78469, -260.163, 10},
    {-5.8282, -261.05, 10},
    {-5.87186, -261.979, 10},
    {-5.91569, -262.948, 10},
    {-5.95968, -263.954, 10},
    {-6.00385, -264.995, 10},
    {-6.04819, -266.061, 10},
    {-6.09271, -267.102, 10},
    {-6.13739, -268.071, 10},
    {-6.18221, -268.966, 10},
    {-6.22718, -269.781, 10},
    {-6.27226, -270.513, 10},
    {-6.31746, -271.157, 10},
    {-6.36274, -271.709, 10},
    {-6.4081, -272.165, 10},
    {-6.45352, -272.521, 10},
    {-6.49898, -272.773, 10},
    {-6.54447, -272.918, 10},
    {-6.58996, -272.951, 10},
    {-6.63544, -272.87, 10},
    {-6.68089, -272.671, 10},
    {-6.72628, -272.351, 10},
    {-6.7716, -271.907, 10},
    {-6.81682, -271.336, 10},
    {-6.86192, -270.636, 10},
    {-6.90689, -269.803, 10},
    {-6.9517, -268.837, 10},
    {-6.99632, -267.735, 10},
    {-7.04074, -266.494, 10},
    {-7.08492, -265.114, 10},
    {-7.12885, -263.592, 10},
    {-7.17251, -261.928, 10},
    {-7.21586, -260.119, 10},
    {-7.25889, -258.165, 10},
    {-7.30157, -256.065, 10},
    {-7.34387, -253.817, 10},
    {-7.38577, -251.422, 10},
    {-7.42725, -248.877, 10},
    {-7.46828, -246.184, 10},
    {-7.50884, -243.341, 10},
    {-7.5489, -240.348, 10},
    {-7.58843, -237.205, 10},
    {-7.62742, -233.911, 10},
    {-7.66583, -230.467, 10},
    {-7.70364, -226.872, 10},
    {-7.74083, -223.127, 10},
    {-7.77737, -219.239, 10},
    {-7.81324, -215.266, 10},
    {-7.84845, -211.256, 10},
    {-7.88299, -207.21, 10},
    {-7.91684, -203.131, 10},
    {-7.95001, -199.018, 10},
    {-7.98249, -194.874, 10},
    {-8.01428, -190.699, 10},
    {-8.04536, -186.495, 10},
    {-8.07574, -182.262, 10},
    {-8.1054, -178.002, 10},
    {-8.13436, -173.716, 10},
    {-8.16259, -169.404, 10},
    {-8.1901, -165.068, 10},
    {-8.21689, -160.709, 10},
    {-8.24294, -156.327, 10},
    {-8.26826, -151.924, 10},
    {-8.29284, -147.5, 10},
    {-8.31669, -143.056, 10},
    {-8.33979, -138.593, 10},
    {-8.36214, -134.112, 10},
    {-8.38374, -129.614, 10},
    {-8.40459, -125.099, 10},
    {-8.42468, -120.568, 10},
    {-8.44402, -116.022, 10},
    {-8.4626, -111.462, 10},
    {-8.48041, -106.888, 10},
    {-8.49746, -102.3, 10},
    {-8.51375, -97.701, 10},
    {-8.52926, -93.0983, 10},
    {-8.54402, -88.5515, 10},
    {-8.55804, -84.1118, 10},
    {-8.57134, -79.7802, 10},
    {-8.58393, -75.5574, 10},
    {-8.59584, -71.4444, 10},
    {-8.60708, -67.4417, 10},
    {-8.61767, -63.5502, 10},
    {-8.62763, -59.7704, 10},
    {-8.63698, -56.1031, 10},
    {-8.64574, -52.5486, 10},
    {-8.65392, -49.1076, 10},
    {-8.66155, -45.7806, 10},
    {-8.66865, -42.568, 10},
    {-8.67523, -39.4702, 10},
    {-8.68131, -36.4876, 10},
    {-8.68691, -33.6206, 10},
    {-8.69206, -30.8695, 10},
    {-8.69676, -28.2346, 10},
    {-8.70105, -25.7162, 10},
    {-8.70493, -23.3145, 10},
    {-8.70844, -21.0298, 10},
    {-8.71158, -18.8621, 10},
    {-8.71439, -16.8119, 10},
    {-8.71686, -14.8791, 10},
    {-8.71904, -13.064, 10},
    {-8.72094, -11.3666, 10},
    {-8.72257, -9.78709, 10},
    {-8.72396, -8.32557, 10},
    {-8.72512, -6.98211, 10},
    {-8.72608, -5.75677, 10},
    {-8.72685, -4.64961, 10},
    {-8.72746, -3.66067, 10},
    {-8.72793, -2.79001, 10},
    {-8.72827, -2.03763, 10},
    {-8.7285, -1.40358, 10},
    {-8.72865, -0.887853, 10},
    {-8.72873, -0.490471, 10},
    {-8.72877, -0.211436, 10},
    {-8.72878, -0.0507535, 10},
    {-8.72878, -0, 10}};


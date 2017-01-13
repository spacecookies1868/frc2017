#include <Auto/Modes/TestMode.h>

TestMode::TestMode(DriveController *driveController) {
	int POINT_LENGTH = 3;
	Waypoint *points = (Waypoint*)malloc(sizeof(Waypoint) * POINT_LENGTH);
	Waypoint p1 = { -4, -1, d2r(45) };      // Waypoint @ x=-4, y=-1, exit angle=45 degrees
	Waypoint p2 = { -1, 2, 0 };             // Waypoint @ x=-1, y= 2, exit angle= 0 radians
	Waypoint p3 = {  2, 4, 0 };             // Waypoint @ x= 2, y= 4, exit angle= 0 radians
	points[0] = p1;
	points[1] = p2;
	points[2] = p3;

	testPath = new PathCommand(driveController, points);
}

void TestMode::Init() {
	testPath->Init();
}

void TestMode::Update(double currTimeSec, double deltaTimeSec) {
	testPath->Update(currTimeSec, deltaTimeSec);
}

bool TestMode::IsDone() {
	return testPath->IsDone();
}

TestMode::~TestMode() {

}

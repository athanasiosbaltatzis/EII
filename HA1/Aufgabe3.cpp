#include <iostream>
#include <cmath>

float round(float unround){
    return std::ceil(unround * 100.0) / 100.0;
}

float norm(float a, float b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

float calculateDistance(float height, float parallelDistance)
{
    if (height < 0 || parallelDistance < 0){
        return -1;
    }

    float unround_result =
        height
        + parallelDistance
        + norm(height, parallelDistance);

    return round(unround_result);
}

int main()
{
    float height;
    float parallelDistance;

    std::cout << "Geben Sie die Höhe ein: ";
    std::cin >> height;
    std::cout << "Geben Sie die parallele Strecke ein: ";
    std::cin >> parallelDistance;

    if (height < 0 || parallelDistance < 0){
        std::cout << "Sowohl die parallel zur Erde geflogene Strecke als auch die Höhe müssen größer oder gleich 0 sein.\n";
        return -1;
    }

    std::cout
        << "\nDie gesamte Strecke ist "
        << calculateDistance(height, parallelDistance)
        << " km lang. Davon legt die Drohne "
        << round(norm(height, parallelDistance))
        << " km auf dem Rückweg zurück.\n";

    return 0;
}

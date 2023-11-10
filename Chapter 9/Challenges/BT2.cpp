#include <iostream>
#include <iomanip>

// Function to dynamically allocate an array and input test scores
int* inputTestScores(int& numScores) {
    std::cout << "Enter the number of test scores: ";
    std::cin >> numScores;

    // Validate input
    while (numScores <= 0) {
        std::cout << "Please enter a valid number of test scores (greater than 0): ";
        std::cin >> numScores;
    }

    // Dynamically allocate an array
    int* scores = new int[numScores];

    // Input test scores
    std::cout << "Enter the test scores:\n";
    for (int i = 0; i < numScores; ++i) {
        std::cout << "Score " << i + 1 << ": ";
        std::cin >> scores[i];

        // Validate input
        while (scores[i] < 0) {
            std::cout << "Please enter a valid test score (greater than or equal to 0): ";
            std::cin >> scores[i];
        }
    }

    return scores;
}

// Function to calculate the average of test scores
double calculateAverage(const int* scores, int numScores) {
    if (numScores == 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < numScores; ++i) {
        sum += scores[i];
    }

    return static_cast<double>(sum) / numScores;
}

// Function to sort test scores in ascending order
void sortTestScores(int* scores, int numScores) {
    for (int i = 0; i < numScores - 1; ++i) {
        for (int j = 0; j < numScores - i - 1; ++j) {
            if (scores[j] > scores[j + 1]) {
                // Swap scores[j] and scores[j + 1]
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numScores;
    int* testScores = inputTestScores(numScores);

    // Sort test scores
    sortTestScores(testScores, numScores);

    // Calculate and display average
    double average = calculateAverage(testScores, numScores);
    std::cout << "\nSorted Test Scores:\n";
    for (int i = 0; i < numScores; ++i) {
        std::cout << testScores[i] << " ";
    }
    std::cout << "\nAverage Test Score: " << std::fixed << std::setprecision(2) << average << "\n";

    // Deallocate dynamically allocated memory
    delete[] testScores;

    return 0;
}

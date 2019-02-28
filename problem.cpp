#include <bits/stdc++.h>
#include <signal.h>
typedef long long ll;

using namespace std;
// #include <
bool writeSolution = false;
int id = -1;
int score = 0;
char *file_path;
char *output_path;
void print_solution(FILE *out);
void sol_requested(int signal) {
    writeSolution = true;
}

void write_solution_force() {
    stringstream ss;
    ss << output_path;
    ss << setw(15) << setfill('0') << score;
    ss << "_id" << id << ".txt";
    FILE *output = fopen(ss.str().c_str(), "w");
    print_solution(output);
    fclose(output);
}

__attribute__((always_inline))
inline void write_solution(bool force = false) {
    if (writeSolution || force) {
        writeSolution = false;
        write_solution_force();
    }
}

//////////////////////// END TEMPLATE ////////////////////////

ll test = 0;

void read_input(FILE *in) {
    fscanf(in, "%lld", &test);
}

void print_solution(FILE *out) {
    // Write sol
    fprintf(out, "%lld\n", test);
}

int main(int argc, char* argv[])
{
    if (argc > 3) {
        id = atoi(argv[3]);
        if (id == 0 && argv[3][0] != '0') id = -1;
    }
    if (argc < 3) {
        cout << "Input or output files missing" << endl;
        return 1;
    }
    else {
        file_path = argv[1];
        output_path = argv[2];
    }
    signal(SIGUSR1, sol_requested);
    FILE *input = fopen(file_path, "r");
    read_input(input);
    fclose(input);


    while (true) {
        test++;
        score = test;
        write_solution();
    }


    return 0;
}

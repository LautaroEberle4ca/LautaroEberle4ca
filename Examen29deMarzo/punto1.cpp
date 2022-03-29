using namespace std;
int main() {

    bool a = true;
    bool b = false;
    int c = 89;
    int d = 0;
    int e = 12;
    bool f = c == 0;
    f = c > 12; // TRUE
    f = c > 89; // FALSE
    f = c >= 89; // TRUE
    f = f && e == 5; // FALSE
    f = !a || d != 0; // FALSE
    f = d == 0; // TRUE 
    f = d != 0; // FALSE
    f = !b && e > 0; // TRUE
    c++;
    f = c == 90; // TRUE
    c++;
    d--;
    f = c > 90 && d < 0; // FALSE
    f = b && !f; // FALSE
    a = !f && d > 0; // FALSE
    e++;
    b = e == 12 || e == 13; // TRUE
    a = (true && !false) || (false || false); // TRUE
    a = (d > 0 && d < 100) || (c == 89); // TRUE
    f = !(true || false); // FALSE
  








    return 0;
}

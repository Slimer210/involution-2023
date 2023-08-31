#include <bits/stdc++.h>

using namespace std;

typedef chrono::system_clock Clock;

int chopTheTree() {
    float numberOfTrees;
    cin >> numberOfTrees;
    if (numberOfTrees <= 0 or floor(numberOfTrees) != numberOfTrees) {
        cout << "You must specify a positive integer number for the number of trees!" << endl;
        return 0;
    }

    map<string, float> treeTypesMap;

    treeTypesMap["American Beech"] = 6;
    treeTypesMap["Basswood"] = 3;
    treeTypesMap["Common Horsechestnut"] = 8;
    treeTypesMap["Dogwood"] = 8;
    treeTypesMap["European White Birch"] = 5;
    treeTypesMap["White Fir"] = 7.5;

    for (int i = 0; i < numberOfTrees; i++) {
        float circumference;
        string treeType;

        cin >> circumference;
        if (circumference <= 0.0) {
            cout << "The circumference for " << treeType << " must be greater than 0!" << endl;
            continue;
        }

        getline(cin >> ws, treeType);
        if (not treeTypesMap.count(treeType)) {
            cout << "Species entered is not available!" << endl;
            continue;
        }

        float DBH = circumference / 3.141592;
        float treeAge = DBH * treeTypesMap[treeType];

        cout << treeType << " : " << fixed << setprecision(1) << circumference << " : " << fixed << setprecision(1) << treeAge << endl;
    }

    return 0;
}

bool charNeedRemove(char c) {
    return not isalnum(c) and c != '\'';
}

vector<string> splitString(string str, string delimiter = " ") {
    vector<string> words;
    int start = 0;
    int end = str.find(delimiter);
    while (end != -1) {
        words.push_back(str.substr(start, end - start));
        start = end + delimiter.size();
        end = str.find(delimiter, start);
    }
    words.push_back(str.substr(start, end - start));
    return words;
}

void findVocabulary() {

    string paragraph;
    getline(cin >> ws, paragraph);

    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::toupper);

    vector<string> splittedString = splitString(paragraph);

    for (int i = 0; i < splittedString.size(); i++) {
        splittedString[i].erase(remove_if(splittedString[i].begin(), splittedString[i].end(), [](char c)
                                               { return not isalnum(c) and c != '\''; }),
                                splittedString[i].end());
    }

    sort(splittedString.begin(), splittedString.end());
    splittedString.erase(unique(splittedString.begin(), splittedString.end()), splittedString.end());

    cout << splittedString.size() << endl;
    for (int i = 0; i < splittedString.size(); i++) {
        cout << splittedString[i] << endl;
    }

    return;
}

array<int, 2> longestContinuousSTR(string DNA, string STR) {
    int occurence = DNA.find(STR, 0);
    int max_count = 0;
    int count = 0;
    int STR_len = STR.length();

    while (occurence != -1) {
        int next_occurence = DNA.find(STR, occurence + 1);
        if (next_occurence == occurence + STR_len) {
            count++;
        } else {
            max_count = max(max_count, count);
            count = 0;
        }
        if (next_occurence == -1) break;
        occurence = next_occurence;
    }

    return {occurence - max_count * STR_len, (max_count + 1) * STR_len};
}

void DNAMatching() {
    string STR, crimeScene;
    int suspect_count = 4;
    string suspect[suspect_count];
    ;

    cin >> STR;
    cin >> crimeScene;
    for (int i = 0; i < suspect_count; i++) {
        cout << "Please enter DNA of suspect " << i << " : ";
        cin >> suspect[i];
    }

    array<int, 2> longestSTRInCrimeScene = longestContinuousSTR(crimeScene, STR);
    string longestSTR = crimeScene.substr(longestSTRInCrimeScene[0], longestSTRInCrimeScene[1]);

    for (int i = 0; i < suspect_count; i++) {
        if (suspect[i].substr(longestSTRInCrimeScene[0], longestSTRInCrimeScene[1]) == longestSTR) {
            cout << i + 1 << endl << longestSTRInCrimeScene[1] / STR.length() << endl;
            return;
        }
    }
    cout << 0 << endl << 0 << endl;
}

void twoOPT() {
    int changeCount;
    cin >> changeCount;

    string route = "abcdefgha";

    for (int i = 0; i < changeCount; i++) {
        string swap;
        cin >> swap;

        int first = route.find(swap[0]);
        int second = route.find(swap[1]);

        int start = min(first, second);
        int end = max(first, second);

        string result = route;
        for (int j = 0; j <= end - start; j++) {
            result[start + j] = route[end - j];
        }
        route = result;
    }

    cout << route << endl;
    return;
}

void arrangeIC() {
    string ICString;
    cin >> ICString;
    vector<string> ICList = splitString(ICString, ";");

    auto now = Clock::now();
    time_t now_c = Clock::to_time_t(now);
    struct tm *ntm = localtime(&now_c);

    vector<map<string, string>> ICInfoList;
    for (int i = 0; i < ICList.size(); i++) {
        string birthDate = splitString(ICList[i], "-")[0];
        map<string, string> ICInfo;

        string genderCode(1, ICList[i].back());
        int genderCodeNum = stoi(genderCode);
        string birthYear = birthDate.substr(0, 2);
        birthYear = (stoi(birthYear) > ntm->tm_year - 100 ? "19" : "20") + birthYear;

        ICInfo["original"] = ICList[i];
        ICInfo["birthDate"] = birthDate;
        ICInfo["birthYear"] = birthYear;
        ICInfo["birthMonth"] = birthDate.substr(2, 2);
        ICInfo["birthDay"] = birthDate.substr(4, 2);
        ICInfo["gender"] = genderCodeNum % 2 ? "1" : "0";

        ICInfoList.push_back(ICInfo);
    }

    vector<string> sortPriorities;

    for (int i = 0; i < 3; i++) {
        string input;
        cout << "Please enter sort priority #" << i << " : ";
        getline(cin >> ws, input);
        sortPriorities.push_back(input);
    }

    sort(ICInfoList.begin(), ICInfoList.end(), [sortPriorities](map<string, string> a, map<string, string> b)
              {
        for (int s = 0; s < sortPriorities.size(); s++) {
            if (sortPriorities[s].find("Gender") != -1) {
                if (sortPriorities[s].find("Female") != -1) {
                    if (a["gender"] < b["gender"]) return true;
                    if (a["gender"] > b["gender"]) return false;
                } else {
                    if (a["gender"] < b["gender"]) return false;
                    if (a["gender"] > b["gender"]) return true;
                }
            }

            if (sortPriorities[s].rfind("Birth ", 0) == 0) {
                if (a["birth"+splitString(sortPriorities[s])[1]] < b["birth"+splitString(sortPriorities[s])[1]]) return true;
                if (a["birth"+splitString(sortPriorities[s])[1]] > b["birth"+splitString(sortPriorities[s])[1]]) return false;
            }

            if (sortPriorities[s] == "Birthdate") {
                if (a["birthYear"]+a["birthMonth"]+a["birthDay"] < b["birthYear"]+b["birthMonth"]+b["birthDay"]) return true;
                if (a["birthYear"]+a["birthMonth"]+a["birthDay"] > b["birthYear"]+b["birthMonth"]+b["birthDay"]) return false;
            }
        }
        return false; });

    for (int i = 0; i < ICInfoList.size(); i++) {
        cout << ICInfoList[i]["original"] << " " << ICInfoList[i]["birthDay"] << " " << ICInfoList[i]["birthMonth"] << " " << ICInfoList[i]["birthYear"] << " " << (ICInfoList[i]["gender"] == "1" ? "Male" : "Female") << endl;
    }
}

void mineSweeper() {
    string input1;
    cout << "Please enter the row count, column count and mine count of your board: ";
    getline(cin >> ws, input1);

    vector<string> splittedInput1 = splitString(input1);
    int rows = stoi(splittedInput1[0]);
    int cols = stoi(splittedInput1[1]);
    int mineCount = stoi(splittedInput1[2]);

    char mine[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            mine[i][j] = ' ';
        }
    }

    for (int i = 0; i < mineCount; i++) {
        string mineCoorsInput;
        cout << "Please enter the x and y coordinate of mine #" << i << " : ";
        getline(cin >> ws, mineCoorsInput);

        vector<string> mineCoors = splitString(mineCoorsInput);
        int mineRow = stoi(mineCoors[0]);
        int mineCol = stoi(mineCoors[1]);

        mine[mineRow][mineCol] = '*';
    }

    int neighbour[8][2] = {
        {-1, -1},
        {-1, 0},
        {-1, 1},
        {0, -1},
        {0, 1},
        {1, -1},
        {1, 0},
        {1, 1}};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mine[i][j] != '*') {
                int neighbourSUSCount = 0;

                for (int n = 0; n < 8; n++) {
                    if (i + neighbour[n][0] >= 0 and i + neighbour[n][0] < rows) {
                        if (j + neighbour[n][1] >= 0 and j + neighbour[n][1] < cols) {
                            if (mine[i + neighbour[n][0]][j + neighbour[n][1]] == '*') {
                                neighbourSUSCount++;
                            }
                        }
                    }
                }
                mine[i][j] = neighbourSUSCount + '0';
            }

            cout << mine[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

string round2(double x) {
    string n = to_string(x);
    string wtd = n.substr(0, n.find('.') + 4);
    int l = wtd.back() - '0';
    wtd = wtd.substr(0, wtd.length() - 1);
    if (l >= 5)
    {
        wtd[wtd.length() - 1] = to_string(wtd.back() - '0' + 1)[0];
    }
    return wtd;
}

void linearInterpolation() {
    int count;
    cin >> count;

    vector<string> input;
    for (int i = 0; i < count; i++) {
        string inp;
        cin >> inp;
        input.push_back(inp);
    }

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == "#") {
            int x0, x1;
            double y0, y1;

            for (int f = i - 1; f >= 0; f--) {
                if (input[f] != "#") {
                    x0 = f + 1;
                    y0 = stod(input[f]);
                    break;
                }
            }

            for (int f = i + 1; f < input.size(); f++) {
                if (input[f] != "#") {
                    x1 = f + 1;
                    y1 = stod(input[f]);
                    break;
                }
            }

            float ans = y0 + ((y1 - y0) / (x1 - x0)) * (i + 1 - x0);
            cout << round2(ans) << endl;
        }
    }
}

float largest(float arr[], int n) {
    return *max_element(arr, arr+n);
}

int findDishes() {
    float price[8] = {
        10,
        78,
        50,
        20,
        40,
        5,
        67,
        35,
    };

    int lowestPrice = 0;
    int li, lj, lk;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                if (i != j and j != k and i != k) {
                    int totalPrice = price[i] + price[j] + price[k];
                    if ((totalPrice >= 80 and totalPrice < lowestPrice) or lowestPrice == 0) {
                        lowestPrice = totalPrice;
                        li = i;
                        lj = j;
                        lk = k;
                    }
                }
            }
        }
    }

    price[li] = 0;
    price[lj] = 0;
    price[lk] = 0;
    
    int maxPrice = largest(price, 8);
    for (int i = 0; i < 8; i++) {
        if (price[i] == maxPrice) {
            price[i] = 0;
            break;
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << price[i] << " ";
    }
}

int main()
{
    findDishes();
}
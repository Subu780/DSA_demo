#include <bits/stdc++.h>
using namespace std;


// --- Function to demonstrate pair ---
void pairDemo() {
    cout << "\n--- Pair Demonstration ---\n";

    // Creating a pair of two integers
    pair<int, int> p = {1, 3};  // p = {1, 3}
    // Accessing first and second elements of the pair
    cout << "p.first = " << p.first << ", p.second = " << p.second << endl;
    // Output: p.first = 1, p.second = 3

    // Creating a nested pair
    pair<int, pair<int, int>> p1 = {2, {3, 4}};  // p1 = {2, {3, 4}}
    // Accessing elements of nested pair
    cout << "p1.second.first = " << p1.second.first        // Accessing inner pair's first = 3
         << ", p1.second.second = " << p1.second.second    // Accessing inner pair's second = 4
         << ", p1.first = " << p1.first << endl;           // Accessing outer pair's first = 2
    // Output: p1.second.first = 3, p1.second.second = 4, p1.first = 2

    cout << "---------------------------\n";
}


// --- Function to demonstrate vector ---
void vectorDemo() {
    cout << "\n--- Vector Demonstration ---\n";

    vector<int> v;  // Initially empty
    v.push_back(1);       // v = [1]
    v.emplace_back(2);    // v = [1, 2]
    v.push_back(3);       // v = [1, 2, 3]
    v.emplace_back(4);    // v = [1, 2, 3, 4]

    vector<int> v1(v);    // v1 = copy of v = [1, 2, 3, 4]

    vector<int>::iterator it = v.begin();  // it points to v[0]
    cout << "First element (v.begin()): " << *(it) << endl;  // 1

    it = it + 2;  // Now it points to v[2]
    cout << "Third element (v.begin() + 2): " << *(it) << endl;  // 3

    vector<int>::reverse_iterator it2 = v.rend(); // One before first in reverse
    it2--;  // Now points to last element
    cout << "Last element using rend()-1: " << *(it2) << endl;  // 4

    it2 = it2 - 2;  // Moves two positions in reverse: points to v[1]
    cout << "Third element using reverse iterator: " << *(it2) << endl;  // 2

    vector<int>::reverse_iterator it3 = v.rbegin();  // Points to v[3] = 4
    it3 = it3 + 2;  // Now points to v[1] = 2
    cout << "Third element from end using rbegin()+2: " << *(it3) << endl;

    cout << "Last element using v.back(): " << v.back() << endl;  // 4

    // Iterating
    cout << "Using normal iterator: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *(it) << " ";  // 1 2 3 4
    cout << endl;

    cout << "Using auto keyword: ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *(it) << " ";  // 1 2 3 4
    cout << endl;

    cout << "Using range-based for loop: ";
    for (auto it : v)
        cout << it << " ";     // 1 2 3 4
    cout << endl;

    // Insertion operations
    vector<int> vec;              // vec = []
    vec.insert(vec.begin(), 100);               // vec = [100]
    vec.insert(vec.begin() + 1, 2, 200);        // vec = [100, 200, 200]
    vec.insert(vec.begin() + 3, v.begin(), v.end()); // vec = [100, 200, 200, 1, 2, 3, 4]

    cout << "After insertions: ";
    for (auto it : vec) cout << it << " ";
    cout << endl;

    vec.erase(vec.begin() + 3);               // removes 1 → vec = [100, 200, 200, 2, 3, 4]
    vec.erase(vec.begin() + 3, vec.end());    // removes 2, 3, 4 → vec = [100, 200, 200]

    cout << "After erasures: ";
    for (auto it : vec) cout << it << " ";
    cout << endl;

    // Swapping vectors
    cout << "Sizes before swap: v = " << v.size() << ", vec = " << vec.size() << endl;
    // v = [1,2,3,4], vec = [100, 200, 200]
    v.swap(vec);  // v = [100, 200, 200], vec = [1,2,3,4]

    v.pop_back();  // removes last → v = [100, 200]

    cout << "v after swap & pop_back: ";
    for (auto it : v) cout << it << " ";
    cout << endl;

    v.clear();  // v = []

    cout << "v.empty() = " << v.empty() << ", vec.empty() = " << vec.empty() << endl;
    // v is empty = true, vec is not empty = false

    cout << "------------------------------\n";
}
//--- Function to demonstrate lists --- 
void listDemo() {
    cout << "\n--- List Demonstration ---\n";

    list<int> ls;  // Empty doubly linked list

    ls.push_back(10);     // ls = [10]
    ls.emplace_back(20);  // ls = [10, 20]
    ls.push_front(30);    // ls = [30, 10, 20]
    ls.emplace_front(40); // ls = [40, 30, 10, 20]

    cout << "List contents: ";
    for (auto it : ls) cout << it << " ";  // 40 30 10 20
    cout << endl;

    cout << "-----------------------------\n";
}

// --- Function to demonstrate deque ---
void Dequedemo() {
    cout << "\n--- Deque Demonstration ---\n";

    deque<int> dq;  // Empty double-ended queue

    dq.push_back(100);     // Adds 100 at the back → dq = [100]
    dq.push_front(200);    // Adds 200 at the front → dq = [200, 100]
    dq.emplace_back(300);  // Adds 300 at the back (like push_back but more efficient) → dq = [200, 100, 300]
    dq.emplace_front(400); // Adds 400 at the front → dq = [400, 200, 100, 300]

    cout << "Deque contents: ";
    for (auto it : dq) cout << it << " ";  // Output: 400 200 100 300
    cout << endl;

    cout << "-----------------------------\n";
}


// --- Function to demonstrate stack ---
void Stackdemo() {
    cout << "\n--- Stack Demonstration ---\n";

    stack<int> st;  // Empty stack

    st.push(1);  // st = [1]
    st.push(2);  // st = [2, 1]
    st.push(3);  // st = [3, 2, 1]
    st.push(4);  // st = [4, 3, 2, 1]
    st.push(5);  // st = [5, 4, 3, 2, 1]
    st.push(5);  // st = [5, 5, 4, 3, 2, 1]
    st.pop();    // Removes top 5 → st = [1, 2, 3, 4, 5]

    // Top element now is 5 (last pushed element still remaining)
    cout << "Top of stack: " << st.top() << endl;       // Output: 5
    cout << "Stack size: " << st.size() << endl;        // Output: 5
    cout << "Is stack empty?: " << st.empty() << endl;  // Output: 0 (false)

    // Copy the current stack to another to display contents
    stack<int> stswap(st);

    cout << "Stack contents (top to bottom): ";
    while (!stswap.empty()) {
        cout << stswap.top() << " ";  // Print top element
        stswap.pop();                 // Remove top element
    }
    // Output: 5 4 3 2 1
    cout << endl;

    cout << "-----------------------------\n";
}


// --- Function to demonstrate queue ---
void queueDemo() {
    cout << "\n--- Queue Demonstration ---\n";

    queue<int> q;

    q.push(1);  // Queue: [1]
    q.push(2);  // Queue: [1, 2]
    q.push(3);  // Queue: [1, 2, 3]
    q.push(4);  // Queue: [1, 2, 3, 4]
    q.push(4);  // Queue: [1, 2, 3, 4, 4]

    q.back() += 5;  // Last element becomes 4 + 5 = 9 → Queue: [1, 2, 3, 4, 9]

    cout << "Front of queue: " << q.front() << endl;  // 1
    cout << "Back of queue: " << q.back() << endl;    // 9

    q.pop();  // Removes front element (1) → Queue: [2, 3, 4, 9]

    // Copy remaining queue to print contents
    queue<int> qtemp(q);
    cout << "Queue contents (front to back): ";
    while (!qtemp.empty()) {
        cout << qtemp.front() << " ";  // prints in order: 2 3 4 9
        qtemp.pop();
    }
    cout << endl;

    cout << "-----------------------------\n";
}

//---Priority Queue demonstration
void pqDemo() {
    cout << "\n--- Priority Queue Demonstration ---\n";

    priority_queue<int> pq;

    pq.push(2);   // pq = [2]
    pq.push(1);   // pq = [2, 1]  (2 is top, because it's a max-heap)
    pq.push(5);   // pq = [5, 1, 2]  (5 bubbles to top)
    pq.push(10);  // pq = [10, 5, 2, 1] (10 becomes top)

    cout << "Top element (largest): " << pq.top() << endl;  // 10

    pq.pop();  // Removes top element (10) → pq = [5, 1, 2]

    // Copy pq to another to print contents
    priority_queue<int> pqtemp(pq);

    cout << "Remaining elements (in order of popping): ";
    while (!pqtemp.empty()) {
        cout << pqtemp.top() << " ";  // prints in order: 5 2 1 (descending)
        pqtemp.pop();
    }
    cout << endl;

    cout << "-----------------------------\n";
}

//---MinHeap Demonstartion
void minHeapDemo() {
    cout << "\n--- Min-Heap Priority Queue Demonstration ---\n";

    // Min-heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);   // pq = [5]
    pq.push(2);   // pq = [2, 5]      (2 is top because it's the smallest)
    pq.push(8);   // pq = [2, 5, 8]
    pq.push(10);  // pq = [2, 5, 8, 10]

    cout << "Top element (smallest): " << pq.top() << endl;  // 2

    pq.pop();  // Removes top (2) => pq = [5, 10, 8] (heap readjusts)

    cout << "Remaining elements (in order of popping): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";  // Will print in ascending order: 5 8 10
        pq.pop();
    }
    cout << endl;

    cout << "-----------------------------\n";
}

//---Set Demonstration
void setDemo() {
    cout << "\n--- Set Demonstration ---\n";

    set<int> st;

    // Inserting values from 1 to 7
    for (int i = 1; i <= 7; i++) st.insert(i);   // st = {1, 2, 3, 4, 5, 6, 7}

    // Duplicate insertions (ignored in set)
    st.insert(7);   // st = {1, 2, 3, 4, 5, 6, 7} (no effect)
    st.emplace(7);  // st = {1, 2, 3, 4, 5, 6, 7} (no effect)

    cout << "Set after insertions: ";
    for (auto x : st) cout << x << " ";  // Output: 1 2 3 4 5 6 7
    cout << endl;

    auto it = st.find(3);  // Finds 3 in set
    cout << "Found 3 → " << *it << endl;

    auto it8 = st.find(8);  // 8 doesn't exist
    cout << "Finding 8 gives end() = " << (it8 == st.end()) << endl;  // true (1)

    st.erase(7);  // st = {1, 2, 3, 4, 5, 6}

    cout << "After erasing 7: ";
    for (auto x : st) cout << x << " ";  // Output: 1 2 3 4 5 6
    cout << endl;

    cout << "st.count(7) = " << st.count(7)  // 0 (not present)
         << ", st.count(5) = " << st.count(5) << endl;  // 1 (present)

    st.erase(st.find(6));  // st = {1, 2, 3, 4, 5}

    auto it1 = st.find(2);  // points to 2
    auto it2 = st.find(5);  // points to 5 (not included in erase)
    st.erase(it1, it2);     // Removes [2, 3, 4] => st = {1, 5}

    cout << "After erasing range [2, 4]: ";
    for (auto x : st) cout << x << " ";  // Output: 1 5
    cout << endl;

    cout << "-----------------------------\n";
}

//---MultiSet Demonstartion
void multisetDemo() {
    cout << "\n--- Multiset Demonstration ---\n";

    multiset<int> mset;

    // Inserting 1 to 5 → mset = {1, 2, 3, 4, 5}
    for (int i = 1; i <= 5; i++) mset.insert(i);

    mset.insert(3);     // mset = {1, 2, 3, 3, 4, 5}
    mset.insert(3);     // mset = {1, 2, 3, 3, 3, 4, 5}
    mset.emplace(5);    // mset = {1, 2, 3, 3, 3, 4, 5, 5}

    cout << "Multiset after insertions: ";
    for (auto x : mset) cout << x << " ";
    // Output: 1 2 3 3 3 4 5 5
    cout << endl;

    auto it = mset.find(3);  // Finds the first 3
    cout << "Found one 3 -> " << *it << endl;
    mset.erase(it);          // Erases one 3 => mset = {1, 2, 3, 3, 4, 5, 5}

    cout << "After erasing one 3: ";
    for (auto x : mset) cout << x << " ";
    // Output: 1 2 3 3 4 5 5
    cout << endl;

    mset.erase(5);  // Removes all occurrences of 5 => mset = {1, 2, 3, 3, 4}

    cout << "After erasing all 5s: ";
    for (auto x : mset) cout << x << " ";
    // Output: 1 2 3 3 4
    cout << endl;

    cout << "mset.count(3) = " << mset.count(3) << endl;
    // Output: 2 (still two 3s)

    auto it1 = mset.find(2);  // points to 2
    auto it2 = mset.find(4);  // points to 4
    mset.erase(it1, it2);     // Erases 2, 3, 3 => mset = {1, 4}

    cout << "After erasing range [2, 3, 3]: ";
    for (auto x : mset) cout << x << " ";
    // Output: 1 4
    cout << endl;

    cout << "-----------------------------\n";
}

//---Unordered Set demonstration---
void unorderedSetDemo() {
    cout << "\n--- Unordered Set Demonstration ---\n";

    unordered_set<int> ust;

    // Inserting values from 1 to 7
    for (int i = 1; i <= 7; i++) ust.insert(i);   // ust = {1, 2, 3, 4, 5, 6, 7} (unordered)

    ust.insert(7);   // Duplicate insertion - no effect
    ust.emplace(7);  // Duplicate emplace - still no effect

    cout << "Unordered Set after insertions: ";
    for (auto x : ust) cout << x << " ";
    // Output could be in any order, e.g. 4 1 7 2 6 3 5
    cout << endl;

    auto it = ust.find(3);  // Tries to find 3
    cout << "Found 3 -> " << *it << endl;

    auto notFound = ust.find(8);  // 8 doesn't exist
    cout << "Finding 8 -> Not Found = " << (notFound == ust.end()) << endl;

    ust.erase(7);  // Removes 7 => ust = {1, 2, 3, 4, 5, 6}
    cout << "After erasing 7: ";
    for (auto x : ust) cout << x << " ";
    cout << endl;

    cout << "ust.count(7) = " << ust.count(7) << endl;  // Should be 0

    // Now erase 6 using iterator
    ust.erase(ust.find(6));  // Removes 6 => ust = {1, 2, 3, 4, 5}
    cout << "ust.count(6) = " << ust.count(6) << endl;  // Should be 0

    // Erasing 2, 3, 4
    ust.erase(2);  // ust = {1, 3, 4, 5}
    ust.erase(3);  // ust = {1, 4, 5}
    ust.erase(4);  // ust = {1, 5}

    cout << "After erasing 2, 3, 4 manually: ";
    for (auto x : ust) cout << x << " ";
    // Output: 1 5 (order may vary)
    cout << endl;

    cout << "-----------------------------\n";
}
//--Map Demonstartion
void mapDemo() {
    cout << "\n--- Map Demonstration ---\n";

    map<int, int> m1;                         // m1: empty
    map<int, pair<int, int>> m2;              // m2: empty
    map<pair<int, int>, int> m3;              // m3: empty

    // Filling maps using loop
    for (int i = 1; i <= 7; ++i) {
        m1[i] = i * 10;                        // m1[i] = 10, 20, ..., 70
        // m1 = {1:10, 2:20, 3:30, ..., 7:70}

        m2.emplace(i, make_pair(i + 10, i + 20));
        // m2[i] = {i+10, i+20}
        // e.g., m2[1] = {11, 21}, m2[2] = {12, 22}, ...

        m3[make_pair(i, i + 1)] = i * 100;
        // m3[{1,2}] = 100, m3[{2,3}] = 200, ..., m3[{7,8}] = 700
    }



    // Printing m1 (map<int, int>)
    cout << "\nm1 (int, int):\n";
    for (map<int, int>::iterator it = m1.begin(); it != m1.end(); ++it)
        cout << it->first << " => " << it->second << endl;

    // Printing m2 (map<int, pair<int, int>>)
    cout << "\nm2 (int, pair<int, int>):\n";
    for (map<int, pair<int, int>>::iterator it = m2.begin(); it != m2.end(); ++it)
        cout << it->first << " => {" << it->second.first << ", " << it->second.second << "}\n";

    // Printing m3 (map<pair<int, int>, int>)
    cout << "\nm3 (pair<int, int>, int):\n";
    for (map<pair<int, int>, int>::iterator it = m3.begin(); it != m3.end(); ++it)
        cout << "{" << it->first.first << ", " << it->first.second << "} => " << it->second << endl;

    cout << "-----------------------------\n";
}


//MULTIMAP AND UNORDERED MAP ALSO EXIST LIKE SET.

int main() {
    int choice;
    cout << "Choose which function to run:\n";
    cout << "1. Pair Demonstration\n";
    cout << "2. Vector Demonstration\n";
    cout << "3. List Demonstration\n";
    cout << "4. Deque Demonstration\n";
    cout << "5. Stack Demonstration\n";
    cout << "6. Queue Demonstration\n";
    cout << "7. Priority Queue Demonstration\n";
    cout << "8. Minimum Heap Demonstration\n";
    cout << "9. Set Demonstration\n";
    cout << "10. Multiset Demonstration\n";
    cout << "11. UnorderedSet Demonstration\n";
    cout << "12. Map Demonstration\n";
    cout << "Enter your choice (1-12): ";
    cin >> choice;

    switch (choice) {
        case 1: pairDemo(); break;
        case 2: vectorDemo(); break;
        case 3: listDemo(); break;
        case 4: Dequedemo(); break;
        case 5: Stackdemo(); break;
        case 6: queueDemo(); break;
        case 7: pqDemo(); break;
        case 8: minHeapDemo(); break;
        case 9: setDemo(); break;
        case 10: multisetDemo(); break;
        case 11: unorderedSetDemo(); break;
        case 12: mapDemo(); break;
        default: cout << "Invalid choice! Please enter a number from 1 to 12.\n";
    }

    return 0;
}

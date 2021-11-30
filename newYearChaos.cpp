// It is New Year's Day and people are in line for the Wonderland rollercoaster ride. Each person wears a sticker indicating 
// their initial position in the queue from 1 to n. Any person can bribe the person directly in front of them to swap positions, 
// but they still wear their original sticker. One person can bribe at most two others.
// Determine the minimum number of bribes that took place to get to a given queue order. Print the number of bribes, or, if 
// anyone has bribed more than two people, print Too chaotic.

//   Example
//   q = [1,2,3,5,4,6,7,8]
//   If person 5 bribes person 4, the queue will look like this: 1,2,3,5,4,6,7,8. Only 1 bribe is required. Print 1.
//   q = [4,1,2,3]
//   Person 4 had to bribe 3 people to get to the current position. Print "Too chaotic".



void minimumBribes(vector<int> q) {
    
    int answer = 0;
    set<int> Set;
    int regulator = 1;
    int largest = 0;
    int running_sum = 0;
    for(unsigned int i=0; i<q.size(); i++) {
        if (regulator < q[i]) {
            for (unsigned int j = largest+1; j < q[i]; j++) {
                Set.insert(j);
            }
            running_sum += Set.size();
            if (running_sum > 2) {
                cout<<"Too chaotic"<<endl;
                return;
            } else {
                answer += running_sum;
                running_sum = 0;
            }
        } else if (regulator > q[i]) {
            Set.erase(Set.find(q[i]));
            for (set<int>::iterator itr = Set.begin(); itr != Set.end(); itr++) {
                if (q[i] > *itr) {
                    running_sum++;
                }
                if (running_sum > 2) {
                    return;
                } else {
                    answer+=running_sum;
                    running_sum = 0;
                }
            }
        } else {
            if (Set.find(q[i])!=Set.end()) {
                Set.erase(Set.find(q[i]));    
            }
            answer += Set.size();
        }
        if (i == q.size()-1) {
            if (Set.size() > 2) {
                cout<<"Too chaoticK"<<endl;
            } else {
                answer += Set.size();
            }
        } 
        if (q[i] > largest) {
            largest = q[i];
        }
        regulator++;
    }
    
    cout<<answer<<endl;
}

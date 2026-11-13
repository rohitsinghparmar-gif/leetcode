class Solution {
public:
    int secondsBetweenTimes(string st, string en) {
        int count1=((st[0]-'0')*10+(st[1]-'0'))*3600+((st[3]-'0')*10+(st[4]-'0'))*60+((st[6]-'0')*10+(st[7]-'0'));

        int count2=((en[0]-'0')*10+(en[1]-'0'))*3600+((en[3]-'0')*10+(en[4]-'0'))*60+((en[6]-'0')*10+(en[7]-'0'));
          return count2-count1;
    }
};
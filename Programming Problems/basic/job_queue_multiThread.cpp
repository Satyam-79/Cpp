#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using std::cin;
using std::cout;
using std::greater;
using std::make_pair;
using std::pair;
using std::priority_queue;
using std::queue;
using std::stack;
using std::vector;

class JobQueue
{
private:
  long long num_workers_;
  vector<long long> jobs_;
  vector<long long> time;
  vector<long long> thread;

  typedef pair<long long, long long> quePair;

  struct myComp
  {
    constexpr bool operator()(
        pair<long long, long long> const &a,
        pair<long long, long long> const &b)
        const noexcept
    {
      return a.second > b.second;
      if (a.second == b.second)
             {
                 return (a.first > b.first);
             }
             else
             {
                 return (a.second > b.second);
             }
    }
  };
  priority_queue<quePair, vector<quePair>, myComp> worker;
  priority_queue<quePair, vector<quePair>, greater<quePair>> freeWorker;

  void ReadData()
  {
    long long m;
    cin >> num_workers_ >> m;
    thread.resize(num_workers_);
    jobs_.resize(m);
    time.resize(m);
    if (m < 1 || num_workers_ < 1)
    {
      exit(0);
    }
    for (long long i = 0; i < m; ++i)
      cin >> jobs_[i];
  }

  void AssignJobs()
  {

    for (long long i = 0; i < jobs_.size(); i++)
    {
      if (worker.size() < num_workers_)
      {
        worker.push(make_pair(jobs_[i] * (-1), i * (-1)));
        time[i] = 0;
        cout << i << " " << time[i] << "\n";
      }
      else
      {
        long long temp = time[i - num_workers_];
        pair<long long, long long> pTemp = worker.top();
        worker.pop();
        long long tempTime = temp + (pTemp.first * (-1));
        time[i] = tempTime;
        cout << pTemp.second * (-1) << " " << time[i] << "\n";
        worker.push(make_pair(jobs_[i] * (-1), pTemp.second));
      }
    }
  }
  
  void fastAssignJob()
  {
    // priority_queue<quePair, vector<quePair>, myComp> worker;

    for (size_t i = 0; i < num_workers_; i++)
    {
      thread[i] = 0;
      freeWorker.push(make_pair(i, 0));
    }
    long long i = 0;
    while (i < jobs_.size())
    {
      while (!freeWorker.empty() && (i < jobs_.size()))
      {
        worker.push(make_pair(freeWorker.top().first, freeWorker.top().second + jobs_[i]));
        cout << freeWorker.top().first << " " << freeWorker.top().second << "\n";
        freeWorker.pop();
        i++;
      }

      pair<long long, long long> temp = worker.top();
      freeWorker.push(make_pair(temp.first, temp.second));
      worker.pop();
      while (worker.top().second == temp.second && !worker.empty() && (i < jobs_.size()))
      {
        freeWorker.push(make_pair(worker.top().first, worker.top().second));
        worker.pop();
      }
    }
  }

public:
  void
  Solve()
  {
    ReadData();
    // AssignJobs();
    fastAssignJob();
  }
};

int main()
{
  std::ios_base::sync_with_stdio(false);
  JobQueue job_queue;
  job_queue.Solve();

  return 0;
}

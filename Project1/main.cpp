#include <iostream>
#include <string>
#include <limits>

#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#pragma warning(disable : 4996)

#pragma region 이진트리
//
//struct Node
//{
//	Node* Top;
//	int value;
//	Node* Left;
//	Node* Right;
//	bool isVisited = false;
//};
//
//void  Solve()
//{
//
//
//
//}
//
//int main()
//{
//	int N = 0;
//
//	Node* node = nullptr;
//	Node* root = nullptr;
//	while (true)
//	{
//
//		std::cin >> N;
//		if (std::cin.eof() == 1)
//		{
//			break;
//		}
//		if (root == nullptr)
//		{
//			root = new Node();
//			root->value = N;
//			continue;
//		}
//		Node* curNode = root;
//		node = new Node();
//		node->value = N;
//		while (1)
//		{
//			int value = curNode->value;
//
//			if (value > N)
//			{
//				if (curNode->Left == nullptr)
//				{
//					curNode->Left = node;
//					node->Top = curNode;
//					break;
//				}
//				else
//				{
//					curNode = curNode->Left;
//				}
//			}
//			else
//			{
//				if (curNode->Right == nullptr)
//				{
//					curNode->Right = node;
//					node->Top = curNode;
//					break;
//				}
//				else
//				{
//					curNode = curNode->Right;
//				}
//			}
//
//		}
//
//
//
//
//	}
//	node = root;
//	while (root != nullptr)
//	{
//		if (node->Left != nullptr && node->Left->isVisited == false)
//		{
//
//			node = node->Left;
//		}
//		else if (node->Right != nullptr && node->Right->isVisited == false)
//		{
//			node = node->Right;
//		}
//		else if (node->Right == nullptr && node->Left == nullptr
//			|| node->Right == nullptr && node->Left->isVisited == true
//			|| node->Left == nullptr && node->Right->isVisited == true
//			|| node->Right->isVisited == true && node->Left->isVisited == true)
//		{
//			std::cout << node->value << '\n';
//			node->isVisited = true;
//			node = node->Top;
//			if (node == nullptr)
//				break;
//		}
//	}
//	return 0;
//}
//
//
//
#pragma endregion

#pragma region 트라이 5052
//
//struct Node
//{
//	bool finish = false;
//	Node* node[10];
//
//	Node()
//	{
//		for (int i = 0; i < 10; ++i)
//		{
//			node[i] = nullptr;
//		}
//	}
//
//	void Insert(char* ch)
//	{
//		if (*ch == '\0')
//		{
//			finish = true;
//			return;
//		}
//		if (node[*ch - '0'] == nullptr) node[*ch - '0'] = new Node();
//		node[*ch - '0']->Insert(ch + 1);
//	}
//	bool Find(char* Str)
//	{
//		if (finish)
//		{
//			if (*Str == '\0')
//				return false;
//			return true;
//		}
//
//		if (*Str == '\0')
//			return false;
//
//		int Cur = *Str - '0';
//		if (node[Cur] == nullptr) return false;
//		return node[Cur]->Find(Str + 1);
//	}
//};
//
//int main()
//{
//	int n, t;
//
//	std::cin >> t;
//	
//	std::string ret = "YES";
//	
//	for (int i = 0; i < t; ++i)
//	{
//		ret = "YES";
//		std::cin >> n;
//		std::vector<std::string> vet(n);
//		Node *node = new Node();
//		char* ch = new char[10];
//		std::string str;
//		for (int i = 0; i < n; ++i)
//		{
//			std::cin >> str;
//			std::strcpy(ch, str.c_str());
//			vet[i] = str;
//			node->Insert(ch);
//		}
//		for (int i = 0; i < n; ++i)
//		{
//			if (node->Find(std::strcpy(ch, vet[i].c_str())))
//			{
//				ret = "NO";
//				break;
//			}
//		}
//		std::cout << ret << '\n';
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region LCS 9251
//#include <iostream>
//#include <vector>
//#include <algorithm>
//int Solved(std::string s1, std::string s2)
//{
//    std::vector<std::vector<int>> dp;
//    dp.resize(s1.size() + 1, std::vector<int>(s2.size() + 1,0));
//
//    for (int i = 0; i <= s1.size(); ++i)
//    {
//        for (int j = 0; j <= s2.size(); ++j)
//        {
//            if (i == 0 || j == 0)
//            {
//                continue;
//            }
//            else if (s1[i - 1] == s2[j - 1])
//            {
//                dp[i][j] = dp[i - 1][j-1] +1;
//            }
//            else
//            {
//                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//
//    return dp[s1.size()][s2.size()];
//
//}
//
//
//
//int main() {
//    std::string s1, s2;
//    std::cin >> s1 >> s2;
//
//    std::cout << Solved(s1, s2);
//    return 0;
//}
#pragma endregion

#pragma region 1002
//#include <iostream>
//#include <cstdlib>
//
//int Solved(const int& x1, const int& x2, const int& y1, const int& y2, const int& r1, const int& r2)
//{
//	int dis = std::pow(x2 - x1,2) + std::pow(y2 - y1,2);
//	int enemyDis = std::pow(r1,2) + std::pow(r2,2);
//
//	if (dis > enemyDis)
//	{
//		return 0;
//
//	}
//	else
//	{
//		if (dis == 0)
//		{
//			if (r1 != r2)
//			{
//				return 0;
//			}
//			else
//			{
//				return -1;
//			}
//		}
//		else if (dis == enemyDis)
//		{
//			return 1;
//		}
//		return 2;
//	}
//}
//
//int main()
//{
//	int n;
//	int x1, x2, y1, y2, r1, r2;
//	std::cin >> n;
//
//	do
//	{
//		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//		std::cout << Solved(x1, x2, y1, y2, r1, r2) << '\n';
//	} while (--n);
//	
//
//	return 0;
//}
#pragma endregion

#pragma region  2457
//#include <vector>
//#include <iostream>
//#include <algorithm>
//int Solved2(std::vector<std::pair<int, int>>& dates, int max)
//{
//	std::vector<int> ret;
//	ret.reserve(max);
//
//	for (int i = 0; i < static_cast<int>(dates.size()); ++i)
//	{
//		
//		if (dates[i].first <= 301 && dates[i].second >= 1201)
//			return 1;
//
//		if (static_cast<int>(ret.size()) < 1)
//		{
//			if(dates[i].first<=301)
//				ret.push_back(i);
//		}
//		else
//		{
//			for (int j = ret.size() - 1; j >= 0; --j)
//			{
//
//				if (dates[ret[j]].second >= dates[i].first)
//				{
//					if (dates[ret[j]].second >= dates[i].second)
//					{
//						continue;
//					}
//					else
//					{
//						ret.push_back(i);
//						break;
//					}
//				}
//
//			}
//		}
//	}
//}
//
//#include <vector>
//#include <iostream>
//#include <algorithm>
//int Solved(std::vector<std::pair<int, int>>& dates, int max)
//{
//
//	int start = dates[0].first;
//	int end = dates[0].second;
//
//	std::vector<int> ret;
//	ret.reserve(max);
//	if(start <= 301)
//		ret.push_back(0);
//	else
//	{
//		start = 301;
//		end = 301;
//	}
//
//	for (int i = 1; i < (int)dates.size(); ++i)
//	{
//		int s = dates[i].first;
//		int e = dates[i].second;
//		if (s <= 301 && e >= 1201)
//			return 1;
//		if (s <= end && e > end)
//		{
//			if (s <= start || s <= 301)
//			{
//				ret.pop_back();
//				ret.push_back(i);
//				start = s;
//				end = e;
//			}
//			else
//			{
//
//				if (static_cast<int> (ret.size()) > 1)
//				{
//					bool isCheck = false;
//					for (int j = ret.size() - 1; j > 0; --j)
//					{
//
//						if (dates[ret[j - 1]].second >= s && dates[ret[j]].second <= e)
//						{
//							ret.erase(ret.begin() + j, ret.end());
//
//							ret.push_back(i);
//							start = s;
//							end = e;
//							isCheck = true;
//							break;
//						}
//					}
//					if (!isCheck)
//					{
//						if (end >= 1201)
//							continue;
//						ret.push_back(i);
//						start = s;
//						end = e;
//					}
//				}
//				else
//				{
//					ret.push_back(i);
//					start = s;
//					end = e;
//				}
//			}
//		}
//
//	}
//
//	if (end < 1201 || dates[ret[0]].first >301)
//		return 0;
//	return static_cast<int>(ret.size());
//}
//
//int main()
//{
//	int N;
//
//	int startMonth, endMonth;
//	int startDay, endDay;
//
//	std::cin >> N;
//	int max = N;
//	std::vector<std::pair<int, int>> dates;
//	dates.reserve(N);
//
//	do
//	{
//		std::cin >> startMonth >> startDay >> endMonth >> endDay;
//		if (endMonth < 3 || endMonth == 3 && endDay == 1 || startMonth > 11)
//		{
//			continue;
//		}
//		dates.push_back({ startMonth * 100 + startDay ,endMonth * 100 + endDay });
//
//
//
//	} while (--N);
//
//	std::sort(dates.begin(), dates.end());
//	std::cout << Solved(dates, max);
//
//
//	return 0;
//}

#pragma endregion

#pragma region  1043
//struct  Node
//{
//	int number;
//	bool isTrue = false;
//	bool isBefore = false;
//};
//
//int Solved(int N, int M , std::vector<std::vector<Node*>>& party)
//{
//	int ret = 0;
//	for (int i = 0; i < M; ++i)
//	{
//		for (int j = 0; j < static_cast<int>(party[i].size()); ++i)
//		{
//			if (!(party[i][j]->isTrue || party[i][j]->isBefore))
//			{
//
//			}
//			
//			for (int k = 0; k < M; ++k)
//			{
//				if (i == k)
//					continue;
//
//
//			}
//		}
//	}
//
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int N, M;
//	int num1,num2;
//
//	std::cin >> N >> M;
//	std::cin >> num1;
//	std::vector<Node> _node(N);
//	int ncount = 0;
//	for (int i = 0; i < num1; ++i)
//	{
//		std::cin >> num2;
//		_node[i].isTrue = true;
//	}
//		
//	for (Node& n : _node)
//	{
//		n.number = ncount++;
//	}
//
//	ncount = 0;
//	std::vector<std::vector<Node*>> party(M);
//	do
//	{
//		int n;
//		int m;
//
//		std::cin >> n;
//		for (int i = 0; i < n; ++i)
//		{
//			std::cin >> m;
//			party[ncount].push_back(&_node[m-1]);
//		}
//
//		ncount++;
//
//	} while (ncount <= M-1);
//
//	std::cout << Solved(N, M, party);
//	return 0;
//}


#pragma endregion

#pragma region  2458
//
//struct  Node
//{
//	std::vector<Node*> Left;
//	std::vector<Node*> Right;
//	int num;
//	
//};
//
//int Solved()
//{
//
//	return 0;
//}
//
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//
//	std::vector<Node> _node(N+1);
//	for (int i = 0 ; i < N+1 ; ++i)
//	{
//		_node[i].num = i;
//	}
//	int num1, num2;
//
//	for (int i = 0; i < M; ++i)
//	{
//		std::cin >> num1 >> num2;
//		_node[num1].Right.push_back(&_node[num2]);
//		_node[num2].Left.push_back(&_node[num1]);
//
//	}
//
//	return 0;
//}
//

#pragma endregion

#pragma region  1991
//
//struct Node
//{
//	Node* Left;
//	Node* Right;
//	Node* Top;
//	char value;
//
//};
//
//void Solved()
//{
//
//}
//
//int main()
//{
//	int N;
//	std::cin >> N;
//	std::vector<Node> _node(N);
//	char a, b, c;
//
//	for (int i = 0; i < N; ++i)
//	{
//		_node[i].value = i + 'A';
//		std::cin >> a >> b >> c;
//		if (b != '.')
//		{
//			_node[i].Left = &_node[b - 'A'];
//			_node[b - 'A'].Top = &_node[i];
//		}
//		if (c != '.')
//		{
//			_node[i].Right = &_node[c - 'A'];
//			_node[c - 'A'].Top = &_node[i];
//		}
//	}	
//	Node cur = _node[0];
//	Node top;
//	while (1)
//	{
//		if (cur.Top != nullptr)
//		{
//			cur = *cur.Top;
//			continue;
//		}
//		else
//		{
//			top = cur;
//			break;
//		}
//	}
//
//
//
//	return 0;
//}
#pragma endregion

#pragma region 1629
//#include <iostream>
//std::int64_t Solved(std::int64_t A, std::int64_t B, std::int64_t C)
//{
//	if (B == 0) return 1;
//	else if (B == 1) return A % C;
//
//	std::int64_t temp = Solved(A, B / 2, C) % C;
//
//	if (B % 2 == 0)
//	{
//		return (temp * temp ) % C;
//	}
//	else
//	{
//		return (temp * temp % C) * (A % C) % C;
//	}
//	
//	
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	std::int64_t A, B, C;
//
//	std::cin >> A >> B >> C;
//
//	std::cout << Solved(A, B, C);
//}
#pragma endregion

#pragma region  1010
//#include <iostream>
//int Solved(int N , int M)
//{
//	long long ret= 1;
//	int r = 1;
//	for (int i = M; i > M - N; --i)
//	{
//		ret = ret * i ;
//		ret = ret / r;
//		r++;
//	}
//	return ret;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//	int T;
//	std::cin >> T;
//	int N, M;
//	for (int i = 0; i < T; ++i)
//	{
//		std::cin >> N >> M;
//		std::cout << Solved(N, M) << '\n';
//	}
//	
//	
//
//}

#pragma endregion

#pragma region 1912
//#include <iostream>
//#include <limits>
//#include <vector>
//#include <algorithm>
//
//int Solved(std::vector<int>& v, int T)
//{
//    int max_sum = std::numeric_limits<int>::min(); 
//    int current_sum = 0;  
//
//    for (int i = 0; i < T; ++i)
//    {
//        current_sum += v[i];
//
//        if (current_sum > max_sum)
//        {
//            max_sum = current_sum;
//        }
//        if (current_sum < 0)
//        {
//            current_sum = 0;
//        }
//    }
//
//    return max_sum;
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    int T;
//    std::cin >> T;
//
//    std::vector<int> v(T);
//    for (int i = 0; i < T; ++i) 
//    {
//        std::cin >> v[i];
//    }
//
//    std::cout << Solved(v, T) << '\n';
//}
#pragma endregion

#pragma region  1697


//#include <queue>
//int Solved(const int& N, const int& M)
//{
//	std::vector<bool> v(100001, false);
//	std::queue<int> qu;
//	int num = N;
//	qu.push(num);
//	v[num] = true;
//	int count = 0;
//	while (1)
//	{
//		if (num == M)
//			break;
//		v[num] = true;
//		if ( num * 2 <= M + 1 && v[num * 2] == false)
//		{
//			num *= 2;
//			qu.push(num);
//		}
//		else if (num / 2 >= M - 1 && v[num / 2] == false)
//		{
//			num /= 2;
//			qu.push(num);
//		}
//
//		else if (num - 1 > 0 && num - 1 >= M + 1 && v[num -1] == false)
//		{
//			num -= 1;
//			qu.push(num);
//		}
//		else if (num + 1 <= M  && v[num +1] == false)
//		{
//			num += 1;
//			qu.push(num);
//		}
//		else
//		{
//			num = qu.back();
//			qu.pop();
//		}
//		if (num == M)
//			break;
//
//	}
//	return qu.size();
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	/*int N, M;
//
//	std::cin >> N >> M;
//
//	std::cout << Solved(N, M);*/
//
//	std::vector<int> a{ 1,2,3 };
//	
//	std::sort(a.begin(),a.end(), )
//	do
//	{
//		std::cout << a[0] << ' ' << a[1] << ' ' << a[2];
//
//	} while (std::prev_permutation(a.begin(), a.end()));
//
//}

#pragma endregion

#pragma region 2470
//#include <iostream>
//#include <limits>
//#include <vector>
//#include <algorithm>
//
//std::vector<int> Solved(std::vector<int>& v,int N)
//{
//	std::vector<int>::iterator it1, it2;
//	std::vector<int>::iterator nextit;
//	std::sort(v.begin(), v.end());
//	std::vector<int> ret(2);
//	int min = std::numeric_limits<int>::max();
//	it1 = v.begin();
//	it2 = v.end()-1;
//	while (1)
//	{
//		if (it1 == it2)
//			break;
//
//		int sum = *it1 + *it2;
//
//		if (std::abs(sum) < std::abs(min))
//		{
//			min = sum;
//			ret[0] = *it1;
//			ret[1] = *it2;
//		}
//
//		if (sum < 0)
//			it1++;
//		else
//			it2--;
//
//
//	}
//	return ret;
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int N;
//	std::cin >> N;
//	std::vector<int> v(N);
//
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> v[i];
//	}
//	std::vector<int> ret = Solved(v,N);
//	std::cout << ret[0] << " " << ret[1];
//	
//
//
//	return 0;
//}
#pragma endregion

#pragma region 1806
//#include <iostream>
//#include <vector>
//#include <limits>
//#include <numeric>
//void Solved(std::vector<int>& v, int N, int M)
//{
//	std::vector<int>::iterator it1, it2;
//
//	int minLength = std::numeric_limits<int>::max();
//	int length;
//
//	it1 = v.begin();
//	it2 = v.begin() +1;
//	int sum = *it1;
//	while (1)
//	{
//		length = it2 - it1;
//		
//		if (it2 == v.end() && it1 == it2)
//			break;
//
//		if (sum >= M)
//		{
//			if (length < minLength)
//			{
//				minLength = length;
//			}
//
//			if (length == 1 && it2 != v.end())
//			{
//				sum += *it2;
//				it2++;
//			}
//			sum -= *it1;
//			it1++;
//
//		}
//		else if (it2 == v.end())
//			break;
//		else
//		{
//			sum += *it2;
//			it2++;
//		}
//	}
//	if (minLength == std::numeric_limits<int>::max())
//		minLength = 0;
//
//	std::cout << minLength;
//
//}
//
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int N, M;
//	std::cin >> N >> M;
//
//	std::vector<int> v(N);
//
//	for (int& i : v)
//	{
//		std::cin >> i;
//	}
//	Solved(v, N, M);
//
//
//	return 0;
//}
#pragma endregion

#pragma region  1003
//#include <iostream>
//#include <vector>
//void Solved(int N)
//{
//	std::vector<std::pair<int, int>> v(N + 1);
//	v[0].first = 1;
//	v[0].second = 0;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		v[i].first = v[i - 1].second;
//		v[i].second = v[i - 1].first + v[i - 1].second;
//	}
//
//	std::cout << v[N].first << " " << v[N].second << "\n";
//
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int T, N;
//
//	std::cin >> T;
//
//	for (int i = 0; i < T; ++i)
//	{
//		std::cin >> N;
//		Solved(N);
//	}
//
//
//	return 0;
//
//}

#pragma endregion

#pragma region  1012
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//bool IsVisit(std::vector<std::pair<int, int>>& v, std::pair<int, int> point)
//{
//	for (std::pair<int, int>& p : v)
//	{
//		if (p == point)
//			return true;
//	}
//	return false;
//}
//bool Bfs(std::vector<std::vector<std::pair<int, bool>>>& v, int& M, int& N, std::pair<int, int> point)
//{
//	static const int dirx[4] = { 0,1,0,-1 };
//	static const int diry[4] = { 1,0,-1,0 };
//	std::queue<std::pair<int, int>>  qu;
//	std::vector<std::pair<int, int>> visit;
//	qu.push(point);
//	visit.push_back(point);
//	int x, y;
//	bool isvisitd = false;
//	while (1)
//	{
//		if (qu.empty())
//			break;
//		std::pair<int, int> p = qu.front();
//		qu.pop();
//		for (int i = 0; i < 4; ++i)
//		{
//			x = p.second + dirx[i];
//			y = p.first + diry[i];
//			if (x < 0 || y < 0 || x >= M || y >= N)
//				continue;
//			if (v[y][x].first == 1)
//			{
//				if (v[y][x].second == true)
//				{
//					isvisitd = true;
//				}
//				else if (IsVisit(visit, { y,x }))
//				{
//					continue;
//				}
//				else
//				{
//					qu.push({ y,x });
//					visit.push_back({ y,x });
//				}
//
//
//			}
//
//		}
//	}
//
//	for (std::pair<int, int>& p : visit)
//	{
//		v[p.first][p.second].second = true;
//	}
//
//
//	return isvisitd;
//
//}
//
//
//
//
//int Solved(std::vector<std::vector<std::pair<int, bool>>>& v, std::vector<std::pair<int, int>>& points, int& M, int& N, int& K)
//{
//	int count = 0;
//	for (int i = 0; i < K; ++i)
//	{
//		if (!Bfs(v, M, N, points[i]))
//		{
//			count++;
//
//		}
//	}
//
//	return count;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//
//	int T;
//	int M, N, K;
//
//	std::cin >> T;
//	for (int i = 0; i < T; ++i)
//	{
//		std::cin >> M >> N >> K;
//
//		std::vector<std::vector<std::pair<int, bool>>> v(N, std::vector<std::pair<int, bool>>(M, { 0,false }));
//		std::vector<std::pair<int, int>> points(K);
//		int a, b;
//		for (int j = 0; j < K; ++j)
//		{
//			std::cin >> a >> b;
//			points[j] = { b,a };
//			v[b][a].first = 1;
//		}
//		std::cout << Solved(v, points, M, N, K) << '\n';
//	}
//
//	return 0;
//}
#pragma endregion

#pragma region 1260
//
//void BFS()
//{
//
//}
//
//void DFS()
//{
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//
//}
#pragma endregion

#pragma region 1904
//int Combi(int N, int M)
//{
//	long long ret = 1;
//	int r = 1;
//	for (int i = M; i > M - N; --i)
//	{
//		ret = ret * i % 15746;
//		ret = ret / r % 15746;
//		r++;
//	}
//	return ret % 15746;
//}
//
//
//int Solved(int T)
//{
//	int count = 0;
//	int zero, one;
//	int maxZero;
//	if (T <= 2)
//	{
//		return 2 / T + 1;
//	}
//
//	zero = T-1;
//	maxZero = T / 2;
//
//
//	for (int i = 0; i <= maxZero; ++i)
//	{
//		if (i == maxZero)
//		{
//			if (T % 2 == 1)
//			{
//				count = (count + zero) % 15746;
//			}
//			else
//			{
//				count = (count + 1) % 15746;
//			}
//		}
//		else
//			count += Combi(i, zero)% 15746;
//	}
//
//	return count%15746;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int T;
//	std::cin >> T;
//
//	std::cout << Solved(T);
//
//
//	return 0;
//}
#pragma endregion

#pragma region 1927
//
//#include <queue>
//#include <iostream>
//#include <functional>
//#include <vector>
//
//void Solved(int N)
//{
//	int num;
//	std::priority_queue<int> que;
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> num;
//		if (num == 0)
//		{
//			if (que.empty())
//				std::cout << "0\n";
//			else
//			{
//				std::cout << -que.top() << '\n';
//				que.pop();
//			}
//		}
//		else 
//			que.push(-num);
//	}
//}
//
//int main()
//{
//
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//	
//	int N;
//	std::cin >> N;
//	
//	Solved(N);
//
//	return 0;
//}
#pragma endregion

#pragma region 2630
//#include <iostream>
//#include <vector>
//
//int* Solved(std::vector<std::vector<int>>& v, int startx, int endx, int starty, int endy, int N)
//{
//	static int color[2] = { 0,0 };
//	bool isBlue, isWhite;
//	isBlue = isWhite = false;
//	if (N == 1)
//	{
//		if (v[starty][startx] == 1)
//		{
//			color[1]++;
//		}
//		else
//		{
//			color[0]++;
//		}
//		return color;
//	}
//	for (int i = startx; i < endx; ++i)
//	{
//		for (int j = starty; j < endy; ++j)
//		{
//			if (v[j][i] == 1)
//				isBlue = true;
//			else
//				isWhite = true;
//		}
//	}
//	if (isBlue != isWhite)
//	{
//		if (isBlue)
//			color[1]++;
//		else
//			color[0]++;
//	}
//	else
//	{
//		// 첫 번째 사각형
//		Solved(v, startx, (startx + endx) / 2, starty, (starty + endy) / 2, N / 2);
//
//		// 두 번째 사각형
//		Solved(v, startx, (startx + endx) / 2, (starty + endy) / 2, endy, N / 2);
//
//		// 세 번째 사각형
//		Solved(v, (startx + endx) / 2, endx, starty, (starty + endy) / 2, N / 2);
//
//		// 네 번째 사각형
//		Solved(v, (startx + endx) / 2, endx, (starty + endy) / 2, endy, N / 2);
//	}
//
//
//	return color;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int N;
//	std::cin >> N;
//	std::vector<std::vector<int>> v(N, std::vector<int>(N, 0));
//
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			std::cin >> v[i][j];
//
//		}
//	}
//
//	int* arr = Solved(v, 0, N, 0, N, N);
//	std::cout << *arr << "\n" << *(arr + 1);
//
//	return 0;
//
//}
#pragma endregion

#pragma region 7662
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <functional>
//#include <unordered_map>
//void Solved()
//{
//	int T;
//	std::priority_queue<long long,std::vector<long long>,std::less<long long>> highQue;
//	std::priority_queue<long long, std::vector<long long>, std::greater<long long>> lessQue;
//	std::unordered_map<long long, long long> map;
//	char c;
//	long long num;
//	std::cin >> T;
//	for (int i = 0; i < T; ++i)
//	{
//		std::cin >> c >> num;
//
//		if (c == 'D')
//		{
//			if (num == -1 && !lessQue.empty())
//			{
//				while (!lessQue.empty())
//				{
//					if (map[lessQue.top()] > 0)
//					{
//						break;
//					}
//					lessQue.pop();
//				}
//				if(!lessQue.empty())
//				{
//					map[lessQue.top()]--;
//					lessQue.pop();
//				}
//			}
//			else if (num == 1 && !highQue.empty())
//			{
//				while (!highQue.empty())
//				{
//					if (map[highQue.top()] > 0)
//					{
//						break;
//					}
//					highQue.pop();
//				}
//				if(!highQue.empty())
//				{
//					map[highQue.top()]--;
//					highQue.pop();
//				}
//			}
//		}
//		else 
//		{
//			lessQue.push(num);
//			highQue.push(num);
//			map[num] += 1;
//		}
//	}
//	bool isEmpty = true;
//	while (!highQue.empty())
//	{
//		if (map[highQue.top()] > 0)
//		{
//			std::cout << highQue.top();
//			isEmpty = false;
//			break;
//		}
//		highQue.pop();
//	}
//	if (!isEmpty)
//		std::cout << " ";
//
//	while (!lessQue.empty())
//	{
//		if (map[lessQue.top()] > 0)
//		{
//			std::cout << lessQue.top();
//			isEmpty = false;
//			break;
//		}
//		lessQue.pop();
//	}
//	
//	
//	if (isEmpty)
//		std::cout << "EMPTY";
//	std::cout <<'\n';
//	
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; ++i)
//	{
//		Solved();
//	}
//
//	return 0;
//}
#pragma endregion

#pragma region 11726
//#include <iostream>
//#include <vector>
//int Solved(int N)
//{
//	std::vector<int> v;
//	v.reserve(1000);
//	v.push_back(1);
//	v.push_back(2);
//
//	for (int i = 2; i < N; ++i)
//	{
//		v.push_back((v[i - 1] + v[i - 2]) % 10007);
//	}
//
//
//	return v[N - 1];
//}
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int N;
//
//	std::cin >> N;
//	std::cout << Solved(N);
//
//	return 0;
//}
#pragma endregion

#pragma region 11723
//#include <iostream>
//#include <string>
//void Solved(int N)
//{
//	std::string ss;
//	int r;
//	int A = 0; // 21개
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> ss;
//
//		if (ss == "all")
//		{
//			A = (1 << 21) - 1;
//		}
//		else if (ss == "empty")
//		{
//			A = 0;
//		}
//		else 
//		{
//			std::cin >> r;
//			if (ss == "remove")
//			{
//				if (A & (1 << r))
//					A &= ~(1 << r);
//			}
//			else if (ss == "toggle")
//			{
//				A ^= (1 << r);
//			}
//			else if (ss == "add")
//			{
//				A |= (1 << r);
//
//			}
//			else if (ss == "check")
//			{
//				if (A & (1 << r))
//					std::cout << "1\n";
//				else
//					std::cout << "0\n";
//			}
//		}
//
//
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int N;
//	std::cin >> N;
//
//	Solved(N);
//
//	return 0;
//}

#pragma endregion

#pragma region 11659
//#include <iostream>
//#include <vector>
//#include <numeric>
//void Solved(std::vector<int>& v,int N,int M)
//{
//	int num1, num2;
//	std::vector<int> dp(N + 1);
//	dp[0] = v[0];
//	dp[1] = dp[0] + v[1];
//	dp[2] = dp[1] + v[2];
//	for (int i = 1; i < N; ++i)
//	{
//		dp[i] = dp[i - 1] + v[i];
//	}
//
//	for (int i = 0; i < M; ++i)
//	{
//		std::cin >> num1 >> num2;
//
//		if (num1 == num2)
//			std::cout << v[num1 - 1] << '\n';
//		else
//		{
//			std::cout << dp[num2-1] - dp[num1-1] + v[num1-1] << '\n';
//		}
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//	int N, M;
//	std::cin >> N >> M;
//	std::vector<int> v(N);
//
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> v[i];
//	}
//	Solved(v, N, M);
//	return 0;
//}

#pragma endregion

#pragma region 11047
//#include <iostream>
//#include <vector>
//int Solved(std::vector<int>& v,int N,int K)
//{
//	int ret = 0;
//	int Cur = K;
//	for (int i = N - 1; i >= 0; --i)
//	{
//		int count = Cur / v[i];
//		if (count > 0)
//		{
//			Cur =Cur - count * v[i];
//			ret += count;
//		}
//
//		if (Cur == 0)
//			break;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int N, K;
//
//	std::cin >> N >> K;
//	std::vector<int> v(N);
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> v[i];
//	}
//
//	std::cout << Solved(v,N,K);
//	
//
//	return 0;
//}

#pragma endregion

#pragma region 11399
//#include <iostream>
//#include<vector>
//#include <queue>
//#include <functional>
//int Solved(int N)
//{
//	int ret = 0;
//	std::priority_queue<int, std::vector<int>, std::greater<int>> que;
//	int num;
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> num;
//		que.push(num);
//	}
//	for (int i = 0; i < N; ++i)
//	{
//		ret += que.top() * (N - i);
//		que.pop();
//	}
//	return ret;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//	int N;
//	std::cin >> N;
//
//	std::cout << Solved(N);
//	return 0;
//}

#pragma endregion

#pragma region 9935
//#include <iostream>
//#include <string>
//#include <deque>
//void Solved(std::string& s1, std::string& s2)
//{
//	
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	std::string s1, s2;
//	std::cin >> s1;
//	std::cin >> s2;
//	Solved(s1, s2);
//
//	return 0;
//
//}
#pragma endregion

#pragma region 10844
//
//#include <iostream>
//int arr[101][10] = { 0,1,1,1,1,1,1,1,1,1,0, };
//
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	int N;
//	int ret = 0;
//
//
//
//	std::cin >> N;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//		{
//			int a = 0;
//			int b = 0;
//			if (j - 1 >=0)
//				a = arr[i - 1][j - 1] % 1000000000;
//			if (j + 1 < 10)
//				b = arr[i - 1][j + 1] % 1000000000;
//			arr[i][j] = (a + b) % 1000000000;
//		}
//	}
//
//	for (int i = 0; i < 10; ++i)
//	{
//		ret += arr[N - 1][i];
//		ret %= 1000000000;;
//	}
//
//	std::cout << ret;
//
//	return 0;
//}



#pragma endregion

#pragma region 10830
//#include <map>
//#include <iostream>
//#include <vector>
//std::map<long long, std::vector<std::vector<long long>>> map;
//std::vector<std::vector<long long>>& cal(const std::vector<std::vector<long long>>& v1, const std::vector<std::vector<long long>>& v2, long long N, long long B)
//{
//	if (map.find(B) != map.end()) return map[B];
//
//	std::vector<std::vector<long long>> res(N+1, std::vector<long long>(N+1));
//	for (int k = 0; k < N * N; ++k)
//	{
//		std::vector<long long> res1 = v1[k / N];
//		std::vector<long long> res2(N, 0);
//		long long sum = 0;
//		for (int i = 0; i < N; ++i)
//		{
//			res2[i] = v2[i][k % N];
//		}
//		for (int i = 0; i < N; ++i)
//		{
//			sum += ((res1[i] % 1000) * (res2[i] % 1000)) % 1000;
//		}
//		res[k / N][k % N] = sum % 1000;
//	}
//	map[B] = res;
//
//	return map[B];
//}
//std::vector<std::vector<long long>>& Solve(const std::vector<std::vector<long long>>& v, long long N, long long B)
//{
//	if (map.find(B) != map.end()) return map[B];
//	if (B == 2) return cal(v, v, N, B);
//
//	if (B % 2 == 1)
//	{
//		return cal(cal(Solve(v, N, B / 2), Solve(v, N, B / 2), N, B - 1), v, N, B);
//	}
//	else
//	{
//		return cal(Solve(v, N, B / 2), Solve(v, N, B / 2), N, B);
//	}
//
//}
//
//
//
//
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//	long long N, B;
//
//	std::cin >> N >> B;
//
//	std::vector<std::vector<long long>> v(N+1, std::vector<long long>(N+1));
//	long long num;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			std::cin >> num;
//			v[i][j] = num%1000;
//		}
//	}
//
//	map[1] = v;
//	Solve(v, N, B);
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			std::cout << (map[B])[i][j];
//			std::cout << " ";
//		}
//		std::cout << std::endl;
//	}
//
//
//
//
//
//
//	return 0;
//}

#pragma endregion

#pragma region 11054
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(nullptr);
//	std::cin.tie(nullptr);
//
//
//	int N;
//	int max = 0;
//	std::cin >> N;
//	std::vector<int> arr(N, 0);
//	std::vector<int> front(N, 1);
//	std::vector<int> back(N, 1);
//	for (int i = 0; i < N; ++i)
//	{
//		std::cin >> arr[i];
//	}
//
//	for (int i = 1; i < N; ++i)
//	{
//		for (int j = 0; j < i; ++j)
//		{
//			if (arr[i] > arr[j]) front[i] = std::max(front[i], front[j] + 1);
//		}
//	}
//
//	for (int i = N-2; i >= 0; --i)
//	{
//		for (int j = N-1; j > i; --j)
//		{
//			if (arr[i] > arr[j]) back[i] = std::max(back[i], back[j] + 1);
//		}
//	}
//	for(int i = 0 ; i < N ; ++i)
//		max = std::max(max, front[i] + back[i] - 1);
//
//
//	std::cout << max;
//
//	return 0;
//}
#pragma endregion

#pragma region 11660

#include <iostream>
#include <vector>
int main()
{
	std::ios::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n, m;
	std::cin >> n >> m;
	int x1, x2, y1, y2;
	std::vector<std::vector<int>> arr(n+1, std::vector<int>(n+1,0));
	std::vector<std::vector<int>> sumArr(n + 1, std::vector<int>(n + 1,0));

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cin >> arr[i][j];
			sumArr[i][j] += sumArr [i][j - 1] + arr[i][j];
		}
	}
	
	
	
	int sum = 0;
	for (int i = 0; i < m; ++i)
	{
		sum = 0;
		std::cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j <= x2; ++j)
		{
			sum += sumArr[j][y2] - sumArr[j][y1 - 1];
		}
		std::cout << sum << '\n';
	}




	return 0;
}

#pragma endregion

/*
*
*
std::ios::sync_with_stdio(false);
std::cout.tie(nullptr);
std::cin.tie(nullptr);

*/

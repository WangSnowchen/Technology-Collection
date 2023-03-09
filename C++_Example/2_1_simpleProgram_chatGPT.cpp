//iostream的多种用法(chatGPT给出的)

//输出“helloworld”
#include <iostream>
using namespace std;

int main()
{
    cout <<"HelloWorld!\n"<< endl;
    return 0;
}

//读取用户输入的值
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "You entered: " << x << endl;
    return 0;
}

//输出一组数据
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//从文件中读取数据
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile;
    infile.open("input.txt");
    if(!infile) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }
    int x;
    infile >> x;
    cout << "Value read from file: " << x << endl;
    infile.close();
    return 0;
}

//从输入中读取整数，并计算和
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    return 0;
}

//从文件中读取数据
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile("data.txt");
    int num;
    while (myfile >> num) {
        cout << num << endl;
    }
    myfile.close();
    return 0;
}

//将数据写入文件
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("output.txt");
    myfile << "Hello, world!" << endl;
    myfile.close();
    return 0;
}

//从标准输入读取一行字符串，并输出到标准输出
#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::getline(std::cin, input); // 从标准输入读取一行字符串
    std::cout << input << std::endl; // 输出到标准输出
    return 0;
}

//从标准输入读取两个整数，并将它们相加输出到标准输出
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b; // 从标准输入读取两个整数
    std::cout << a + b << std::endl; // 输出它们相加的结果到标准输出
    return 0;
}

//从文件中读取整数，并将它们相加输出到标准输出
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream infile("data.txt"); // 打开文件
    int sum = 0, value;
    while (infile >> value) // 从文件中读取整数
    {
        sum += value; // 相加
    }
    std::cout << sum << std::endl; // 输出结果到标准输出
    return 0;
}

//将整数写入文件中
#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outfile("data.txt"); // 打开文件
    int value = 100;
    outfile << value; // 将整数写入文件
    outfile.close(); // 关闭文件
    return 0;
}

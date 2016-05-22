using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace CSharpDll
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            //StringBuilder[] stringArray = new StringBuilder[2];
            //stringArray[0] = new StringBuilder();
            //stringArray[1] = new StringBuilder();
            string[] stringArray = new string[2];
            stringArray[0] = "TestA";
            stringArray[1] = "测试B";
            TestA(stringArray);
            textbox.Text = stringArray[0] + "\r\n" + stringArray[1];
        }

        //如果不设置CharSet，那么默认在C#向C++传递字符串的时候会进行字符串转换，现在是Unicode转Ansi
        //所以这个时候C++ dll必须要以Ansi（char**）进行接收
        //C#Unicode c++ char**是可以接收
        //而C# ansi C++ WCHAR_T** 是无法接收
        //以上情况下因为下有效，但是如果传递中文那么需要另作处理
        //以下是中文处理方法
        //首先设置字符集为Unicode，C++接收使用char**
        //然后使用宽字符转多字节进行转换，即可
        //如果直接宽字符传宽字符，那么中文无法识别（WFSTERAM无法输入中文）
        //如果C#以Auto，那么传入到C++中是乱码(Ansi To Ansi，中文乱码)，乱码部分应该是字符集的问题
        [DllImport("CPPDll.dll", CharSet = CharSet.Unicode)]
        public static extern void TestA(string[] stringArray);
    }
}

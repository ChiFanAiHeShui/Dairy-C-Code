#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	char*c[] = { "ENTER","NEW","POINT","FIRST" };
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);

	/*
	答案：
    POINT
    ER
    ST
    EW

	（1）首先cpp是一个三级指针，它里面存的是cp这个指针数组的首元素地址。
	 将其首先进行了++运算后，则它指向的是 c+2 这个元素的地址。由于其是个二级指针，将其解引用后得到了c+2这个指针指向的地址。
	 再次解引用后得到的是 c+2 这个指针指向的元素，输出结果：POINT

	（2）由于上面已经进行了cpp的自增运算，所以这是cpp任然指向的是c+2这个元素。
	再将其进行自加一运算后，现在cpp指向的是 c+1这个元素，将其解引用后，得到的是"NEW"中的'N'这个char元素的地址。
	再将其进行自减一，则得到的是"ENTER"中的'E'这个char元素的地址，将其解引用后，得到了字符串ENTER，再将其加3输出，结果为：ER
	
	char*c[] = { "ENTER","NEW","POINT","FIRST" };
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", cpp[-1][-1]+1);
	
	（3）由于以上已经对cpp进行过了两次自增运算，所以，cpp现在指向的是c+1这个元素的地址。
	cpp[-2]等同于 *（cpp-2），则现在指向是c+3这个元素的地址。
	将其解引用后，得到"FIRST"这个元素，再将其加三输出，结果为：ST；

	（4）由于第三次的时候没有对cpp进行过自增运算，所以，cpp现在指向的是c+1这个元素的地址。
	首先，cpp[-1][-1]相等于*(*(cpp-1)-1)
    也就是说，cpp先减一，则指向的是c+2这个元素的地址。解引用后得到了"POINT"中的'P'这个char元素地址。
	再将其减一后，得到是"NEW"中的'N'这个char元素的地址。再次解引用后，得到的是 NEW 这个字符串。将其加一后输出，结果为：EW
	*/

	return 0;
}


//int main() {
//	
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	//最后打印出的结果是：at
//	/*
//	首先a是一个指针数组，分别存储了三个字符串的首元素地址
//	然后，pa是一个二维指针。
//	a表示的是一个指针，指向的是其指针数组中的首元素地址，也就是'w'的地址。
//	在将a赋值给pa后，pa加一，则最终得到的是指针数组中的第二个元素的地址
//	将其打印输出得到at
//	*/
//	return 0;
//	
//}

//int main() {
//
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	//输出结果为：10，5；
//	/*
//	首先，aa是一个二行五列的二维数组。
//	因为&aa取到的是整个二维数组，再加一，则指针跑到了二维数组的末尾去了。
//	再将其强转为int类型的指针数组后减一，指针指向的就是二维数组末端的那个元素，解引用后得到了 10
//
//	因为aa表示首元素地址（在二维数组中也就是第一行数组的首元素地址）
//	因此，在将其加一后得到的是第二行的地址。
//	再将其强转为int类型的指针数组后减一，指针指向的就是第一行数组末尾的那个元素，解引用后得到了 5
//	*/
//	return 0;
//}
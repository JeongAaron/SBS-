#include <stdio.h> 

void main() 
{
#pragma region 비트

	// 데이터를 나타내는 최소의 단위이며,
	// 0 또는 1의 조합으로 논리 계산을 수행하는 단위.

	char alphabet = 15; // [0][0][0][0][1][1][1][1]

#pragma region (10)진수를 (2)진수로 변환하는 과정

	// 10진수를 1이 될 때 까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬한다.
	
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	
	// 1byte에 2진수로 저장된 값을 2의 제곱으로 표현하며,
	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	// 각각의 비트를 모두 더하여 10진수로 나타낸다.

	//  [1] [0] [0] [1] [1] [1] [0] [0] = 156
 	//  128  64  32  16  8   4   2   1
#pragma endregion


	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에 0 또는 1의 값만 저장 할 수 있다.

#pragma endregion

#pragma region 비트 연산자

	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자.

#pragma region AND 연산자(&)

	// 두 개의 피연사자 모두 1이면 1을 반환하는 연산자.

	// char x1 = 9;   // [0][0][0][0][1][0][0][1]
	// char y1 = 13;  // [0][0][0][0][1][1][0][1]
	                  // ------------------------
	                  // [0][0][0][0][1][0][0][1]
	// printf("x1과 y1를 AND 연산한 결과 : %d\n", x1 & y1);


#pragma endregion

#pragma region OR 연산자(|)

	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자.

	// int x2 = 5;   // [0][0][0][0][0][1][0][1]
	// int y2 = 17;  // [0][0][0][1][0][0][0][1]
	                 // ------------------------
				     // [0][0][0][1][0][1][0][1]
	// printf("x2와 y2를 OR 연산한 결과 : %d\n", x2 | y2);

#pragma endregion

#pragma region XOR 연산자(^)

	// 두 개의 피연산자가 서로 같으면 0을 반환하고 서로 다르면 1을 반환하는 연산자.

	// int x3 = 14;  // [0][0][0][0][1][1][1][0]
	// int y3 = 7;   // [0][0][0][0][0][1][1][1]
	                 // ------------------------
                     // [0][0][0][0][1][0][0][1]
	// printf("x3와 y3를 XOR 연산한 결과 : %d\n", x3 ^ y3);

#pragma endregion

#pragma region NOT 연산자(~)

	// 비트를 반전시키는 연산자.

	// char flag = 16;  // [0][0][0][1][0][0][0][0]
	                    // ------------------------
				        // [1][1][1][0][1][1][1][1]
	// printf("flag를 NOT연산한 결과 : % d\n", ~flag);

#pragma endregion

#pragma endregion




}
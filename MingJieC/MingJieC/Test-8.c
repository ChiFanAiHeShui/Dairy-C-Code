//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//
//�����޷�������x�ĵ�posλ��Ϊ1���ֵ
//������Ҫ������1������pos-1λ���ֵ��Ȼ����x���л�����Ϳ��Եó�����ˡ�
//unsigned set(unsigned x, int pos) {	
//		
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;
//		
//	x = x | tmp;
//			
//	return x;
//}
//		
//�����޷�������x�ĵ�posλ��Ϊ0���ֵ
//unsigned reset(unsigned x, int pos) {
//			      
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//�Ȱ�1��λ���ƶ�����Ӧ����Ҫ�޸ĵ�λ����ȥ
//		
//		
//		
//	if (((x >> pos - 1) & 1) == 1) {//�ж�x�϶�Ӧposλ�ô��Ķ����Ƶ�ֵ
//		x = x ^ tmp;
//	}
//	else {
//		x = x & tmp;
//	}
//			
//	return x;
//		
//		      
//}
//		
//unsigned inverse(unsigned x, int pos) {
//			
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//�Ȱ�1��λ���ƶ�����Ӧ����Ҫ�޸ĵ�λ����ȥ
//		
//		
//		
//	if (((x >> pos - 1) & 1) == 1) {//�ж�x�϶�Ӧposλ�ô��Ķ����Ƶ�ֵ
//		x = x ^ tmp;
//	}
//	else {
//		x = x | tmp;
//	}
//		
//	return x;
//			
//}
//		
//int main() {
//		
//	unsigned int  x = 128;
//		
//	for (int i = 31; i >= 0; i--) {//��ӡ��ֵ��Ӧ�Ķ�����λ
//			putchar((x >> i) & 1 ? '1' : '0');
//	}
//		
//	putchar('\n');
//	unsigned int tmp;
//	tmp = inverse(x, 3);
//		
//	for (int i = 31; i >= 0; i--) {//��ӡ��ֵ��Ӧ�Ķ�����λ
//		putchar((tmp >> i) & 1 ? '1' : '0');
//	}
//		
//	return 0;
//}



////���޷�������x�ĵ�posλ��ʼ��nλ��Ϊ1���ֵ
//unsigned set_n(unsigned x,int pos ,int n) {
//
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//�Ȱ�1�ƶ���posλ�ô�
//
//	for (int i = 0; i < n; i++) {//(ѭ��ʵ��)��posλ�ô���ʼ��x���л�����
//		                         //��������һ�κ��ٽ�tmp��ֵ�����ƶ�һλ
//		x = x | tmp;
//		tmp <<= 1;
//
//	}
//
//	return x;
//}




////���ؽ��޷�������x�ĵ�posλ��ʼ��nλ��Ϊ0���ֵ
//unsigned reset_n(unsigned x, int pos, int n) {
//
//	unsigned int tmp = 1;
//	tmp = tmp << pos - 1;//�Ȱ�1�ƶ���posλ�ô�
//
//	if ((x >> pos - 1) & 1 == 1) {//���ж�x��pos��λ�õ�ֵ�����Ϊ1�����޸ġ�����˵��Ϊ0���Ͳ��ø���
//		x = x ^ tmp;
//	}
//
//	for (int i = 0; i < n; i++) {//��ʱ��x��ֵΪposλ�ô��Ѿ����޸ĵ�ֵ
//		                         //�����ʱ��x�����ηֱ������ƶ�1��n-1��
//		                   //���Ҵ�ʱtmpָ���λ��Ҳ����x�Ķ�Ӧ��λ�ô������������Ϳ���ʵ���ˡ�
//		tmp = tmp << 1;
//		if ((x >> i) & 1 == 1) {
//			x = x ^ tmp;
//		}
//
//	}
//
//	return x;
//}


//unsigned inverse_n(unsigned x,int pos,int n) {
//	  
//	unsigned int tmp = 1;
//	tmp = tmp << pos -1 ;//�Ȱ�1�ƶ���posλ�ô�
//
//	if ((x >> pos - 1) & 1 == 1) {
//		x = x ^ tmp;
//	}
//
//	00000000000000000000000011111011
//
//
//	for (int i = 0; i < n; i++) {
//	
//		tmp = tmp << 1;
//
//		if ((x >> i) & 1 == 1) {
//		    x = x ^ tmp;
//		}
//		else {
//			x = x | tmp;
//		}
//		 
//	}
//
//	return x;
//}
//
//
//int main() {
//
//	unsigned int  x = 255;
//
//	for (int i = 31; i >= 0; i--) {//��ӡ��ֵ��Ӧ�Ķ�����λ
//		putchar((x >> i) & 1 ? '1' : '0');
//	}
//
//	putchar('\n');
//
//	unsigned int tmp;
//	tmp = inverse_n(x, 3,3);
//
//	for (int i = 31; i >= 0; i--) {//��ӡ��ֵ��Ӧ�Ķ�����λ
//
//		putchar((tmp >> i) & 1 ? '1' : '0');
//
//	}
//
//	return (0);
//}
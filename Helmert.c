#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double ED50yuk1, ED50sag1, ED50yuk2, ED50sag2, ED50yuk3, ED50sag3, ED50yuk4, ED50sag4, ED50yuk5, ED50sag5, ED50yuk6, ED50sag6, ED50yuk7, ED50sag7, ED50yuk8, ED50sag8, ED50yuk9, ED50sag9, ED50yuk10, ED50sag10;
	double ITRFyuk1, ITRFsag1, ITRFyuk2, ITRFsag2, ITRFyuk3, ITRFsag3, ITRFyuk4, ITRFsag4, ITRFyuk5, ITRFsag5, ITRFyuk6, ITRFsag6, ITRFyuk7, ITRFsag7, ITRFyuk8, ITRFsag8, ITRFyuk9, ITRFsag9, ITRFyuk10, ITRFsag10;
	double a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44, a51, a52, a53, a54, a61, a62, a63, a64, a71, a72, a73, a74, a81, a82, a83, a84, a91, a92, a93, a94, a101, a102, a103, a104;
	double l11, l21, l31, l41, l51, l61, l71, l81, l91, l101, l111, l121, l131, l141, l151, l161, l171, l181, l191, l201;

		/// Bilinenleri isteyelim.
	/* ED50 projeksiyon koordinatları; ED50yuk1, ED50sag1, ED50yuk2, ED50sag2, ED50yuk3, ED50sag3, ED50yuk4, ED50sag4, ED50yuk5, ED50sag5, ED50yuk6, ED50sag6, ED50yuk7, ED50sag7, ED50yuk8, ED50sag8, ED50yuk9, ED50sag9, ED50yuk10, ED50sag10; */
	printf("ED50yuk1 değerini giriniz: ");
	scanf("%lf", &ED50yuk1);
	printf("ED50sag1 değerini giriniz: ");
	scanf("%lf", &ED50sag1);
	printf("ED50yuk2 değerini giriniz: ");
	scanf("%lf", &ED50yuk2);
	printf("ED50sag2 değerini giriniz: ");
	scanf("%lf", &ED50sag2);
	printf("ED50yuk3 değerini giriniz: ");
	scanf("%lf", &ED50yuk3);
	printf("ED50sag3 değerini giriniz: ");
	scanf("%lf", &ED50sag3);
	printf("ED50yuk4 değerini giriniz: ");
	scanf("%lf", &ED50yuk4);
	printf("ED50sag4 değerini giriniz: ");
	scanf("%lf", &ED50sag4);
	printf("ED50yuk5 değerini giriniz: ");
	scanf("%lf", &ED50yuk5);
	printf("ED50sag5 değerini giriniz: ");
	scanf("%lf", &ED50sag5);
	printf("ED50yuk6 değerini giriniz: ");
	scanf("%lf", &ED50yuk6);
	printf("ED50sag6 değerini giriniz: ");
	scanf("%lf", &ED50sag6);
	printf("ED50yuk7 değerini giriniz: ");
	scanf("%lf", &ED50yuk7);
	printf("ED50sag7 değerini giriniz: ");
	scanf("%lf", &ED50sag7);
	printf("ED50yuk8 değerini giriniz: ");
	scanf("%lf", &ED50yuk8);
	printf("ED50sag8 değerini giriniz: ");
	scanf("%lf", &ED50sag8);
	printf("ED50yuk9 değerini giriniz: ");
	scanf("%lf", &ED50yuk9);
	printf("ED50sag9 değerini giriniz: ");
	scanf("%lf", &ED50sag9);
	printf("ED50yuk10 değerini giriniz: ");
	scanf("%lf", &ED50yuk10);
	printf("ED50sag10 değerini giriniz: ");
	scanf("%lf", &ED50sag10);
	/* ITRF96 projeksiyon koordinatları; ITRFyuk1, ITRFsag1, ITRFyuk2, ITRFsag2, ITRFyuk3, ITRFsag3, ITRFyuk4, ITRFsag4, ITRFyuk5, ITRFsag5, ITRFyuk6, ITRFsag6, ITRFyuk7, ITRFsag7, ITRFyuk8, ITRFsag8, ITRFyuk9, ITRFsag9, ITRFyuk10, ITRFsag10; */
	printf("ITRFyuk1 değerini giriniz: ");
	scanf("%lf", &ITRFyuk1);
	printf("ITRFsag1 değerini giriniz: ");
	scanf("%lf", &ITRFsag1);
	printf("ITRFyuk2 değerini giriniz: ");
	scanf("%lf", &ITRFyuk2);
	printf("ITRFsag2 değerini giriniz: ");
	scanf("%lf", &ITRFsag2);
	printf("ITRFyuk3 değerini giriniz: ");
	scanf("%lf", &ITRFyuk3);
	printf("ITRFsag3 değerini giriniz: ");
	scanf("%lf", &ITRFsag3);
	printf("ITRFyuk4 değerini giriniz: ");
	scanf("%lf", &ITRFyuk4);
	printf("ITRFsag4 değerini giriniz: ");
	scanf("%lf", &ITRFsag4);
	printf("ITRFyuk5 değerini giriniz: ");
	scanf("%lf", &ITRFyuk5);
	printf("ITRFsag5 değerini giriniz: ");
	scanf("%lf", &ITRFsag5);
	printf("ITRFyuk6 değerini giriniz: ");
	scanf("%lf", &ITRFyuk6);
	printf("ITRFsag6 değerini giriniz: ");
	scanf("%lf", &ITRFsag6);
	printf("ITRFyuk7 değerini giriniz: ");
	scanf("%lf", &ITRFyuk7);
	printf("ITRFsag7 değerini giriniz: ");
	scanf("%lf", &ITRFsag7);
	printf("ITRFyuk8 değerini giriniz: ");
	scanf("%lf", &ITRFyuk8);
	printf("ITRFsag8 değerini giriniz: ");
	scanf("%lf", &ITRFsag8);
	printf("ITRFyuk9 değerini giriniz: ");
	scanf("%lf", &ITRFyuk9);
	printf("ITRFsag9 değerini giriniz: ");
	scanf("%lf", &ITRFsag9);
	printf("ITRFyuk10 değerini giriniz: ");
	scanf("%lf", &ITRFyuk10);
	printf("ITRFsag10 değerini giriniz: ");
	scanf("%lf", &ITRFsag10);
	/* A katsayılar matrisi;
	> a11, a12, a13, a14;
	> a21, a22, a23, a24;
	> a31, a32, a33, a34;
	> a41, a42, a43, a44;
	> a51, a52, a53, a54;
	> a61, a62, a63, a64;
	> a71, a72, a73, a74;
	> a81, a82, a83, a84;
	> a91, a92, a93, a94;
	> a101, a102, a103, a104;
	> a111, a112, a113, a114;
	> a121, a122, a123, a124;
	> a131, a132, a133, a134;
	> a141, a142, a143, a144;
	> a151, a152, a153, a154;
	> a161, a162, a163, a164;
	> a171, a172, a173, a174;
	> a181, a182, a183, a184;
	> a191, a192, a193, a194;
	> a201, a202, a203, a204;
	a11 = 1;
	a12 = 0;
	a13 = ED50yuk1;
	a14 = -ED50sag1;
	a21 =………… */
	// a11, a12, a13, a14;
	a11 = 1;
	a12 = 0;
	a13 = ED50yuk1;
	a14 = -ED50sag1;
	// a21, a22, a23, a24;
	a21 = 1;
	a22 = 0;
	a23 = ED50yuk2;
	a24 = -ED50sag2;
	// a31, a32, a33, a34;
	a31 = 1;
	a32 = 0;
	a33 = ED50yuk3;
	a34 = -ED50sag3;
	// a41, a42, a43, a44;
	a41 = 1;
	a42 = 0;
	a43 = ED50yuk4;
	a44 = -ED50sag4;
	// a51, a52, a53, a54;
	a51 = 1;
	a52 = 0;
	a53 = ED50yuk5;
	a54 = -ED50sag5;
	// a61, a62, a63, a64;
	a61 = 1;
	a62 = 0;
	a63 = ED50yuk6;
	a64 = -ED50sag6;
	// a71, a72, a73, a74;
	a71 = 1;
	a72 = 0;
	a73 = ED50yuk7;
	a74 = -ED50sag7;
	// a81, a82, a83, a84;
	a81 = 1;
	a82 = 0;
	a83 = ED50yuk8;
	a84 = -ED50sag8;
	// a91, a92, a93, a94;
	a91 = 1;
	a92 = 0;
	a93 = ED50yuk9;
	a94 = -ED50sag9;
	// a101, a102, a103, a104;
	a101 = 1;
	a102 = 0;
	a103 = ED50yuk10;
	a104 = -ED50sag10;
	// a111, a112, a113, a114;
	// a121, a122, a123, a124;
	// a131, a132, a133, a134;
	// a141, a142, a143, a144;
	// a151, a152, a153, a154;
	// a161, a162, a163, a164;
	// a171, a172, a173, a174;
	// a181, a182, a183, a184;
	// a191, a192, a193, a194;
	// a201, a202, a203, a204;

	/* l matrisi;
	> l11, l21, l31, l41, l51, l61, l71, l81, l91, l101, l111, l121, l131, l141, l151, l161, l171, l181, l191, l201;
	l11 = ITRFyuk1;
	l21 = ITRFsag1;
	l31 = ITRFyuk2;
	l41 = ITRFsag2; */
	l11 = ITRFyuk1;
	l21 = ITRFsag1;
	l31 = ITRFyuk2;
	l41 = ITRFsag2;
	l51 = ITRFyuk3;
	l61 = ITRFsag3;
	l71 = ITRFyuk4;
	l81 = ITRFsag4;
	l91 = ITRFyuk5;
	l101 = ITRFsag5;
	l111 = ITRFyuk6;
	l121 = ITRFsag6;
	l131 = ITRFyuk7;
	l141 = ITRFsag7;
	l151 = ITRFyuk8;
	l161 = ITRFsag8;
	l171 = ITRFyuk9;
	l181 = ITRFsag9;
	l191 = ITRFyuk10;
	l201 = ITRFsag10;

		/// Bilinmeyenlerin hesaplanması.
	printf("\n\t=== Hesap sonuçları! === \n");
	/* A’x A matrisinin hesaplanması;
	> q11, q12, q13, q14;
	> q21, q22, q23, q24;
	> q31, q32, q33, q34;
	> q41, q42, q43, q44;
	q11 = a11 * a11 + a21 * a21 + a31 * a31 + a41 * a41 + a51 * a51 + a61 * a61 + a71 * a71 + a81 * a81 + a91 * a91 + a101 * a101 + a111 * a111 + a121 * a121 + a131 * a131 + a141 * a141 + a151 * a151 + a161 * a161 + a171 * a171 + a181 * a181 + a191 * a191 + a201 * a201;
	q12=………… */

	/* Qxx matrisinin hesaplanması (4×4 matris tersi alınması);
	> qx11, qx12, qx13, qx14; qx21, qx22, qx23, qx24; qx31, qx32, qx33, qx34; qx41, qx42, qx43, qx44;
	> Bulunacak (-1)’li değerler; ebx11, ebx12, ebx13, ebx14, ebx22, ebx23, ebx24, ebx33, ebx34, ebx44
	> İndirgenen değerler; ax22, ax23, ax24, ax33, ax34, ax44;
	>Ters matris değerleri; qx11, qx12, qx13, qx14; qx21, qx22, qx23, qx24; qx31, qx32, qx33, qx34; qx41, qx42, qx43, qx44;
	
	1.satır için (-1)’li değerlerin bulunması;
	>  ebx11 = q11 / -q11; 
	>  ebx12 = …………
	2.satırın 1. indirgenmesi; 2.satırın x21 = x12 katsayısı 1.satırın (-1)’li katsayıları ile çarpılır. Sonrasında 2.satırda aynı sütuna denk gelen katsayı ile toplanır.
	> ax22 = (q12 * ebx12) + q22;
	> ax23 = ……………..
	2.satırın 1.indirgenmesinden (-1)’li değerlerin bulunması
	> ebx22 = ax22 / -ax22;
	> ebx23 = ……………..
	3.satırın 1.indirgemesi; 3.satırın x31=x13 ile 1.satırın (-1)’li satırındaki değerler çarpılır. 2.satırın 1.indirgenmesi ile 2.satırın 1. (-1)’li değerleri çapılır. Sonrasında bulunan benzer katsayı değerleri toplanarak, 3.satırın katsayılarına eklenir. Böylece aranan değer bulunmuş olur.
	> ax33 = (q13 * ebx13) + (ax23 * ebx23) + q33;
	> ax34 = ………………………….
	3.satırın 1.indirgemesinden (-1)’li değerlerin bulunması
	> ebx33 = ax33 / -ax33;
	> ebx34 = …………………
	4.satırın 1.indirgemesi; 4.sütunda; 1.satırdaki değer ile 1.satırın (-1)’li değerlerin tamamının çarpımı, 2.satırdaki 4.sütun değeri ile 2.(-1)’li değerlerin çarpımı, 3.satırdaki 4.sütun değeri ile 3.(-1)’li değerlerinin tamamının çarpımı yapılarak Simetrik olan 4.satırdaki değerlere eklenerek bulunur.
	> ax44 = (q14 * ebx14) + (ax24 * ebx24) + (ax34 * ebx34) + q44;
	4.satırın 1. indirgemesinden (-1)’li değerlerin bulunması
	> ebx44 = ax44 / -ax44;
	Simetrik Matrisin Ters değerlerinin bulunması;qx11, qx12, qx13, qx14; qx21, qx22, qx23, qx24; qx31, qx32, qx33, qx34; qx41, qx42, qx43, qx44;
	> qx44 = 1 / ax44;
	> qx43 = (qx44 * ebx34); 
	> qx42 = ………………… */

	/* A’x l matrisinin hesaplanması; > z11, z21, z31, z41;
	z11 = a11 * l11 + a21 * l21 + a31 * l31 + a41 * l41 + a51 * l51 + a61 * l61 + a71 * l71 + a81 * l81 + a91 * l91 + a101 * l101 + a111 * l111 + a121 * l121 + a131 * l131 + a141 * l141 + a151 * l151 + a161 * l161 + a171 * l171 + a181 * l181 + a191 * l191 + a201 * l201;
	z21 =………………………….. */

	/* Öteleme (tx ve ty) ve yardımcı parametreler (a ve b) değerlerinin hesaplanması;> tx, ty, a, b;
	tx = qx11 * z11 + qx12 * z21 + qx13 * z31 + qx14 * z41;
	ty = qx21 * z11 + qx22 * z21 + qx23 * z31 + qx24 * z41;
	a = qx31 * z11 + qx32 * z21 + qx33 * z31 + qx34 * z41;
	b = qx41 * z11 + qx42 * z21 + qx43 * z31 + qx44 * z41; */

	/* Ölçek (k) ve dönüklük (ε) parametresi değerlerinin hesaplanması; > k, dönε;
	k = Sqrt(a^2 + b^2);
	dönε = Atan(b / a); */

	/* Düzeltme denklemlerinin hesaplanması;
	> Vx11, Vy21, Vx32, Vy42, Vx53, Vy63, Vx74, Vy84, Vx95, Vy105;
	> Vx116, Vy126, Vx137, Vy147, Vx158, Vy168, Vx179, Vy189, Vx1910, Vy2010;
	Vx11 = (a11 * tx + a12 * ty + a13 * a + a14 * b) - ITRFyuk1;
	Vy21 = (a21 * tx + a22 * ty + a23 * a + a24 * b) - ITRFsag1;
	Vx32 = ………….. */

	/* Düzeltme getirilen ITRF96 koordinatlarının hesaplanması;
	> ITRFyuk1d, ITRFsag1d, ITRFyuk2d, ITRFsag2d, ITRFyuk3d, ITRFsag3d, ITRFyuk4d, ITRFsag4d;          
	> ITRFyuk5d, ITRFsag5d, ITRFyuk6d, ITRFsag6d, ITRFyuk7d, ITRFsag7d, ITRFyuk8d, ITRFsag8d
	> ITRFyuk9d, ITRFsag9d, ITRFyuk10d, ITRFsag10d;
	ITRFyuk1d = ITRFyuk1 + Vx11;
	ITRFsag1d = ITRFsag1 + Vy21;
	ITRFyuk2d = ……………… */

	return 0;
}

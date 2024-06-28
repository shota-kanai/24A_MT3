#pragma once
#include<Matrix4x4.h>
#include <Novice.h>
#include<Vector3.h>

static const int kRowHeight = 20;
static const int kColumnWidth = 60;
//Vectorスクリーンプリント
void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label);
//Matrixスクリーンプリント
void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label);



	//加算
	Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);
	// 行列引き算
	Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);
	//掛け算
	Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
	//逆行列
	Matrix4x4 Inverse(const Matrix4x4& m);
	//転置行列
	Matrix4x4 Transpose(const Matrix4x4& m);
	//単位行列
	Matrix4x4 MakeIdentity4x4();
	//平行移動行列を作る
	Matrix4x4 MakeTranslateMatrix(const Vector3& translate);
	//拡大縮小行列を作る
	Matrix4x4 MakeScaleMatrix(const Vector3& scale);
	//座標変換
	Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);


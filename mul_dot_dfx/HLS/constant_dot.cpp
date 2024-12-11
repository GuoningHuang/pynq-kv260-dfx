void Matrix_dot(float A[4][4],float B[4][4],float C[4][4]){
#pragma HLS INTERFACE s_axilite port=return
#pragma HLS INTERFACE m_axi port=C
#pragma HLS INTERFACE m_axi port=B
#pragma HLS INTERFACE m_axi port=A

	for(int i=0;i<4;i++){
		#pragma HLS UNROLL
		for(int j=0;j<4;j++)
		{
			#pragma HLS UNROLL
			double temp;
			temp = A[i][j]*B[i][j];
			C[i][j] = temp;
		}
	}
};


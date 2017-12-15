#include "imageNet.h"
#include "loadImage.h"
#include "cudaFont.h"

// main entry point
int main( int argc, char** argv )
{
	// create imageNet
	imageNet* net = imageNet::Create(argc, argv);
	if( !net )
	{
		printf("imagenet-console:   failed to initialize imageNet\n");
		return 0;
	}
	net->EnableProfiler();
	printf("===============Main::imageNet created.==============\n");
	int runbatchsize = 3;
	// load image from file on disk
	const char* imgFilename[] = {"orange_0.jpg", "cat_0.jpg", "banana_0.jpg"};

	float* imgCPU    = NULL;
	float* imgCUDA   = NULL;
	int    imgWidth  = 0;
	int    imgHeight = 0;

	for(int i = 0; i < runbatchsize; i++)
	{
		if( !loadImageRGBA(imgFilename[i], (float4**)&imgCPU, (float4**)&imgCUDA, &imgWidth, &imgHeight) )
		{
			printf("failed to load image '%s'\n", imgFilename);
			return 0;
		}
		net->ClassifyCuda(i, imgCUDA, imgWidth, imgHeight);
	}
	printf("===============Main::image loaded.==================\n");
	// classify image
	float confidence = 0.0f;

	net->ClassifyBatch(runbatchsize);

	// show the results
	printf("\nshutting down...\n");
	CUDA(cudaFreeHost(imgCPU));
	delete net;
	return 0;
}

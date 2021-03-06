# Batch inference version of [jetson-inference](https://github.com/dusty-nv/jetson-inference).
## Run on x86_64 computer:
1. Download this repository.
2. Copy /data/ in depository [jetson-inference](https://github.com/dusty-nv/jetson-inference) to this root repository.
3. Run commands:
```
$ cd jetson-inference-batch
$ mkdir build
$ cd build
$ cmake ../
$ make 
$ cd x86_64/bin/
$ ./imagenet-console model=googlenet batch_size=3
```
batch_size: the maxBatchSize.

Results:
```
imageNet::Create...
batch_size:3
imageNet::Create_1...
imageNet::init...

imageNet -- loading classification network model from:
         -- prototxt     networks/googlenet.prototxt
         -- model        networks/bvlc_googlenet.caffemodel
         -- class_labels networks/ilsvrc12_synset_words.txt
         -- input_blob   'data'
         -- output_blob  'prob'
         -- batch_size   3

[GIE]  TensorRT version 2.1, build 2102
[GIE]  attempting to open cache file networks/bvlc_googlenet.caffemodel.3.tensorcache
[GIE]  loading network profile from cache... networks/bvlc_googlenet.caffemodel.3.tensorcache
[GIE]  platform does not have FP16 support.
[GIE]  networks/bvlc_googlenet.caffemodel loaded
[GIE]  CUDA engine context initialized with 2 bindings
[GIE]  networks/bvlc_googlenet.caffemodel input  binding index:  0
[GIE]  networks/bvlc_googlenet.caffemodel input  dims (b=3 c=3 h=224 w=224) size=1806336
---------------memory size for inputs:
[cuda]  cudaAllocMapped 1806336 bytes, CPU 0x1020ea00000 GPU 0x1020ea00000
[GIE]  networks/bvlc_googlenet.caffemodel output 0 prob  binding index:  1
[GIE]  networks/bvlc_googlenet.caffemodel output 0 prob  dims (b=3 c=1000 h=1 w=1) size=12000
---------------memory size for outputs: 
[cuda]  cudaAllocMapped 12000 bytes, CPU 0x1020ec00000 GPU 0x1020ec00000
networks/bvlc_googlenet.caffemodel initialized.
---------------tensorNet::LoadNetwork end.---------------
imageNet -- loaded 1000 class info entries
---------------imageNet::init end.-----------------------
===============Main::imageNet created.==============
loaded image  orange_0.jpg  (1920 x 1920)  58982400 bytes
[cuda]  cudaAllocMapped 58982400 bytes, CPU 0x1020ee00000 GPU 0x1020ee00000
loaded image  cat_0.jpg  (1920 x 1920)  58982400 bytes
[cuda]  cudaAllocMapped 58982400 bytes, CPU 0x10212800000 GPU 0x10212800000
loaded image  banana_0.jpg  (1920 x 1920)  58982400 bytes
[cuda]  cudaAllocMapped 58982400 bytes, CPU 0x10216200000 GPU 0x10216200000
===============Main::image loaded.==================
[GIE]  layer conv1/7x7_s2 + conv1/relu_7x7 - 1.882112 ms
[GIE]  layer pool1/3x3_s2 - 0.088064 ms
[GIE]  layer pool1/norm1 - 0.039936 ms
[GIE]  layer conv2/3x3_reduce + conv2/relu_3x3_reduce - 0.053248 ms
[GIE]  layer conv2/3x3 + conv2/relu_3x3 - 0.519168 ms
[GIE]  layer conv2/norm2 - 0.113664 ms
[GIE]  layer pool2/3x3_s2 - 0.065536 ms
[GIE]  layer inception_3a/1x1 + inception_3a/relu_1x1 || inception_3a/3x3_reduce + inception_3a/relu_3x3_reduce || inception_3a/5x5_reduce + inception_3a/relu_5x5_reduce - 0.099328 ms
[GIE]  layer inception_3a/3x3 + inception_3a/relu_3x3 - 0.150528 ms
[GIE]  layer inception_3a/5x5 + inception_3a/relu_5x5 - 0.057344 ms
[GIE]  layer inception_3a/pool - 0.028672 ms
[GIE]  layer inception_3a/pool_proj + inception_3a/relu_pool_proj - 0.038912 ms
[GIE]  layer inception_3a/1x1 copy - 0.010240 ms
[GIE]  layer inception_3b/1x1 + inception_3b/relu_1x1 || inception_3b/3x3_reduce + inception_3b/relu_3x3_reduce || inception_3b/5x5_reduce + inception_3b/relu_5x5_reduce - 0.187392 ms
[GIE]  layer inception_3b/3x3 + inception_3b/relu_3x3 - 0.276480 ms
[GIE]  layer inception_3b/5x5 + inception_3b/relu_5x5 - 0.206848 ms
[GIE]  layer inception_3b/pool - 0.036864 ms
[GIE]  layer inception_3b/pool_proj + inception_3b/relu_pool_proj - 0.063488 ms
[GIE]  layer inception_3b/1x1 copy - 0.017408 ms
[GIE]  layer pool3/3x3_s2 - 0.053248 ms
[GIE]  layer inception_4a/1x1 + inception_4a/relu_1x1 || inception_4a/3x3_reduce + inception_4a/relu_3x3_reduce || inception_4a/5x5_reduce + inception_4a/relu_5x5_reduce - 0.098304 ms
[GIE]  layer inception_4a/3x3 + inception_4a/relu_3x3 - 0.081920 ms
[GIE]  layer inception_4a/5x5 + inception_4a/relu_5x5 - 0.065536 ms
[GIE]  layer inception_4a/pool - 0.021504 ms
[GIE]  layer inception_4a/pool_proj + inception_4a/relu_pool_proj - 0.079872 ms
[GIE]  layer inception_4a/1x1 copy - 0.008192 ms
[GIE]  layer inception_4b/1x1 + inception_4b/relu_1x1 || inception_4b/3x3_reduce + inception_4b/relu_3x3_reduce || inception_4b/5x5_reduce + inception_4b/relu_5x5_reduce - 0.102400 ms
[GIE]  layer inception_4b/3x3 + inception_4b/relu_3x3 - 0.091136 ms
[GIE]  layer inception_4b/5x5 + inception_4b/relu_5x5 - 0.093184 ms
[GIE]  layer inception_4b/pool - 0.021504 ms
[GIE]  layer inception_4b/pool_proj + inception_4b/relu_pool_proj - 0.087040 ms
[GIE]  layer inception_4b/1x1 copy - 0.007168 ms
[GIE]  layer inception_4c/1x1 + inception_4c/relu_1x1 || inception_4c/3x3_reduce + inception_4c/relu_3x3_reduce || inception_4c/5x5_reduce + inception_4c/relu_5x5_reduce - 0.103424 ms
[GIE]  layer inception_4c/3x3 + inception_4c/relu_3x3 - 0.101376 ms
[GIE]  layer inception_4c/5x5 + inception_4c/relu_5x5 - 0.092160 ms
[GIE]  layer inception_4c/pool - 0.021504 ms
[GIE]  layer inception_4c/pool_proj + inception_4c/relu_pool_proj - 0.087008 ms
[GIE]  layer inception_4c/1x1 copy - 0.006176 ms
[GIE]  layer inception_4d/1x1 + inception_4d/relu_1x1 || inception_4d/3x3_reduce + inception_4d/relu_3x3_reduce || inception_4d/5x5_reduce + inception_4d/relu_5x5_reduce - 0.105472 ms
[GIE]  layer inception_4d/3x3 + inception_4d/relu_3x3 - 0.134144 ms
[GIE]  layer inception_4d/5x5 + inception_4d/relu_5x5 - 0.120832 ms
[GIE]  layer inception_4d/pool - 0.021632 ms
[GIE]  layer inception_4d/pool_proj + inception_4d/relu_pool_proj - 0.087936 ms
[GIE]  layer inception_4d/1x1 copy - 0.006144 ms
[GIE]  layer inception_4e/1x1 + inception_4e/relu_1x1 || inception_4e/3x3_reduce + inception_4e/relu_3x3_reduce || inception_4e/5x5_reduce + inception_4e/relu_5x5_reduce - 0.122880 ms
[GIE]  layer inception_4e/3x3 + inception_4e/relu_3x3 - 0.143520 ms
[GIE]  layer inception_4e/5x5 + inception_4e/relu_5x5 - 0.112480 ms
[GIE]  layer inception_4e/pool - 0.023552 ms
[GIE]  layer inception_4e/pool_proj + inception_4e/relu_pool_proj - 0.080896 ms
[GIE]  layer inception_4e/1x1 copy - 0.009216 ms
[GIE]  layer pool4/3x3_s2 - 0.023552 ms
[GIE]  layer inception_5a/1x1 + inception_5a/relu_1x1 || inception_5a/3x3_reduce + inception_5a/relu_3x3_reduce || inception_5a/5x5_reduce + inception_5a/relu_5x5_reduce - 0.116736 ms
[GIE]  layer inception_5a/3x3 + inception_5a/relu_3x3 - 0.081920 ms
[GIE]  layer inception_5a/5x5 + inception_5a/relu_5x5 - 0.112640 ms
[GIE]  layer inception_5a/pool - 0.013280 ms
[GIE]  layer inception_5a/pool_proj + inception_5a/relu_pool_proj - 0.115744 ms
[GIE]  layer inception_5a/1x1 copy - 0.004096 ms
[GIE]  layer inception_5b/1x1 + inception_5b/relu_1x1 || inception_5b/3x3_reduce + inception_5b/relu_3x3_reduce || inception_5b/5x5_reduce + inception_5b/relu_5x5_reduce - 0.120832 ms
[GIE]  layer inception_5b/3x3 + inception_5b/relu_3x3 - 0.113664 ms
[GIE]  layer inception_5b/5x5 + inception_5b/relu_5x5 - 0.160768 ms
[GIE]  layer inception_5b/pool - 0.012288 ms
[GIE]  layer inception_5b/pool_proj + inception_5b/relu_pool_proj - 0.115712 ms
[GIE]  layer inception_5b/1x1 copy - 0.005536 ms
[GIE]  layer pool5/7x7_s1 - 0.019040 ms
[GIE]  layer loss3/classifier - 0.041984 ms
[GIE]  layer prob - 0.011264 ms
[GIE]  Accumulated network time - 7.195648 ms
class 0950 - 0.978982  (orange)
class 0951 - 0.020888  (lemon)
class 1287 - 0.986145  (lynx, catamount)
class 2954 - 0.998964  (banana)

shutting down...
```
if change runbatchsize in imagenet-console.cpp to 2, that means to run 2 images at one time:
```
[GIE]  Accumulated network time - 5.675040 ms
class 0950 - 0.978982  (orange)
class 0951 - 0.020888  (lemon)
class 1287 - 0.986145  (lynx, catamount)
```
if change runbatchsize in imagenet-console.cpp to 1, that means to run 1 image at one time:
```
[GIE]  Accumulated network time - 4.251647 ms
class 0950 - 0.978982  (orange)
class 0951 - 0.020888  (lemon)
```
You can see that, with batch inference, the time to run is saved.

## Run on TX1/TX2:
Replace the following part in CMakeLists.txt 
```
include_directories(/usr/include/gstreamer-1.0 /usr/lib/x86_64-linux-gnu/gstreamer-1.0/include /usr/include/glib-2.0 /usr/include/libxml2 /usr/lib/x86_64-linux-gnu/glib-2.0/include/)
```
with:
```
include_directories(/usr/include/gstreamer-1.0 /usr/lib/aarch64-linux-gnu/gstreamer-1.0/include /usr/include/glib-2.0 /usr/include/libxml2 /usr/lib/aarch64-linux-gnu/glib-2.0/include/)
```
then:
```
cd jetson-inference/
mkdir build
cd build
cmake ../
make -j
```
Results on TX1:
```
1 image : Accumulated network time - 43.625263 ms
2 images: Accumulated network time - 53.076714 ms
3 images: Accumulated network time - 60.256248 ms
```

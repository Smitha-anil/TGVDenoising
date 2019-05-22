#include <cstddef>

static const char anorm_kernel[] = {
0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x5f, 0x5f, 0x43, 0x4c, 0x49, 0x4f, 0x4e, 0x5f, 0x49, 0x44, 0x45, 0x5f, 0x5f, 
0x0a, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6c, 0x69, 0x62, 0x67, 0x70, 0x75, 0x2f, 0x6f, 
0x70, 0x65, 0x6e, 0x63, 0x6c, 0x2f, 0x63, 0x6c, 0x2f, 0x63, 0x6c, 0x69, 0x6f, 0x6e, 0x5f, 0x64, 0x65, 0x66, 0x69, 0x6e, 
0x65, 0x73, 0x2e, 0x63, 0x6c, 0x3e, 0x0a, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 0x6c, 0x69, 0x6e, 
0x65, 0x20, 0x36, 0x0a, 0x0a, 0x5f, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x20, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x61, 
0x6e, 0x6f, 0x72, 0x6d, 0x28, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 
0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x2a, 0x6d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x2c, 0x0a, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 
0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x2a, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 
0x2c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x77, 0x69, 0x64, 
0x74, 0x68, 0x2c, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x68, 0x65, 0x69, 
0x67, 0x68, 0x74, 0x2c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 
0x6e, 0x2c, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x64, 0x69, 0x6d, 0x2c, 
0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x72, 0x29, 0x20, 0x7b, 0x20, 0x2f, 0x2f, 0x6e, 0x20, 0x2d, 0x20, 0x73, 0x69, 
0x7a, 0x65, 0x6f, 0x66, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 
0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20, 
0x3d, 0x20, 0x67, 0x65, 0x74, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x69, 0x64, 0x28, 0x30, 0x29, 0x3b, 0x0a, 
0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 
0x6e, 0x74, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x3d, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 
0x20, 0x2a, 0x20, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 
0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, 0x70, 0x73, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x30, 0x31, 0x66, 0x3b, 
0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20, 0x3c, 0x20, 0x6e, 0x29, 0x20, 
0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 
0x61, 0x6c, 0x69, 0x7a, 0x65, 0x64, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x66, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x74, 0x20, 
0x69, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x64, 0x69, 0x6d, 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 
0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 
0x6c, 0x69, 0x7a, 0x65, 0x64, 0x20, 0x2b, 0x3d, 0x20, 0x28, 0x6d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x5b, 0x69, 0x6e, 0x64, 
0x65, 0x78, 0x20, 0x2b, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x2a, 0x20, 0x69, 0x5d, 0x2a, 
0x6d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x5b, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20, 0x2b, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 
0x53, 0x69, 0x7a, 0x65, 0x20, 0x2a, 0x20, 0x69, 0x5d, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5b, 0x69, 0x6e, 0x64, 
0x65, 0x78, 0x5d, 0x20, 0x3d, 0x20, 0x73, 0x71, 0x72, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 
0x64, 0x29, 0x20, 0x2f, 0x20, 0x72, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x28, 0x72, 
0x65, 0x73, 0x75, 0x6c, 0x74, 0x5b, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x5d, 0x20, 0x3c, 0x20, 0x65, 0x70, 0x73, 0x29, 0x7b, 
0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5b, 
0x69, 0x6e, 0x64, 0x65, 0x78, 0x5d, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x66, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x7d, 
};

static size_t anorm_kernel_length = sizeof(anorm_kernel) / sizeof(char);
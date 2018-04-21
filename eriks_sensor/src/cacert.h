/* Generate a binary certificate:
   $ openssl x509 -outform der -in fullchain.pem -out fullchain.der

   Then convert to hexadecimal
   $ xxd --include fullchain.der
*/

const unsigned char CAcert[] = {
  0x30, 0x82, 0x04, 0x92, 0x30, 0x82, 0x03, 0x7a, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x10, 0x0a, 0x01, 0x41, 0x42, 0x00, 0x00, 0x01, 0x53, 0x85,
  0x73, 0x6a, 0x0b, 0x85, 0xec, 0xa7, 0x08, 0x30, 0x0d, 0x06, 0x09, 0x2a,
  0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x30, 0x3f,
  0x31, 0x24, 0x30, 0x22, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x1b, 0x44,
  0x69, 0x67, 0x69, 0x74, 0x61, 0x6c, 0x20, 0x53, 0x69, 0x67, 0x6e, 0x61,
  0x74, 0x75, 0x72, 0x65, 0x20, 0x54, 0x72, 0x75, 0x73, 0x74, 0x20, 0x43,
  0x6f, 0x2e, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13,
  0x0e, 0x44, 0x53, 0x54, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41,
  0x20, 0x58, 0x33, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x36, 0x30, 0x33, 0x31,
  0x37, 0x31, 0x36, 0x34, 0x30, 0x34, 0x36, 0x5a, 0x17, 0x0d, 0x32, 0x31,
  0x30, 0x33, 0x31, 0x37, 0x31, 0x36, 0x34, 0x30, 0x34, 0x36, 0x5a, 0x30,
  0x4a, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
  0x55, 0x53, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13,
  0x0d, 0x4c, 0x65, 0x74, 0x27, 0x73, 0x20, 0x45, 0x6e, 0x63, 0x72, 0x79,
  0x70, 0x74, 0x31, 0x23, 0x30, 0x21, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13,
  0x1a, 0x4c, 0x65, 0x74, 0x27, 0x73, 0x20, 0x45, 0x6e, 0x63, 0x72, 0x79,
  0x70, 0x74, 0x20, 0x41, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x74, 0x79,
  0x20, 0x58, 0x33, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a,
  0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82,
  0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00,
  0x9c, 0xd3, 0x0c, 0xf0, 0x5a, 0xe5, 0x2e, 0x47, 0xb7, 0x72, 0x5d, 0x37,
  0x83, 0xb3, 0x68, 0x63, 0x30, 0xea, 0xd7, 0x35, 0x26, 0x19, 0x25, 0xe1,
  0xbd, 0xbe, 0x35, 0xf1, 0x70, 0x92, 0x2f, 0xb7, 0xb8, 0x4b, 0x41, 0x05,
  0xab, 0xa9, 0x9e, 0x35, 0x08, 0x58, 0xec, 0xb1, 0x2a, 0xc4, 0x68, 0x87,
  0x0b, 0xa3, 0xe3, 0x75, 0xe4, 0xe6, 0xf3, 0xa7, 0x62, 0x71, 0xba, 0x79,
  0x81, 0x60, 0x1f, 0xd7, 0x91, 0x9a, 0x9f, 0xf3, 0xd0, 0x78, 0x67, 0x71,
  0xc8, 0x69, 0x0e, 0x95, 0x91, 0xcf, 0xfe, 0xe6, 0x99, 0xe9, 0x60, 0x3c,
  0x48, 0xcc, 0x7e, 0xca, 0x4d, 0x77, 0x12, 0x24, 0x9d, 0x47, 0x1b, 0x5a,
  0xeb, 0xb9, 0xec, 0x1e, 0x37, 0x00, 0x1c, 0x9c, 0xac, 0x7b, 0xa7, 0x05,
  0xea, 0xce, 0x4a, 0xeb, 0xbd, 0x41, 0xe5, 0x36, 0x98, 0xb9, 0xcb, 0xfd,
  0x6d, 0x3c, 0x96, 0x68, 0xdf, 0x23, 0x2a, 0x42, 0x90, 0x0c, 0x86, 0x74,
  0x67, 0xc8, 0x7f, 0xa5, 0x9a, 0xb8, 0x52, 0x61, 0x14, 0x13, 0x3f, 0x65,
  0xe9, 0x82, 0x87, 0xcb, 0xdb, 0xfa, 0x0e, 0x56, 0xf6, 0x86, 0x89, 0xf3,
  0x85, 0x3f, 0x97, 0x86, 0xaf, 0xb0, 0xdc, 0x1a, 0xef, 0x6b, 0x0d, 0x95,
  0x16, 0x7d, 0xc4, 0x2b, 0xa0, 0x65, 0xb2, 0x99, 0x04, 0x36, 0x75, 0x80,
  0x6b, 0xac, 0x4a, 0xf3, 0x1b, 0x90, 0x49, 0x78, 0x2f, 0xa2, 0x96, 0x4f,
  0x2a, 0x20, 0x25, 0x29, 0x04, 0xc6, 0x74, 0xc0, 0xd0, 0x31, 0xcd, 0x8f,
  0x31, 0x38, 0x95, 0x16, 0xba, 0xa8, 0x33, 0xb8, 0x43, 0xf1, 0xb1, 0x1f,
  0xc3, 0x30, 0x7f, 0xa2, 0x79, 0x31, 0x13, 0x3d, 0x2d, 0x36, 0xf8, 0xe3,
  0xfc, 0xf2, 0x33, 0x6a, 0xb9, 0x39, 0x31, 0xc5, 0xaf, 0xc4, 0x8d, 0x0d,
  0x1d, 0x64, 0x16, 0x33, 0xaa, 0xfa, 0x84, 0x29, 0xb6, 0xd4, 0x0b, 0xc0,
  0xd8, 0x7d, 0xc3, 0x93, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x82, 0x01,
  0x7d, 0x30, 0x82, 0x01, 0x79, 0x30, 0x12, 0x06, 0x03, 0x55, 0x1d, 0x13,
  0x01, 0x01, 0xff, 0x04, 0x08, 0x30, 0x06, 0x01, 0x01, 0xff, 0x02, 0x01,
  0x00, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04,
  0x04, 0x03, 0x02, 0x01, 0x86, 0x30, 0x7f, 0x06, 0x08, 0x2b, 0x06, 0x01,
  0x05, 0x05, 0x07, 0x01, 0x01, 0x04, 0x73, 0x30, 0x71, 0x30, 0x32, 0x06,
  0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x30, 0x01, 0x86, 0x26, 0x68,
  0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x69, 0x73, 0x72, 0x67, 0x2e, 0x74,
  0x72, 0x75, 0x73, 0x74, 0x69, 0x64, 0x2e, 0x6f, 0x63, 0x73, 0x70, 0x2e,
  0x69, 0x64, 0x65, 0x6e, 0x74, 0x72, 0x75, 0x73, 0x74, 0x2e, 0x63, 0x6f,
  0x6d, 0x30, 0x3b, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x30,
  0x02, 0x86, 0x2f, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x61, 0x70,
  0x70, 0x73, 0x2e, 0x69, 0x64, 0x65, 0x6e, 0x74, 0x72, 0x75, 0x73, 0x74,
  0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x72, 0x6f, 0x6f, 0x74, 0x73, 0x2f, 0x64,
  0x73, 0x74, 0x72, 0x6f, 0x6f, 0x74, 0x63, 0x61, 0x78, 0x33, 0x2e, 0x70,
  0x37, 0x63, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30,
  0x16, 0x80, 0x14, 0xc4, 0xa7, 0xb1, 0xa4, 0x7b, 0x2c, 0x71, 0xfa, 0xdb,
  0xe1, 0x4b, 0x90, 0x75, 0xff, 0xc4, 0x15, 0x60, 0x85, 0x89, 0x10, 0x30,
  0x54, 0x06, 0x03, 0x55, 0x1d, 0x20, 0x04, 0x4d, 0x30, 0x4b, 0x30, 0x08,
  0x06, 0x06, 0x67, 0x81, 0x0c, 0x01, 0x02, 0x01, 0x30, 0x3f, 0x06, 0x0b,
  0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0xdf, 0x13, 0x01, 0x01, 0x01, 0x30,
  0x30, 0x30, 0x2e, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x02,
  0x01, 0x16, 0x22, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x63, 0x70,
  0x73, 0x2e, 0x72, 0x6f, 0x6f, 0x74, 0x2d, 0x78, 0x31, 0x2e, 0x6c, 0x65,
  0x74, 0x73, 0x65, 0x6e, 0x63, 0x72, 0x79, 0x70, 0x74, 0x2e, 0x6f, 0x72,
  0x67, 0x30, 0x3c, 0x06, 0x03, 0x55, 0x1d, 0x1f, 0x04, 0x35, 0x30, 0x33,
  0x30, 0x31, 0xa0, 0x2f, 0xa0, 0x2d, 0x86, 0x2b, 0x68, 0x74, 0x74, 0x70,
  0x3a, 0x2f, 0x2f, 0x63, 0x72, 0x6c, 0x2e, 0x69, 0x64, 0x65, 0x6e, 0x74,
  0x72, 0x75, 0x73, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x44, 0x53, 0x54,
  0x52, 0x4f, 0x4f, 0x54, 0x43, 0x41, 0x58, 0x33, 0x43, 0x52, 0x4c, 0x2e,
  0x63, 0x72, 0x6c, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16,
  0x04, 0x14, 0xa8, 0x4a, 0x6a, 0x63, 0x04, 0x7d, 0xdd, 0xba, 0xe6, 0xd1,
  0x39, 0xb7, 0xa6, 0x45, 0x65, 0xef, 0xf3, 0xa8, 0xec, 0xa1, 0x30, 0x0d,
  0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05,
  0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0xdd, 0x33, 0xd7, 0x11, 0xf3, 0x63,
  0x58, 0x38, 0xdd, 0x18, 0x15, 0xfb, 0x09, 0x55, 0xbe, 0x76, 0x56, 0xb9,
  0x70, 0x48, 0xa5, 0x69, 0x47, 0x27, 0x7b, 0xc2, 0x24, 0x08, 0x92, 0xf1,
  0x5a, 0x1f, 0x4a, 0x12, 0x29, 0x37, 0x24, 0x74, 0x51, 0x1c, 0x62, 0x68,
  0xb8, 0xcd, 0x95, 0x70, 0x67, 0xe5, 0xf7, 0xa4, 0xbc, 0x4e, 0x28, 0x51,
  0xcd, 0x9b, 0xe8, 0xae, 0x87, 0x9d, 0xea, 0xd8, 0xba, 0x5a, 0xa1, 0x01,
  0x9a, 0xdc, 0xf0, 0xdd, 0x6a, 0x1d, 0x6a, 0xd8, 0x3e, 0x57, 0x23, 0x9e,
  0xa6, 0x1e, 0x04, 0x62, 0x9a, 0xff, 0xd7, 0x05, 0xca, 0xb7, 0x1f, 0x3f,
  0xc0, 0x0a, 0x48, 0xbc, 0x94, 0xb0, 0xb6, 0x65, 0x62, 0xe0, 0xc1, 0x54,
  0xe5, 0xa3, 0x2a, 0xad, 0x20, 0xc4, 0xe9, 0xe6, 0xbb, 0xdc, 0xc8, 0xf6,
  0xb5, 0xc3, 0x32, 0xa3, 0x98, 0xcc, 0x77, 0xa8, 0xe6, 0x79, 0x65, 0x07,
  0x2b, 0xcb, 0x28, 0xfe, 0x3a, 0x16, 0x52, 0x81, 0xce, 0x52, 0x0c, 0x2e,
  0x5f, 0x83, 0xe8, 0xd5, 0x06, 0x33, 0xfb, 0x77, 0x6c, 0xce, 0x40, 0xea,
  0x32, 0x9e, 0x1f, 0x92, 0x5c, 0x41, 0xc1, 0x74, 0x6c, 0x5b, 0x5d, 0x0a,
  0x5f, 0x33, 0xcc, 0x4d, 0x9f, 0xac, 0x38, 0xf0, 0x2f, 0x7b, 0x2c, 0x62,
  0x9d, 0xd9, 0xa3, 0x91, 0x6f, 0x25, 0x1b, 0x2f, 0x90, 0xb1, 0x19, 0x46,
  0x3d, 0xf6, 0x7e, 0x1b, 0xa6, 0x7a, 0x87, 0xb9, 0xa3, 0x7a, 0x6d, 0x18,
  0xfa, 0x25, 0xa5, 0x91, 0x87, 0x15, 0xe0, 0xf2, 0x16, 0x2f, 0x58, 0xb0,
  0x06, 0x2f, 0x2c, 0x68, 0x26, 0xc6, 0x4b, 0x98, 0xcd, 0xda, 0x9f, 0x0c,
  0xf9, 0x7f, 0x90, 0xed, 0x43, 0x4a, 0x12, 0x44, 0x4e, 0x6f, 0x73, 0x7a,
  0x28, 0xea, 0xa4, 0xaa, 0x6e, 0x7b, 0x4c, 0x7d, 0x87, 0xdd, 0xe0, 0xc9,
  0x02, 0x44, 0xa7, 0x87, 0xaf, 0xc3, 0x34, 0x5b, 0xb4, 0x42
};

const unsigned int CAcert_len = 1174;

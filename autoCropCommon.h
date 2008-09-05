l_uint32 calcLimitLeft(l_uint32 w, l_uint32 h, l_float32 angle);

l_int32 FindBindingEdge2(PIX      *pixg,
                         l_int32  rotDir,
                         l_uint32 topEdge,
                         l_uint32 bottomEdge,
                         float    *skew,
                         l_uint32 *thesh);

PIX* ConvertToGray(PIX *pix);


double CalculateAvgCol(PIX      *pixg,
                       l_uint32 i,
                       l_uint32 jTop,
                       l_uint32 jBot);

l_uint32 CalculateSADcol(PIX        *pixg,
                         l_uint32   left,
                         l_uint32   right,
                         l_uint32   jTop,
                         l_uint32   jBot,
                         l_int32    *reti,
                         l_uint32   *retDiff
                        );

l_int32 CalculateTreshInitial(PIX *pixg);

l_int32 RemoveBackgroundTop(PIX *pixg, l_int32 rotDir, l_int32 initialBlackThresh);
l_int32 RemoveBackgroundBottom(PIX *pixg, l_int32 rotDir, l_int32 initialBlackThresh);

l_int32 CalculateNumBlackPelsRow(PIX *pixg, l_int32 j, l_int32 limitL, l_int32 limitR, l_uint32 blackThresh);
l_int32 CalculateNumBlackPelsCol(PIX *pixg, l_int32 i, l_int32 limitT, l_int32 limitB, l_uint32 blackThresh);
l_int32 CalculateMinRow(PIX *pixg, l_int32 j, l_int32 limitL, l_int32 limitR);
l_int32 CalculateMinCol(PIX *pixg, l_int32 i, l_int32 limitT, l_int32 limitB);

l_int32 FindDarkRowUp(PIX *pixg, l_int32 limitB, l_int32 limitL, l_int32 limitR, l_uint32 blackThresh, l_int32 blackLimit);
l_int32 FindDarkRowDown(PIX *pixg, l_int32 limitT, l_int32 limitL, l_int32 limitR, l_uint32 blackThresh, l_int32 blackLimit);
l_int32 FindDarkColLeft(PIX *pixg, l_int32 limitR, l_int32 limitT, l_int32 limitB, l_uint32 blackThresh, l_int32 blackLimit);
l_int32 FindDarkColRight(PIX *pixg, l_int32 limitL, l_int32 limitT, l_int32 limitB, l_uint32 blackThresh, l_int32 blackLimit);
l_int32 FindWhiteRowUp(PIX *pixg, l_int32 limitB, l_int32 limitL, l_int32 limitR, l_uint32 blackThresh, l_int32 blackLimit);
l_int32 FindWhiteRowDown(PIX *pixg, l_int32 limitB, l_int32 limitL, l_int32 limitR, l_uint32 blackThresh, l_int32 blackLimit);
l_int32 FindWhiteColLeft(PIX *pixg, l_int32 limitR, l_int32 limitT, l_int32 limitB, l_uint32 blackThresh, l_int32 blackLimit);

void PrintKeyValue_int32(char *key, l_int32 val);
void DebugKeyValue_int32(char *key, l_int32 val);
void PrintKeyValue_float(char *key, l_float32 val);
void PrintKeyValue_str(char *key, char *val);

l_int32 min_int32(l_int32 a, l_int32 b);
l_int32 max_int32(l_int32 a, l_int32 b);

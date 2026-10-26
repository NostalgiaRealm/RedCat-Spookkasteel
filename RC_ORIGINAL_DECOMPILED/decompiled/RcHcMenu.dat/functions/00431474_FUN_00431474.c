/*
 * FUN_00431474 at 00431474
 * undefined __register FUN_00431474(int * param_1)
 * Address ranges: 00431474-004314a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431474(int *param_1)

{
  if (param_1[0x17] != 0) {
    FUN_0041cfec(param_1,0);
    FUN_00412838(DAT_0057378c,(int)param_1);
    ReleaseDC((HWND)param_1[0x18],(HDC)param_1[0x17]);
    param_1[0x17] = 0;
  }
  return;
}


/*
 * FUN_0044f670 at 0044f670
 * undefined __register FUN_0044f670(int param_1, int param_2, int param_3)
 * Address ranges: 0044f670-0044f6b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044f670(int param_1,int param_2,int param_3)

{
  HCURSOR pHVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      pHVar1 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
      *(HCURSOR *)(param_1 + 0x54) = pHVar1;
    }
    else {
      *(int *)(param_1 + 0x54) = param_3;
    }
  }
  else if (param_2 != -1) {
    FUN_0044f300(param_1,param_2);
    if (param_3 != 0) {
      FUN_0044f348(param_1,param_2,param_3);
    }
  }
  return;
}


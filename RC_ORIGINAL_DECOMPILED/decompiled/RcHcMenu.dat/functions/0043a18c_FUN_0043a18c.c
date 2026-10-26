/*
 * FUN_0043a18c at 0043a18c
 * bool __register FUN_0043a18c(int * param_1, HWND param_2, int param_3, int param_4)
 * Address ranges: 0043a18c-0043a1eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0043a18c(int *param_1,HWND param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = FUN_0043e3b4((int)param_1);
  if (bVar1) {
    if (*(char *)((int)param_1 + 0x62) == '\0') {
      FUN_0043a100(param_1,param_1[0x1c],param_1[0x1a],param_1[0x1b]);
    }
    FUN_0043a034((int)param_1);
    bVar2 = FUN_0043a1ec((int)param_1,param_2,param_3,param_4);
    if (bVar2) {
      ShowCursor(0);
    }
  }
  return bVar2;
}


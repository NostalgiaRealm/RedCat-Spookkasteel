/*
 * FUN_00444ea4 at 00444ea4
 * undefined __register FUN_00444ea4(int * param_1, undefined4 param_2, int param_3, undefined1 param_4)
 * Address ranges: 00444ea4-00444efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444ea4(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (param_1[0xb] != 0) {
    uVar1 = FUN_00444828(param_1);
    if (param_3 == 0) {
      SendMessageA((HWND)param_1[0xb],0xb015,0,0);
    }
    if ((char)uVar1 != '\0') {
      DrawMenuBar((HWND)param_1[0xb]);
    }
  }
  FUN_004449a0(param_1,param_2,param_3,param_4);
  return;
}


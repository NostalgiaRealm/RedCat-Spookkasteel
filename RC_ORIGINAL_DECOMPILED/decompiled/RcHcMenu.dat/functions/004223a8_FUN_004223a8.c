/*
 * FUN_004223a8 at 004223a8
 * undefined __register FUN_004223a8(int * param_1, int param_2)
 * Address ranges: 004223a8-004223f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004223a8(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != param_1[0xb]) {
    if (param_2 == 0x20000000) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    param_1[0xb] = param_2;
    iVar1 = param_1[8];
    if (1 < *(int *)(iVar1 + 4)) {
      FUN_00421648((int)param_1);
      FUN_004210b8((int)param_1,*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                   (undefined4 *)(iVar1 + 0x18));
    }
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


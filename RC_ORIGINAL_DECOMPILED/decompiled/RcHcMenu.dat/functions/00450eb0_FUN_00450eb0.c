/*
 * FUN_00450eb0 at 00450eb0
 * undefined __register FUN_00450eb0(int param_1, int * param_2)
 * Address ranges: 00450eb0-00450ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00450eb0(int param_1,int *param_2)

{
  uint uVar1;
  CHAR local_108 [256];
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x7c));
  }
  else {
    uVar1 = GetWindowTextA(*(HWND *)(param_1 + 0x24),local_108,0x100);
    FUN_00403e98(param_2,(undefined4 *)local_108,uVar1);
  }
  return;
}


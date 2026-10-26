/*
 * FUN_004f5050 at 004f5050
 * undefined __register FUN_004f5050(int param_1, int param_2)
 * Address ranges: 004f5050-004f50be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5050(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_0043f270(*(int *)(param_1 + 0x1fc),*(int *)(param_1 + 0x1f8));
  }
  *(int *)(param_1 + 0x1fc) = param_2;
  if (param_2 != 0) {
    FUN_0043f2b4(param_2,*(int *)(param_1 + 0x1f8));
    FUN_00418fe0(*(int *)(param_1 + 0x1fc),param_1,extraout_ECX);
    iVar1 = FUN_0043e588(*(int **)(param_1 + 0x1fc));
    FUN_00433700(param_1,0x1303,0,iVar1);
    return;
  }
  FUN_00433700(param_1,0x1303,0,0);
  return;
}


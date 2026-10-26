/*
 * FUN_00416668 at 00416668
 * undefined __register FUN_00416668(int param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 00416668-004166a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00416668(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = FUN_00414f14((int *)&DAT_00414eec,'\x01',param_1,param_3,(undefined4 *)0x0,param_2,
                        *(int *)(*(int *)(param_4 + -4) + 0x18));
  FUN_004121d8(*(int **)(*(int *)(param_4 + -4) + 0x30),(int)piVar1);
  return;
}


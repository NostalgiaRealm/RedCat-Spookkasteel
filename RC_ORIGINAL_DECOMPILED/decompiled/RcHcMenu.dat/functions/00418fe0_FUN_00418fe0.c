/*
 * FUN_00418fe0 at 00418fe0
 * undefined __register FUN_00418fe0(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 00418fe0-00419030
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418fe0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    iVar2 = FUN_004123e0(*(int *)(param_1 + 0x14),param_2);
    if (iVar2 < 0) {
      FUN_004121d8(*(int **)(param_1 + 0x14),param_2);
      FUN_00418fe0(param_2,param_1,extraout_ECX);
    }
  }
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x100;
  return;
}


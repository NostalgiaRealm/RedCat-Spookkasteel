/*
 * FUN_00476b30 at 00476b30
 * undefined4 __register FUN_00476b30(int param_1, byte param_2, byte param_3, int param_4)
 * Address ranges: 00476b30-00476b72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00476b30(int param_1,byte param_2,byte param_3,int param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = param_4 * 2 + 8;
  puVar2 = (uint *)FUN_00475bec(param_1,*(int *)(param_1 + 0x3c) + 10,iVar3);
  *puVar2 = (uint)param_2;
  puVar2[1] = (uint)param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar3;
  return uVar1;
}


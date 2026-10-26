/*
 * FUN_10007780 at 10007780
 * undefined4 __fastcall FUN_10007780(int param_1, int param_2)
 * Address ranges: 10007780-100077cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10007780(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * 0x14;
  piVar1 = *(int **)(iVar3 + *(int *)(param_1 + 0x14));
  iVar2 = (**(code **)(*piVar1 + 0x80))(piVar1,0);
  if (iVar2 != 0) {
    return 0;
  }
  *(byte *)(iVar3 + 0x10 + *(int *)(param_1 + 0x14)) =
       *(byte *)(iVar3 + 0x10 + *(int *)(param_1 + 0x14)) | 2;
  *(byte *)(iVar3 + 0x10 + *(int *)(param_1 + 0x14)) =
       *(byte *)(iVar3 + 0x10 + *(int *)(param_1 + 0x14)) & 0xfe;
  return 1;
}


/*
 * FUN_10007560 at 10007560
 * undefined4 __fastcall FUN_10007560(int param_1, int param_2)
 * Address ranges: 10007560-100075cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10007560(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_7c [4];
  undefined4 uStack_6c;
  undefined4 *puStack_10;
  
  puVar4 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_7c[0] = 0x7c;
  iVar3 = param_2 * 0x10;
  piVar1 = *(int **)(iVar3 + *(int *)(param_1 + 0x14));
  iVar2 = (**(code **)(*piVar1 + 100))(piVar1,0,local_7c,1,0);
  if (iVar2 != 0) {
    return 0;
  }
  *(byte *)(iVar3 + 0xc + *(int *)(param_1 + 0x14)) =
       *(byte *)(iVar3 + 0xc + *(int *)(param_1 + 0x14)) | 1;
  *puStack_10 = uStack_6c;
  return 1;
}


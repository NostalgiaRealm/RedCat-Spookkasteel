/*
 * FUN_0049cd84 at 0049cd84
 * undefined __register FUN_0049cd84(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0049cd84-0049ce3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049cd84(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int local_14;
  uint local_c;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_4 + -4) + 8) + 8);
  local_c = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    local_c = thunk_FUN_00402874(local_c);
  }
  if (0 < (int)local_c) {
    piVar1 = (int *)FUN_00423498(*(undefined4 **)(*(int *)(param_4 + -4) + 8),param_1);
    iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0049c868);
    piVar1 = (int *)FUN_00423498(*(undefined4 **)(*(int *)(param_4 + -4) + 8),local_c);
    local_14 = FUN_00403224(piVar1,(int)&PTR_FUN_0049c868);
    while (*(uint *)(iVar2 + 0x30) < *(uint *)(local_14 + 0x30)) {
      bVar3 = SBORROW4(local_c,1);
      local_c = local_c - 1;
      if (bVar3) {
        thunk_FUN_00402874(*(uint *)(iVar2 + 0x30));
      }
      piVar1 = (int *)FUN_00423498(*(undefined4 **)(*(int *)(param_4 + -4) + 8),local_c);
      local_14 = FUN_00403224(piVar1,(int)&PTR_FUN_0049c868);
    }
    FUN_00412478(*(int **)(*(int *)(param_4 + -4) + 8),param_1,local_c);
  }
  return;
}


/*
 * FUN_00458304 at 00458304
 * undefined1 __register FUN_00458304(int param_1, int param_2, char * param_3, int * param_4)
 * Address ranges: 00458304-00458323;00458326-0045839d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00458304(int param_1,int param_2,char *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_10;
  undefined1 local_9;
  
  local_10 = 0;
  iVar3 = 1;
  local_9 = 0;
  while ((iVar2 = FUN_00404030(param_2), iVar3 <= iVar2 && (local_10 != param_1))) {
    while ((iVar2 = FUN_00404030(param_2), iVar3 <= iVar2 &&
           (uVar1 = FUN_00458254(param_3,*(char *)(param_2 + -1 + iVar3)), (char)uVar1 != '\0'))) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = FUN_00404030(param_2);
    if (iVar3 <= iVar2) {
      local_10 = local_10 + 1;
    }
    if (local_10 == param_1) {
      *param_4 = iVar3;
      local_9 = 1;
    }
    else {
      while ((iVar2 = FUN_00404030(param_2), iVar3 <= iVar2 &&
             (uVar1 = FUN_00458254(param_3,*(char *)(param_2 + -1 + iVar3)), (char)uVar1 == '\0')))
      {
        iVar3 = iVar3 + 1;
      }
    }
  }
  return local_9;
}


/*
 * FUN_00471860 at 00471860
 * undefined __register FUN_00471860(int param_1)
 * Address ranges: 00471860-00471959
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 40 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 40 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00471860(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  uint *local_10;
  int *local_c;
  int local_8;
  
  local_10 = (uint *)0x0;
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  if (*(char *)(param_1 + 0x99) == '\0') {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x14))();
    if (-1 < iVar1 + -1) {
      local_8 = 0;
      do {
        local_c = (int *)FUN_00468274(*(int **)(param_1 + 0x30),local_8);
        if (((*(char *)((int)local_c + 0x21) != '\0') &&
            (3 < (byte)(*(char *)((int)local_c + 0x21) - 0x1aU))) &&
           (((*(byte *)((int)local_c + 0x22) & 1) == 0 ||
            (*(char *)(*(int *)(param_1 + 0x2c) + 0x3c) != '\0')))) {
          (**(code **)(**(int **)(param_1 + 0x30) + 0xc))
                    (*(int **)(param_1 + 0x30),local_8,&local_10);
          uVar3 = 1;
          FUN_00467c34(local_c,param_1,0,'\x01',local_10);
        }
        local_8 = local_8 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    iVar1 = FUN_0041300c(*(int *)(param_1 + 0x2c));
    if (-1 < iVar1 + -1) {
      local_8 = 0;
      do {
        piVar2 = (int *)FUN_00467ef4(*(int *)(param_1 + 0x2c),local_8);
        if ((*(char *)((int)piVar2 + 0x21) != '\0') &&
           (((*(byte *)((int)piVar2 + 0x22) & 1) == 0 ||
            (*(char *)(*(int *)(param_1 + 0x2c) + 0x3c) != '\0')))) {
          uVar3 = 1;
          FUN_00467c34(piVar2,param_1,0,'\x01',(uint *)0x0);
        }
        local_8 = local_8 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  *in_FS_OFFSET = uVar3;
  FUN_00403db0((int *)&local_10);
  return;
}


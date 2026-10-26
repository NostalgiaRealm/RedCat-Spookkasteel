/*
 * FUN_0043164c at 0043164c
 * undefined __register FUN_0043164c(int param_1, int * param_2)
 * Address ranges: 0043164c-00431712
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 24 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 24 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_0043164c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  int local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  puStack_30 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_20 = 0;
  puStack_34 = &LAB_00431713;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_5 = 1;
  uVar2 = FUN_0040320c(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_00403270(*(int **)(param_1 + 0x10),param_2,extraout_ECX);
    if ((((cVar1 != '\0') && (*(char *)(*(int *)PTR_DAT_005723fc + 0x6c) != '\0')) &&
        (*(short *)(*(int *)(param_1 + 0x10) + 0x68) != 0)) && (*param_2 != 0)) {
      ppuVar3 = &local_c;
      local_1c = *param_2;
      local_18 = 0xb;
      FUN_004408e0(*(ushort *)(*(int *)(param_1 + 0x10) + 0x68),&local_20);
      local_14 = local_20;
      local_10 = 0xb;
      FUN_0040a894((byte *)"%s (%s)",&local_1c,1,(int *)ppuVar3);
      FUN_00403e04(param_2,local_c);
    }
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0043171a;
  puStack_34 = (undefined1 *)0x43170a;
  FUN_00403db0(&local_20);
  puStack_34 = (undefined1 *)0x431712;
  FUN_00403db0((int *)&local_c);
  return;
}


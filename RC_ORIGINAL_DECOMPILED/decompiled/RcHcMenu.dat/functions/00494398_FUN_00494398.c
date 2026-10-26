/*
 * FUN_00494398 at 00494398
 * undefined __register FUN_00494398(int * param_1)
 * Address ranges: 00494398-0049440c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00494398(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  byte local_2c [28];
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_9 = 0;
  puStack_30 = (undefined1 *)0x4943ad;
  local_8 = param_1;
  FUN_0045f830((int)param_1);
  puStack_34 = &LAB_0049440d;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  bVar1 = FUN_00493e54(local_8,local_2c);
  if (bVar1) {
    do {
      local_10 = (int *)FUN_00494c5c(local_8,local_2c);
      cVar2 = (**(code **)(*local_10 + 0x68))();
      if (cVar2 != '\0') {
        local_9 = 1;
      }
      cVar2 = FUN_00493e78(local_8,local_2c);
    } while (cVar2 != '\0');
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00494414;
  puStack_34 = (undefined1 *)0x49440c;
  FUN_0045f898(local_8);
  return;
}


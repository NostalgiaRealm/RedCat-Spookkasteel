/*
 * FUN_0053caa0 at 0053caa0
 * undefined __register FUN_0053caa0(int * param_1)
 * Address ranges: 0053caa0-0053cb5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053caa0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x53cab4;
  local_8 = param_1;
  local_c = (int *)FUN_0049206c((int *)param_1[7]);
  puStack_14 = &LAB_0053cb5f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  cVar1 = (**(code **)(*(int *)local_8[0x22] + 0x50))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)local_8[0x22] + 0x48))();
    FUN_004d6cb4((int *)local_8[0x22],local_c);
    (**(code **)(*(int *)local_8[0x22] + 0x50))();
  }
  else {
    FUN_004d6cb4((int *)local_8[0x22],local_c);
    (**(code **)(*(int *)local_8[0x22] + 0x48))();
  }
  piVar2 = (int *)FUN_00549b80((int)local_8);
  FUN_004d4718((int *)local_8[0xd],piVar2,'\0');
  FUN_0053ce30(local_8,local_c,'\0');
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0053cb66;
  puStack_14 = (undefined1 *)0x53cb5e;
  FUN_00403094(local_c);
  return;
}


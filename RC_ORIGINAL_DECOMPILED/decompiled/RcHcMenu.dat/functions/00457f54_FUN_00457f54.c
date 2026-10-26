/*
 * FUN_00457f54 at 00457f54
 * undefined __register FUN_00457f54(int param_1, int param_2, undefined * param_3)
 * Address ranges: 00457f54-00457fe1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00457f54(int param_1,int param_2,undefined *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_18 = &LAB_00457fff;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x457f79;
  local_8 = param_1;
  FUN_00457e10(param_1,param_2,param_3);
  puStack_20 = (undefined1 *)0x457f81;
  FUN_00457d9c(local_8);
  bVar2 = true;
  puStack_24 = &LAB_00457fe2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00402c8c(*(int **)(local_8 + 0xc),(int *)&DAT_0056fbd0,4);
  if (!bVar2) {
    FUN_00457c08(DAT_00573860,5,(int *)&local_c);
    piVar1 = FUN_0040ceec((int *)&DAT_00457aec,'\x01',local_c);
    FUN_0040382c(piVar1);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00457fe9;
  puStack_24 = (undefined1 *)0x457fe1;
  FUN_0045800c(local_8);
  return;
}


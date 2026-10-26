/*
 * FUN_00480bdc at 00480bdc
 * undefined __register FUN_00480bdc(int param_1, undefined * param_2, int * param_3)
 * Address ranges: 00480bdc-00480c84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480bdc(int param_1,undefined *param_2,int *param_3)

{
  uint uVar1;
  int *in_FS_OFFSET;
  undefined1 *puStackY_1c4;
  int iStack_1b8;
  undefined1 *puStack_1b4;
  undefined1 *puStack_1b0;
  int iStack_1ac;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a4;
  char local_2c [32];
  int *local_c;
  int local_8;
  
  puStack_1a4 = &stack0xfffffffc;
  puStack_1a8 = &LAB_00480d47;
  iStack_1ac = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1ac;
  puStack_1b0 = (undefined1 *)0x480c12;
  local_c = param_3;
  local_8 = param_1;
  FUN_00413580(param_3);
  puStack_1b4 = &LAB_00480d22;
  iStack_1b8 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1b8;
  puStack_1b0 = &stack0xfffffffc;
  (**(code **)(*local_c + 0x40))();
  FUN_0040a1f0(local_2c,param_2,0x1f);
  puStackY_1c4 = (undefined1 *)0x480c44;
  CharToOemA(local_2c,local_2c);
  FUN_00481830(local_8);
  puStackY_1c4 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStackY_1c4;
  uVar1 = thunk_FUN_00479b1d(local_2c);
  FUN_0047fe48(uVar1);
  *in_FS_OFFSET = (int)local_2c;
  puStackY_1c4 = &LAB_00480c8c;
  FUN_00481854(local_8);
  return;
}


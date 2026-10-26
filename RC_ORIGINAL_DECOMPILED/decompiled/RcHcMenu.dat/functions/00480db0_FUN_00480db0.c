/*
 * FUN_00480db0 at 00480db0
 * undefined __register FUN_00480db0(int param_1, byte * param_2, undefined4 param_3)
 * Address ranges: 00480db0-00480e4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480db0(int param_1,byte *param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  undefined4 local_13c;
  undefined1 local_138;
  undefined *local_134 [75];
  int local_8;
  
  puStack_15c = &stack0xfffffffc;
  local_134[0] = (undefined *)0x0;
  puStack_160 = &LAB_00480f22;
  uStack_164 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_164;
  puStack_168 = (undefined1 *)0x480de6;
  local_8 = param_1;
  FUN_00481830(param_1);
  puStack_16c = &LAB_00480e4d;
  uStack_170 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_170;
  local_138 = 0xb;
  puStack_168 = &stack0xfffffffc;
  local_13c = param_3;
  FUN_0040a894(param_2,&local_13c,0,(int *)local_134);
  puVar1 = FUN_004041f4(local_134[0]);
  uVar2 = thunk_FUN_00479035(puVar1);
  FUN_0047fe48(uVar2);
  *in_FS_OFFSET = 0;
  FUN_00481854(local_8);
  return;
}


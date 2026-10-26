/*
 * FUN_0045b45c at 0045b45c
 * undefined __register FUN_0045b45c(int * param_1, char param_2)
 * Address ranges: 0045b45c-0045b4bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045b45c(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  
  puStack_120 = (undefined1 *)0x45b472;
  piVar1 = FUN_00403434(param_1,param_2);
  puStack_124 = &LAB_0045b525;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_130 = &LAB_0045b4cf;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  *in_FS_OFFSET = uStack_140;
  puStack_138 = &LAB_0045b4c5;
  uStack_13c = 0x45b4bd;
  puStack_12c = &stack0xfffffffc;
  puStack_120 = &stack0xfffffffc;
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  return;
}


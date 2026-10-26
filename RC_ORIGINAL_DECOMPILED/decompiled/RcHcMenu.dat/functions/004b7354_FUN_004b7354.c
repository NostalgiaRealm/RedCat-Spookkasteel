/*
 * FUN_004b7354 at 004b7354
 * undefined __register FUN_004b7354(int * param_1, char param_2)
 * Address ranges: 004b7354-004b73a8;004b73b8-004b73da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b7354(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x4b7362;
  piVar1 = FUN_00403434(param_1,param_2);
  puStack_1c = (undefined1 *)0x4b7373;
  FUN_00403094((int *)piVar1[2]);
  if (piVar1[3] != 0) {
    puStack_20 = &LAB_004b73a9;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_004b6e60();
    FUN_00406aa0(piVar1 + 3);
    FUN_004b6e4c();
    *in_FS_OFFSET = uStack_24;
  }
  puStack_1c = (undefined1 *)0x4b73c6;
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    puStack_1c = (undefined1 *)0x4b73d4;
    FUN_00403424(piVar1);
  }
  return;
}


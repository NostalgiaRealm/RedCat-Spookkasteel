/*
 * FUN_004f1b6c at 004f1b6c
 * undefined __register FUN_004f1b6c(int * param_1, char param_2)
 * Address ranges: 004f1b6c-004f1c41;004f1ccd-004f1ce8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f0658 slot -1 for TOACInterface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f0658 slot -1 for
   TOACInterface. Original bytes unchanged; names and types still inferred. */

void FUN_004f1b6c(int *param_1,char param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  char *pcStack_140;
  char *pcStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  byte local_114 [256];
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_12c = (undefined1 *)0x4f1b91;
  local_8 = FUN_00403434(param_1,param_2);
  local_9 = (byte)extraout_EDX;
  puStack_130 = &LAB_004f1d1b;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  puStack_12c = &stack0xfffffffc;
  if (local_8[1] != 1) {
    iStack_138 = 0x4f1bbe;
    puStack_12c = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_114);
    iStack_138 = 0x4f1bcc;
    FUN_00403fd4(&local_14,local_114);
    iStack_138 = local_14;
    pcStack_13c = ".Destroy: ";
    pcStack_140 = "There are still references to interface";
    puStack_144 = (undefined1 *)0x4f1be6;
    FUN_004040f0(&local_10,3);
    puStack_144 = (undefined1 *)0x4f1bf8;
    FUN_00403d94(local_10);
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  puStack_148 = &LAB_004f1ce9;
  puStack_14c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_14c;
  puStack_144 = &stack0xfffffffc;
  if (local_8[3] != 0) {
    puStack_154 = &LAB_004f1c42;
    uStack_158 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_158;
    puVar3 = &LAB_004f183c;
    puStack_150 = &stack0xfffffffc;
    puStack_144 = &stack0xfffffffc;
    FUN_0045fd0c((int *)local_8[3],uVar2,uVar1,&LAB_004f183c,local_8);
    *in_FS_OFFSET = puVar3;
  }
  *in_FS_OFFSET = puStack_154;
  puStack_14c = &LAB_004f1cf0;
  puStack_150 = (undefined1 *)0x4f1ce8;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}


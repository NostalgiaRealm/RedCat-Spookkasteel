/*
 * FUN_004e3a1c at 004e3a1c
 * undefined __register FUN_004e3a1c(int * param_1)
 * Address ranges: 004e3a1c-004e3af4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e3a1c(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  char *local_11c;
  undefined1 local_118;
  byte local_114 [256];
  int local_14;
  byte *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = 0;
  local_10 = (byte *)0x0;
  local_14 = 0;
  puStack_124 = &LAB_004e3af5;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x20] == 0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = ".Sort: ";
    pcVar2 = " Field \'%s\' cannot be nil";
    FUN_004040f0((int *)&local_10,3);
    local_11c = "FAppObjArray";
    local_118 = 0xb;
    FUN_0040a894(local_10,&local_11c,0,(int *)pcVar2);
    FUN_00403d94(local_c);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  local_8[0x22] = -0x80000000;
  FUN_004e2bf4(local_8[0x20]);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_14,3);
  return;
}


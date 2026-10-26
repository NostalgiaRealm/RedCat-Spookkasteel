/*
 * FUN_00494e38 at 00494e38
 * undefined __register FUN_00494e38(int * param_1, byte * param_2, char param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 00494e38-00494f99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00494e38(int *param_1,byte *param_2,char param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_128 [3];
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  byte *local_c;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_128[2] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_134 = &LAB_00494f9a;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 == 0) {
    FUN_00402fe0(*param_1,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_144 = ": PropRef can not be empty";
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
    puVar1 = puStack_130;
  }
  puStack_130 = puVar1;
  uVar2 = FUN_0048e1b4((int)local_c,local_8);
  if ((char)uVar2 == '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(local_128 + 1,local_11c);
    FUN_0048e1ec((int)local_c,local_128);
    FUN_004040f0(local_128 + 2,4);
    FUN_00403d94(local_128[2]);
  }
  piVar3 = (int *)FUN_00494858(local_8);
  local_14 = FUN_00492dd8(piVar3,local_c);
  *param_5 = *(undefined4 *)(local_14 + 0x40);
  uVar2 = FUN_0048d0fc(local_8,local_c,local_d);
  *param_4 = uVar2;
  *in_FS_OFFSET = pcStack_144;
  FUN_00403dd4(local_128,3);
  FUN_00403dd4(&local_1c,2);
  return;
}


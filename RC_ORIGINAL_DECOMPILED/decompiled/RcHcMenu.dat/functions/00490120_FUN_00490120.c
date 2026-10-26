/*
 * FUN_00490120 at 00490120
 * undefined __register FUN_00490120(int * param_1, int * param_2)
 * Address ranges: 00490120-00490261;004902a8-004902dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00490120(int *param_1,int *param_2)

{
  char cVar1;
  int *in_FS_OFFSET;
  int iStack_24c;
  char *pcStack_248;
  undefined1 *puStack_244;
  int iStack_240;
  undefined1 *puStack_23c;
  undefined1 *puStack_238;
  int local_228;
  int local_224;
  byte local_220 [256];
  int local_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;
  
  puStack_238 = &stack0xfffffffc;
  local_228 = 0;
  local_224 = 0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 0;
  local_14 = 0;
  puStack_23c = &LAB_004902de;
  iStack_240 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_240;
  puStack_244 = (undefined1 *)0x490174;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(param_2[0xd],local_114);
  puStack_244 = (undefined1 *)0x490182;
  FUN_00403fd4(&local_14,local_114);
  puStack_244 = (undefined1 *)0x490193;
  cVar1 = (**(code **)(*(int *)local_8[1] + 0x78))((int *)local_8[1],local_14,local_10);
  if (cVar1 != '\0') {
    puStack_244 = (undefined1 *)0x4901a7;
    FUN_00402fe0(*local_8,local_114);
    puStack_244 = (undefined1 *)0x4901b8;
    FUN_00403fd4(&local_11c,local_114);
    puStack_244 = (undefined1 *)local_11c;
    pcStack_248 = ".AddObjDesc: ";
    iStack_24c = 0x4901d3;
    FUN_00402fe0(*local_c,local_220);
    iStack_24c = 0x4901e4;
    FUN_00403fd4(&local_120,local_220);
    iStack_24c = local_120;
    FUN_004040f0(&local_118,4);
    FUN_00403d94(local_118);
  }
  pcStack_248 = &LAB_00490262;
  iStack_24c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24c;
  puStack_244 = &stack0xfffffffc;
  FUN_00402fe0(local_c[0xd],local_114);
  FUN_00403fd4(&local_224,local_114);
  (**(code **)(*(int *)local_8[1] + 0x38))((int *)local_8[1],local_224,local_c);
  *in_FS_OFFSET = iStack_24c;
  *in_FS_OFFSET = iStack_240;
  puStack_238 = &LAB_004902e5;
  puStack_23c = (undefined1 *)0x4902c5;
  FUN_00403dd4(&local_228,2);
  puStack_23c = (undefined1 *)0x4902d5;
  FUN_00403dd4(&local_120,3);
  puStack_23c = (undefined1 *)0x4902dd;
  FUN_00403db0(&local_14);
  return;
}


/*
 * FUN_0054b178 at 0054b178
 * undefined __register FUN_0054b178(int * param_1, byte * param_2, int * param_3, char param_4, char param_5, char param_6, char param_7)
 * Address ranges: 0054b178-0054b3a1;0054b3a9-0054b3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b178(int *param_1,byte *param_2,int *param_3,char param_4,char param_5,char param_6,
                 char param_7)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_14c;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_130;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  byte local_13;
  char local_12;
  char local_11;
  int *local_10;
  byte *local_c;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_12c = 0;
  local_130 = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_13c = &LAB_0054b3d4;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 != (int *)0x0) {
    iVar4 = FUN_0048ec24((int)param_3);
    puVar1 = puStack_138;
    if (0 < iVar4) goto LAB_0054b208;
  }
  puStack_138 = puVar1;
  FUN_00402fe0(*local_8,local_128);
  FUN_00403fd4(&local_28,local_128);
  pcStack_14c = "aSearchPropRefList can not be nil or empty";
  FUN_004040f0(&local_24,3);
  FUN_00403d94(local_24);
LAB_0054b208:
  if ((char)local_8[6] == '\0') {
    FUN_00402fe0(*local_8,local_128);
    FUN_00403fd4(&local_130,local_128);
    FUN_004040f0(&local_12c,3);
    FUN_00403d94(local_12c);
  }
  local_11 = '\0';
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  cVar2 = (**(code **)*local_8)();
  if (cVar2 != '\0') {
    FUN_0054b510((uint)local_8);
    *in_FS_OFFSET = &stack0xfffffea8;
    local_1c = (int *)FUN_0054843c(local_8);
    if (param_6 == '\x01') {
      local_18 = 1;
      if (param_7 == '\0') {
        FUN_00547a58(local_8);
      }
      else {
        FUN_00547c54(local_8);
      }
    }
    else {
      local_18 = 0xffffffff;
      if (param_7 == '\0') {
        FUN_00548044(local_8);
      }
      else {
        FUN_00547e4c(local_8);
      }
    }
    local_13 = 1;
    local_12 = '\0';
    local_20 = (int *)FUN_0049206c((int *)local_8[7]);
    while( true ) {
      bVar3 = (**(code **)*local_8)();
      if ((((bVar3 & local_13) == 0) || (local_12 != '\0')) || (local_11 != '\0')) break;
      FUN_0054a2f8(local_8,(int)local_20);
      local_11 = FUN_0054af54(local_c,local_20,local_10,param_4,param_5,(int)&stack0xfffffffc);
      if (local_11 == '\0') {
        local_13 = FUN_0054823c(local_8,local_18);
        if (*(short *)((int)local_8 + 0x4a) != 0) {
          (*(code *)local_8[0x12])(local_8[0x13],&local_12);
        }
      }
    }
    if (local_11 == '\0') {
      FUN_00548598(local_8,(int)local_1c);
    }
    *in_FS_OFFSET = &stack0xfffffffc;
    FUN_00403094(local_20);
    FUN_00403094(local_1c);
    FUN_0054b528(local_8);
    return;
  }
  *in_FS_OFFSET = pcStack_14c;
  FUN_00403dd4(&local_130,2);
  FUN_00403dd4(&local_28,2);
  return;
}


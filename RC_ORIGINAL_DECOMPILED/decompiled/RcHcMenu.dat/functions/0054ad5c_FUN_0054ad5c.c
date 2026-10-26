/*
 * FUN_0054ad5c at 0054ad5c
 * undefined __register FUN_0054ad5c(byte * param_1, int * param_2, char param_3, char param_4, int param_5)
 * Address ranges: 0054ad5c-0054aee0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054ad5c(byte *param_1,int *param_2,char param_3,char param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  byte *local_128;
  int local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  undefined1 local_e;
  char local_d;
  int *local_c;
  byte *local_8;
  
  local_128 = (byte *)0x0;
  local_124 = 0;
  local_1c = 0;
  local_20 = 0;
  local_14 = (char *)0x0;
  puStack_130 = (undefined1 *)0x54ad8e;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_134 = &LAB_0054aee1;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_130 = &stack0xfffffffc;
  if (local_c == (int *)0x0) {
    puStack_130 = &stack0xfffffffc;
    FUN_00402fe0(**(int **)(param_5 + -4),local_120);
    FUN_00403fd4(&local_20,local_120);
    pcStack_144 = "aAppProp can not be nil";
    FUN_004040f0(&local_1c,3);
    FUN_00403d94(local_1c);
  }
  local_e = 0;
  cVar1 = (**(code **)(*local_c + 0x4c))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*local_c + 0x50))(), cVar1 == '\0')) {
    if (param_4 == '\x01') {
      FUN_00409690(local_8,&local_124);
      FUN_00403e48((int *)&local_8,local_124);
      FUN_004966b4(local_c,&local_128);
      FUN_00409690(local_128,(int *)&local_14);
    }
    else {
      FUN_004966b4(local_c,&local_14);
    }
    if (local_d == '\x02') {
      iVar2 = FUN_00409838(local_8,local_14);
      local_e = iVar2 == 0;
    }
    else {
      local_18 = FUN_0040431c((char *)local_8,local_14);
      if (((local_18 == 1) && (local_d == '\0')) || ((0 < local_18 && (local_d == '\x01')))) {
        local_e = 1;
      }
      else {
        local_e = 0;
      }
    }
  }
  *in_FS_OFFSET = pcStack_144;
  FUN_00403dd4((int *)&local_128,2);
  FUN_00403dd4(&local_20,2);
  FUN_00403db0((int *)&local_14);
  FUN_00403db0((int *)&local_8);
  return;
}


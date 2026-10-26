/*
 * FUN_00490bd8 at 00490bd8
 * undefined __register FUN_00490bd8(int * param_1, undefined4 * param_2, undefined4 param_3, byte param_4, int param_5, undefined4 param_6, int param_7, undefined4 param_8, int param_9)
 * Address ranges: 00490bd8-00490d72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00490bd8(int *param_1,undefined4 *param_2,undefined4 param_3,byte param_4,int param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  undefined4 *local_144;
  undefined1 local_140;
  int local_13c;
  byte local_138 [256];
  int local_38;
  int local_34;
  byte local_30 [28];
  int *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_154 = &stack0xfffffffc;
  local_34 = 0;
  local_38 = 0;
  local_13c = 0;
  for (iVar2 = param_5; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  for (iVar2 = param_7; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  for (iVar2 = param_9; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  local_10 = &stack0xfffffeb0;
  puStack_158 = &LAB_00490d73;
  iStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_15c;
  iVar2 = 0x490c58;
  local_c = param_2;
  local_8 = param_1;
  local_14 = FUN_00496f60((int *)&DAT_0048e950,'\x01',(int)param_1,param_4,param_2);
  FUN_0048ed08((int *)local_14[6],local_10,param_9);
  FUN_0048ed08((int *)local_14[4],&stack0xfffffeb0,param_7);
  FUN_0048ed08((int *)local_14[5],&stack0xfffffeb0,param_5);
  FUN_00492408((int *)local_14[1],local_30);
  cVar1 = FUN_0048ef44((int *)local_14[6],local_30);
  if (cVar1 != '\0') {
    FUN_00492408((int *)local_14[1],local_30);
    cVar1 = FUN_0048ef44((int *)local_14[5],local_30);
    if (cVar1 != '\0') goto LAB_00490d42;
  }
  FUN_00402fe0(*local_8,local_138);
  FUN_00403fd4(&local_38,local_138);
  local_144 = local_c;
  local_140 = 0xb;
  FUN_0040a894((byte *)
               "The SortPropRefList and the SelectPropRefList of sortorder \"%s\" must contain PK-appProp."
               ,&local_144,0,&local_13c);
  iVar2 = local_13c;
  FUN_004040f0(&local_34,3);
  FUN_00403d94(local_34);
LAB_00490d42:
  FUN_004926bc((int)local_8,(int)local_14);
  *in_FS_OFFSET = iVar2;
  FUN_00403db0(&local_13c);
  FUN_00403dd4(&local_38,2);
  return;
}


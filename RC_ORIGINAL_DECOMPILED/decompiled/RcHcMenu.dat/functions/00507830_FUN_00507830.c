/*
 * FUN_00507830 at 00507830
 * int * __register FUN_00507830(int * param_1, char param_2, int * param_3)
 * Address ranges: 00507830-00507ab5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5073b8 slot 11 for TDaviCalendar. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5073b8 slot 11 for
   TDaviCalendar. Original bytes unchanged; names and types still inferred. */

int * FUN_00507830(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *extraout_ECX;
  int iVar3;
  uint uVar4;
  uint extraout_ECX_00;
  int iVar5;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  float10 in_ST0;
  undefined4 uVar7;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  int local_20 [4];
  int *local_10;
  char local_9;
  int *local_8;
  
  bVar6 = 0;
  local_9 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc8,in_stack_ffffffcc);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  local_10 = param_3;
  local_8 = param_1;
  FUN_0043a330(param_1,'\0',param_3);
  FUN_00431f78(local_8,0xd2);
  FUN_00431f98(local_8,0x104);
  *(undefined1 *)(local_8 + 0x98) = 1;
  FUN_00411624(5,5,0x1e,local_20,0x17);
  piVar2 = local_20;
  piVar1 = local_8 + 0x84;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar2;
    piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
  }
  FUN_00411624(0x1d,5,0x50,local_20,0x17);
  piVar2 = local_20;
  piVar1 = local_8 + 0x8c;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar2;
    piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
  }
  FUN_00411624(0x4f,5,0x82,local_20,0x17);
  piVar2 = local_20;
  piVar1 = local_8 + 0x90;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar2;
    piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
  }
  FUN_00411624(0x81,5,0xb4,local_20,0x17);
  piVar2 = local_20;
  piVar1 = local_8 + 0x94;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar2;
    piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
  }
  FUN_00411624(0xb3,5,0xcc,local_20,0x17);
  piVar2 = local_20;
  piVar1 = local_8 + 0x88;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar2;
    piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
  }
  uVar7 = 0xfd;
  piVar2 = local_20;
  uVar4 = local_8[0xe] - 0x68;
  piVar1 = local_8;
  if (SBORROW4(local_8[0xe],0x68)) {
    piVar1 = (int *)thunk_FUN_00402874((uint)local_8);
    uVar4 = extraout_ECX_00;
  }
  iVar3 = (int)uVar4 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
  }
  iVar5 = iVar3 + 0x68;
  if (SCARRY4(iVar3,0x68)) {
    thunk_FUN_00402874((uint)piVar1);
    iVar5 = extraout_ECX_01;
  }
  uVar4 = local_8[0xe] - 0x68;
  if (SBORROW4(local_8[0xe],0x68)) {
    uVar4 = thunk_FUN_00402874(uVar4);
    iVar5 = extraout_ECX_02;
  }
  iVar3 = (int)uVar4 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
  }
  FUN_00411624(iVar3,0xeb,iVar5,piVar2,uVar7);
  piVar2 = local_20;
  piVar1 = local_8 + 0x80;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *piVar2;
    piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
  }
  piVar2 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',0);
  local_8[0x7e] = (int)piVar2;
  (**(code **)(*(int *)local_8[0x7e] + 0x3c))((int *)local_8[0x7e],1);
  FUN_004218f8(local_8[0x7e],DAT_005734dc,"CMDVORIG");
  piVar2 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX_03);
  local_8[0x7f] = (int)piVar2;
  (**(code **)(*(int *)local_8[0x7f] + 0x3c))((int *)local_8[0x7f],1);
  FUN_004218f8(local_8[0x7f],DAT_005734dc,"CMDVOLGEND");
  FUN_0040b0d8();
  *(double *)(local_8 + 0x9c) = (double)in_ST0;
  FUN_0040b090((short *)(local_8 + 0x9b),(ushort *)((int)local_8 + 0x26a),(short *)(local_8 + 0x9a),
               local_8[0x9c],local_8[0x9d]);
  *(short *)(local_8 + 0x21e) = (short)local_8[0x9b];
  local_8[0x99] = 0;
  if (local_9 != '\0') {
    FUN_0040342c(local_8);
    *in_FS_OFFSET = in_stack_ffffffc8;
  }
  return local_8;
}


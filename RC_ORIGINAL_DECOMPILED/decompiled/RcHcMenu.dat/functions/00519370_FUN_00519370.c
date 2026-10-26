/*
 * FUN_00519370 at 00519370
 * undefined __register FUN_00519370(int * param_1, WPARAM param_2, int * param_3, ushort param_4)
 * Address ranges: 00519370-005194b6;005194be-005194d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x518800 slot 45 for TCheckListBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x518800 slot 45 for
   TCheckListBox. Original bytes unchanged; names and types still inferred. */

void FUN_00519370(int *param_1,WPARAM param_2,int *param_3,ushort param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar6;
  int *piVar7;
  uint *in_FS_OFFSET;
  uint uStack_4c;
  undefined1 *puStack_48;
  char cVar8;
  int local_34 [2];
  int local_2c;
  int local_24 [4];
  int local_14;
  int local_10;
  int *local_8;
  
  bVar2 = 0;
  piVar6 = local_24;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *param_3;
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 1;
  }
  local_8 = param_1;
  iVar5 = FUN_005192f4();
  iVar3 = (**(code **)(*(int *)local_8[0x7c] + 0x14))();
  if (iVar3 <= (int)param_2) goto LAB_00519435;
  piVar6 = local_24;
  piVar7 = local_34;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + (uint)bVar2 * -2 + 1;
    piVar7 = piVar7 + (uint)bVar2 * -2 + 1;
  }
  puStack_48 = (undefined1 *)iVar5;
  cVar1 = FUN_00403270(local_8,extraout_EDX,0);
  if (cVar1 == '\0') {
    local_2c = local_24[0];
    local_34[0] = local_24[0] - iVar5;
  }
  else {
    local_34[0] = local_24[2];
    local_2c = iVar5 + local_24[2];
  }
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
LAB_005193fd:
    cVar1 = '\0';
  }
  else {
    bVar2 = FUN_005197d0(local_8,param_2);
    if (bVar2 == 0) goto LAB_005193fd;
    cVar1 = '\x01';
  }
  puStack_48 = (undefined1 *)0x51940e;
  cVar8 = cVar1;
  uVar4 = FUN_005197fc(local_8,param_2);
  puStack_48 = (undefined1 *)0x51941b;
  FUN_0051951c((int)local_8,local_34,(char)uVar4,cVar8);
  if (cVar1 == '\0') {
    FUN_0041bb48(*(int **)(local_8[0x7e] + 0xc),-0x7fffffef,extraout_ECX);
  }
LAB_00519435:
  if (((char)local_8[0x81] == '\0') && (*(short *)((int)local_8 + 0x222) != 0)) {
    local_14 = local_8[0x88];
    local_10 = local_8[0x89];
    local_8[0x88] = 0;
    local_8[0x89] = 0;
    puStack_48 = &LAB_005194b7;
    uStack_4c = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_4c;
    uVar4 = (uint)param_4;
    FUN_0042cf70(local_8,param_2,local_24,param_4);
    *in_FS_OFFSET = uVar4;
    local_8[0x88] = local_14;
    local_8[0x89] = local_10;
    return;
  }
  puStack_48 = (undefined1 *)0x5194d0;
  FUN_0042cf70(local_8,param_2,local_24,param_4);
  return;
}

